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
"Prawy gracz steruje wciskaj�c strza�ki do g�ry i w d�.\n"
"\n""Dla urozmaicenia zabawy: \n"
"Kiedy odbijesz pi�k� na �rodku paletki, w�wczas zmienisz jej k�t odbicia i pi�ka przy�pieszy.\n"
"Im d�u�ej odbijasz, tym pi�ka szybciej przemieszcza si�.\n"
"Mo�esz dowolnie zmienia� pole gry.\n"
"\n""Mi�ej zabawy!","",MB_OK);
}
//---------------------------------------------------------------------------
 