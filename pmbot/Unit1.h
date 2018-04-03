//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *tmsg;
	TCheckBox *ckarus;
	TCheckBox *chuman;
	TCheckBox *clvl;
	TEdit *tlvl;
	TButton *bbasla;
	TButton *bdur;
	TLabel *Label1;
	TEdit *tint;
	TLabel *Label2;
	TGroupBox *GroupBox1;
	TEdit *tall;
	TLabel *Label3;
	TEdit *tint2;
	TLabel *Label4;
	TButton *bbasla2;
	TButton *bdur2;
	TTimer *tmpm;
	TTimer *tmall;
	TButton *Button1;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *lpm;
	TLabel *lchat;
	TButton *Button2;
	TLabel *Label7;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall bbaslaClick(TObject *Sender);
	void __fastcall bdurClick(TObject *Sender);
	void __fastcall tmpmTimer(TObject *Sender);
	void __fastcall bbasla2Click(TObject *Sender);
	void __fastcall bdur2Click(TObject *Sender);
	void __fastcall tmallTimer(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
