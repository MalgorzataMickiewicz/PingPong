//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TShape *tlo;
        TButton *Button1;
        TImage *p1;
        TImage *p2;
        TImage *b;
        TTimer *timerPilka;
        TTimer *timerLewyGora;
        TTimer *timerPrawyGora;
        TTimer *timerLewyDol;
        TTimer *timerPrawyDol;
        TLabel *Label2;
        TButton *Button2;
        TLabel *Label3;
        TLabel *Label1;
        void __fastcall timerPilkaTimer(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall timerLewyGoraTimer(TObject *Sender);
        void __fastcall timerPrawyGoraTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall timerLewyDolTimer(TObject *Sender);
        void __fastcall timerPrawyDolTimer(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
