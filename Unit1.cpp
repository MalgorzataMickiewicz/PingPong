//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "mmsystem.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int x = -8;
int y = -8;
int punktyLewego = 0;
int punktyPrawego = 0;
int iloscOdbic = 0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::timerPilkaTimer(TObject *Sender)
{
           b -> Left += x;
           b -> Top += y;

         //skucha gracz lewy
         if (b -> Left < p1 -> Left){
          timerPilka -> Enabled = false;
          b -> Visible = false;
          punktyPrawego++;
          Label1 -> Visible = true;
          Label2 -> Visible = true;
          Label3-> Visible = true;
          Label1 -> Caption = "Punkty dla gracza prawego >";
          Label3 -> Caption= IntToStr(punktyLewego)+ " : " + IntToStr(punktyPrawego);
          Label2 -> Caption = "Ilosc odbic: " + IntToStr(iloscOdbic);
          Button1 -> Visible = true;
          Button2 -> Visible = true;
          b -> Top = 280;
          b -> Left = 496;
    }
    //skucha gracz prawy
          if(b -> Left > p2 -> Left){
          timerPilka -> Enabled = false;
          b -> Visible = false;
          punktyLewego++;
          Label1 -> Visible = true;
          Label2 -> Visible = true;
          Label3 -> Visible = true;
          Label1 -> Caption = "Punkty dla gracza lewego <";
          Label3 -> Caption= IntToStr(punktyLewego)+ " : " + IntToStr(punktyPrawego);
          Label2 -> Caption = "Ilosc odbic: " + IntToStr(iloscOdbic);
          Button1 -> Visible = true;
          Button2 -> Visible = true;
          b -> Top = 280;
          b -> Left = 496;

         }
         if((b -> Top > p1 -> Top - b -> Height/2 &&
            b -> Top < p1 -> Top + p1-> Height &&
            b -> Left < p1 -> Left + p1 -> Width)){
                if(b -> Top > p1 -> Top + 90 && b -> Top < p1 -> Top + 130){
                x = -2 * x;
                iloscOdbic++;
                }
                else{
                 x = -x;
                iloscOdbic++;
                }
            }
         if((b -> Top > p2 -> Top - b -> Height/2 &&
            b -> Top < p2 -> Top + p2-> Height &&
            b -> Left > p2 -> Left - p2 -> Width)){
            if(b -> Top > p2 -> Top + 90 && b -> Top < p2 -> Top + 130){
                x = -2 * x;
                iloscOdbic++;
                }
                else{
                 x = -x;
                iloscOdbic++;
                }
         }
         if(b -> Top <= 0 || b -> Top >= tlo -> Height - b -> Height){
            y = -y;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        b -> Visible = true;
        timerPilka -> Interval = 20;
        x = -8; y = -8;
        timerPilka -> Enabled = true;
        Button1 -> Visible = false;
        Label1 -> Visible = false;
        Label2 -> Visible = false;
        Label3 -> Visible = false;
        Button2 -> Visible = false;
        punktyLewego = 0;
        punktyPrawego = 0;
        iloscOdbic = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::timerLewyGoraTimer(TObject *Sender)
{
        if(p1 -> Top > 10 ) p1 -> Top -= 10;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::timerPrawyGoraTimer(TObject *Sender)
{
        if(p2 -> Top > 10 ) p2 -> Top -= 10;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::timerLewyDolTimer(TObject *Sender)
{
        if(p1 -> Top + p1 -> Height < tlo -> Height - 10) p1 -> Top += 10;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::timerPrawyDolTimer(TObject *Sender)
{
      if(p2 -> Top + p2 -> Height < tlo -> Height - 10) p2 -> Top += 10;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
       if(Key == VK_UP) timerPrawyGora -> Enabled = true;
       if(Key == VK_DOWN) timerPrawyDol -> Enabled = true;
       if(Key == (65)) timerLewyGora -> Enabled = true;
       if(Key == (90)) timerLewyDol -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Key == VK_UP) timerPrawyGora -> Enabled = false;
        if(Key == VK_DOWN) timerPrawyDol -> Enabled = false;
        if(Key == (65)) timerLewyGora -> Enabled = false;
        if(Key == (90)) timerLewyDol -> Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender){

        timerPilka -> Interval = 20;
        b -> Visible = true;
        Button1 -> Visible = false;
        Label1 -> Visible = false;
        Label2 -> Visible = false;
        Label3 -> Visible = false;
        Button2 -> Visible = false;
        x = -8; y = -8;
        timerPilka -> Enabled = true;
        iloscOdbic = 0;
}
//---------------------------------------------------------------------------

