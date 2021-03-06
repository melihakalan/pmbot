//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H

#include <Classes.hpp>

PROC ThreadAPI =		0;
BYTE SendIndex =		0;
LPCSTR KOTITLE =		"";

#define CopyBytes(Dest, Src) memcpy(Dest, (BYTE*)&Src, sizeof(Src))

DWORD KO_CHAR =		0xC1EA90;
DWORD KO_DLGA = 	0xC1ED84;
DWORD KO_SOCK = 	0xC1ED50;
DWORD KO_SNDF = 	0x474C50;
DWORD KO_SDFX = 	0xC141E8;
DWORD KO_RCVA = 	0x7F4950;
DWORD KO_RCVB = 	0x9BEEDC;
DWORD KO_KEYB = 	0xC1ED4C;
DWORD KO_PRTY = 	0xC1ED70;
DWORD KO_NMSG = 	0xC17128;
DWORD KO_AREA = 	0xC1EA8C;
DWORD KO_FPOZ = 	0x4A7B70;
DWORD KO_SETM = 	0x81FE20;
DWORD KO_FNCZ = 	0x81F350;
DWORD KO_CRYP = 	0x4735F0;
DWORD KO_INDX =		0x472FF0;
DWORD KO_WNDA = 	0xA59F18;
DWORD KO_FPBS = 	0x499110;
DWORD KO_FMBS = 	0x499190;
DWORD KO_RCFX = 	0xC1EE08;
DWORD KO_NXTP = 	0x49DEF0;
DWORD KO_NXTM = 	0x4AB470;
DWORD KO_NXM2 = 	0xC144AC;
DWORD KO_MSBX = 	0x90D000;
DWORD KO_MSOP = 	0x5E59C0;
DWORD KO_DISC = 	0x474180;
DWORD KO_CONN = 	0x474260;
DWORD KO_SCK2 = 	0xAAA4F0;
DWORD KO_THRD =		0xC1EE0C;
DWORD KO_PFIX =		KO_SOCK+0xC1;

DWORD KO_NICK = 	0x5BC;
DWORD KO_LEVL = 	0x5DC;
DWORD KO_CLSS = 	0x5D8;
DWORD KO_MYID = 	0x5B4;
DWORD KO_TGID = 	0x580;
DWORD KO_VELO = 	0x680;
DWORD KO_CRHP = 	0x5E4;
DWORD KO_MXHP = 	0x5E0;
DWORD KO_CRMP = 	0x9A8;
DWORD KO_MXMP = 	0x9A4;
DWORD KO_CRXP = 	0x9C0;
DWORD KO_MXXP = 	0x9B8;
DWORD KO_POSX = 	0xB4;
DWORD KO_POSY = 	0xBC;
DWORD KO_POSZ = 	0xB8;
DWORD KO_COIN = 	0x810;
DWORD KO_VISB = 	0x514;
DWORD KO_NATN = 	0x5D0;
DWORD KO_PTRX = 	0xD44;
DWORD KO_PTRY = 	0xD4C;
DWORD KO_PTRZ = 	0xD48;
DWORD KO_MOV1 = 	0xD38;
DWORD KO_MOV2 = 	0x394;

DWORD KO_PT_ID = 	0x8;
DWORD KO_PT_HP = 	0x14;
DWORD KO_PT_MAXHP = 0x18;
DWORD KO_PT_MP = 	0x1C;
DWORD KO_PT_MAXMP = 0x20;
DWORD KO_PT_LVL = 	0xC;

bool LoadALL();
bool FixSNDF();
bool PSend(BYTE* PPacket,SIZE_T PSize);
int AUTOPM(char* msg,int Nation, int LVL);
bool ALLSPAM(char* msg);
//---------------------------------------------------------------------------
#endif
