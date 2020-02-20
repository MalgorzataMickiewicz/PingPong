//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormCreate(TObject *Sender)
{
Application -> MessageBox("Witaj w grze PingPong.\n"
"\n" "Lewy gracz steruje wciskajac klawisze A oraz Z.\n"
"Prawy gracz steruje wciskaj¹c strza³ki do góry i w dó³.\n"
"\n""Dla urozmaicenia zabawy: \n"
"Kiedy odbijesz pi³kê na œrodku paletki, wówczas zmienisz jej k¹t odbicia i pi³ka przyœpieszy.\n"
"Im d³u¿ej odbijasz, tym pi³ka szybciej przemieszcza siê.\n"
"Mo¿esz dowolnie zmieniaæ pole gry.\n"
"\n""Mi³ej zabawy!","",MB_OK);
}
//---------------------------------------------------------------------------
 