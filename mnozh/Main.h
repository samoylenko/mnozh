//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <list>
//---------------------------------------------------------------------------
class TfrmMain : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TEdit *edtA;
    TEdit *edtB;
    TEdit *edtC;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TMemo *m1;
    TMemo *m2;
    TLabel *Label4;
    TLabel *Label5;
    TBitBtn *btnExit;
    TBitBtn *btnCheck;
    TProgressBar *pb1;
    void __fastcall btnExitClick(TObject *Sender);
    void __fastcall btnCheckClick(TObject *Sender);
private:	// User declarations
public:
    __fastcall TfrmMain(TComponent* Owner);
    void __fastcall Parse(AnsiString str, TStringList * list);
    AnsiString __fastcall ToStr(TStringList *lst);
    void __fastcall Dop(TStringList * m_A, TStringList * m_B, TStringList * res);
    void __fastcall Dupes(TStringList * lst);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif
