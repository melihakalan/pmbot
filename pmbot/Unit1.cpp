//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
LoadALL();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::bbaslaClick(TObject *Sender)
{
int tmint = atoi(tint->Text.c_str());
if(tmint<30){
int a=MessageBox(0,"DC & Donma & Kasma gibi sorunlar icin 30 sn den asagisi asla önerilmez! devam etmek istiyor musunuz?","dikkat!",MB_YESNO);
if(a==7)return;
}
tmpm->Interval=tmint*1000;
tmpm->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::bdurClick(TObject *Sender)
{
tmpm->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::tmpmTimer(TObject *Sender)
{
int natntype=0,lvltype=0;

if(ckarus->Checked)natntype=1;

if(chuman->Checked)natntype=2;

if(clvl->Checked){
lvltype=atoi(tlvl->Text.c_str());
}

int a = AUTOPM(tmsg->Text.c_str(),natntype,lvltype);
int b = atoi(lpm->Caption.c_str());
b+=a;
char c[1];
itoa(b,c,10);
lpm->Caption=c;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::bbasla2Click(TObject *Sender)
{
int tmint = atoi(tint2->Text.c_str());
tmall->Interval=tmint;
tmall->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::bdur2Click(TObject *Sender)
{
tmall->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::tmallTimer(TObject *Sender)
{
ALLSPAM(tall->Text.c_str());
int a = atoi(lchat->Caption.c_str());
a+=1;
char b[1];
itoa(a,b,10);
lchat->Caption=b;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
MessageBox(0,"OtoPM: en üste pm yazýsýný yazýp ek olarak isterseniz seçenekleri belirleyin, basla dediginizde belirttiginiz gecikme süresince etraftaki bütün user'lara (%100) pm atýcaktýr.../n AllChat: Sürekli olarak merchant chat yapar (chat mute sorunu yoktur.)","bilgi",0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
int a = 0;
char b[1];
itoa(a,b,10);
lpm->Caption=b;
lchat->Caption=b;
}
//---------------------------------------------------------------------------

