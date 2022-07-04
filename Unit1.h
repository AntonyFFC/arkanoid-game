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
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *b;
        TTimer *Timer_pilka;
        TImage *p;
        TTimer *Timer_lewo;
        TTimer *Timer_prawo;
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TImage *Image4;
        TImage *Image5;
        TImage *Image6;
        TImage *Image7;
        TImage *Image9;
        TImage *Image10;
        TImage *Image11;
        TImage *Image12;
        TImage *Image13;
        TImage *Image14;
        TImage *Image16;
        TImage *Image17;
        TImage *Image18;
        TImage *Image19;
        TImage *Image20;
        TImage *Image23;
        TImage *Image24;
        TImage *Image25;
        TImage *Image26;
        TImage *Image27;
        TImage *Image28;
        TImage *Image29;
        TImage *Image32;
        TImage *Image33;
        TImage *Image35;
        TImage *Image8;
        TImage *Image15;
        TImage *Image21;
        TImage *Image22;
        TImage *Image30;
        TImage *Image31;
        TImage *Image34;
        TImage *Image36;
        TImage *Image37;
        TImage *Image38;
        TImage *Image39;
        TImage *Image40;
        TImage *Image41;
        TImage *Image42;
        TButton *Button1;
        TImage *l3;
        TImage *l2;
        TImage *l1;
        TLabel *Label1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TButton *Poziom1;
        TButton *Poziom2;
        TButton *Poziom3;
        TButton *Poziom4;
        TButton *Poziom5;
        void __fastcall Timer_pilkaTimer(TObject *Sender);
        void __fastcall Timer_lewoTimer(TObject *Sender);
        void __fastcall Timer_prawoTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
