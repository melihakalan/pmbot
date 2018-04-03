//---------------------------------------------------------------------------


#pragma hdrstop

#include "Unit2.h"
#include "Def.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <time.h>
#include <math.h>

//---------------------------------------------------------------------------

#pragma package(smart_init)

bool LoadALL()
{
ThreadAPI = GetProcAddress(GetModuleHandle("Kernel32.dll"),"GetCurrentThreadId");
if(!ThreadAPI) return false;
if(!FixSNDF()) return false;
return true;
}

bool FixSNDF()
{
__asm{
LEA EAX,[ESP-4]
PUSH EAX
PUSH 4
MOV EAX,[KO_SDFX]
PUSH EAX
PUSH 2
MOV EAX,[KO_INDX]
CALL EAX
ADD ESP,0x0C
POP EAX
MOV SendIndex,AL
}
DWORD SNDF = SendIndex*4;
__asm{
MOV ECX,[KO_SOCK]
MOV ECX,[ECX]
ADD ECX,0x40064
ADD ECX,SNDF
MOV ECX,[ECX]
MOV SNDF,ECX
}
KO_SNDF = SNDF;
return true;
}

bool PSend(BYTE* PPacket,SIZE_T PSize){
if(!PSize) return false;
if(!ThreadAPI) return false;

DWORD THREADBKP=0;

__asm{
MOV ECX,[KO_SOCK]
MOV ECX,[ECX]
PUSH DWORD PTR SS:[EBP+0xC]	//size
PUSH DWORD PTR SS:[EBP+0x8] //packet
MOV EDI,[KO_THRD]
MOV EDI,[EDI]
MOV THREADBKP,EDI
CALL ThreadAPI
MOV EDI,[KO_THRD]
MOV [EDI],EAX
CALL [KO_SNDF]
MOV EDI,THREADBKP
MOV EDX,[KO_THRD]
MOV [EDX],EDI
MOV EDI,[KO_PFIX]
MOV [EDI],0
}
return true;
}

int AUTOPM(char* msg,int Nation, int LVL){
if(!strlen(msg)) return 0;

int CUser = 0;
DWORD Tmp=0,Start=0,Base=0;
__asm{
SUB ESP,4
MOV EAX,[KO_AREA]
MOV EAX,[EAX]
MOV EAX,[EAX+0x3C]
MOV Start,EAX
MOV EAX,[EAX]
MOV Tmp,EAX
}

int a = 0;

while(Tmp != Start)
{
Sleep(100);

__asm{
MOV EAX,Tmp
MOV EAX,[EAX+0x10]
MOV Base,EAX
}

if(Base){
CUser+=1;
if(Nation || LVL){
int uNatn=0,uLvl=0;
__asm{
MOV EAX,Base
MOV EAX,[EAX+0x5D0]
MOV uNatn,EAX
MOV EAX,Base
MOV EAX,[EAX+0x5DC]
MOV uLvl,EAX
}
if(Nation){
if(uNatn != Nation) goto Resume;
}
if(LVL){
if(uLvl < LVL) goto Resume;
}

}
LPSTR Nick[20];
memset(Nick,0,20);
LPVOID NickAddr;
__asm{
MOV EAX,Base
MOV EAX,[EAX+0x5BC]
MOV NickAddr,EAX
}
memcpy(Nick,NickAddr,20);

BYTE* PMWND = new BYTE[strlen((char*)Nick)+4];
BYTE* PMCHAT = new BYTE[strlen(msg)+4];

memcpy(PMWND,PKT_PMWND,4);
memcpy(PMCHAT,PKT_PMCHAT,4);

WORD NickSize = strlen((char*)Nick);
WORD MsgSize = strlen(msg);

CopyBytes(PMWND+2,NickSize);
CopyBytes(PMCHAT+2,MsgSize);

memcpy(PMWND+4,Nick,NickSize);
memcpy(PMCHAT+4,msg,MsgSize);

int size_PMWND = strlen((char*)Nick)+4;
int size_PMCHAT = strlen(msg)+4;

PSend(PMWND,size_PMWND);
PSend(PMCHAT,size_PMCHAT);

}

Resume:
__asm{
MOV EAX,Tmp
MOV [ESP],EAX
MOV ECX,ESP
CALL [KO_NXTP]
MOV EAX,[ESP]
MOV Tmp,EAX
}

}

__asm{
ADD ESP,4
}

return CUser;

}

bool ALLSPAM(char* msg){
if(!strlen(msg)) return false;
BYTE* ALLCHAT = new BYTE[strlen(msg)+4];
memcpy(ALLCHAT,PKT_ALLCHAT,4);
WORD MsgSize = strlen(msg);
CopyBytes(ALLCHAT+2,MsgSize);
memcpy(ALLCHAT+4,msg,MsgSize);
int size_ALLCHAT = strlen(msg)+4;
PSend(ALLCHAT,size_ALLCHAT);
return true;
}
