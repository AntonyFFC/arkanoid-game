//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include<cmath>
#include "Unit1.h"
#include <math.h>
#include <stdio.h>
#include <windows.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
double x=-3.0,y=-3.0;
int trafienia=42;
String traf;
int life=3;
bool kolizjapozioma(TImage*pilka,TImage*cegla)
{
        if(x>0 && pilka->Left+pilka->Width>=cegla->Left && pilka->Left+pilka->Width<=cegla->Left+4 && pilka->Top +pilka->Height >=cegla->Top+3 && pilka->Top<= cegla->Top+cegla->Height-3)
        {
         return true;
        }else return false;
}
bool kolizjaprawo(TImage*pilka,TImage*cegla)
{
        if(x<0 && pilka->Left<=cegla->Left+cegla->Width && pilka->Left>=cegla->Left+cegla->Width-4 && pilka->Top +pilka->Height >=cegla->Top+3 && pilka->Top<= cegla->Top+cegla->Height-3)
        {
         return true;
        }else return false;
}
bool kolizjapionowa(TImage*pilka,TImage*cegla)
{
        if(y>0 && pilka->Top +pilka->Height >=cegla->Top && pilka->Top +pilka->Height <=cegla->Top+4 && pilka->Left+pilka->Width>=cegla->Left && pilka->Left<=cegla->Left+cegla->Width)
        {
         return true;
        }else return false;
}
bool kolizjadol(TImage*pilka,TImage*cegla)
{
        if(y<0 && pilka->Top<= cegla->Top+cegla->Height && pilka->Top>= cegla->Top+cegla->Height-4 && pilka->Left+pilka->Width>=cegla->Left && pilka->Left<=cegla->Left+cegla->Width)
        {
        return true;
        }else return false;
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer_pilkaTimer(TObject *Sender)
{
traf = IntToStr(42-trafienia);
        b->Left+=x;
        b->Top+=y;
if(b->Left<= 0)x=-x;
if(b->Left+b->Width>=Form1->Width)x=-x;
if(b->Top<= 0)y=-y;
if(b->Top>=p->Top+p->Height+15)
{
        Timer_pilka->Enabled=false;
        b->Left=392;
        b->Top=576;
        p->Left=360;
        b->Visible=true;
        x=-3.0;
        y=-3.0;
        Button1->Visible=false;

        life--;
}
if(life==2)l3->Visible=false;
if(life==1)l2->Visible=false;
if(life==0)l1->Visible=false;
if(l1->Visible==false&&l2->Visible==false&&l3->Visible==false)
{
        Timer_pilka->Enabled=false;

        Image1->Visible=false;Image2->Visible=false;Image3->Visible=false;Image4->Visible=false;Image5->Visible=false;Image6->Visible=false;Image7->Visible=false;
        Image8->Visible=false;Image9->Visible=false;Image10->Visible=false;Image11->Visible=false;Image12->Visible=false;Image13->Visible=false;Image14->Visible=false;
        Image15->Visible=false;Image16->Visible=false;Image17->Visible=false;Image18->Visible=false;Image19->Visible=false;Image20->Visible=false;Image21->Visible=false;
        Image22->Visible=false;Image23->Visible=false;Image24->Visible=false;Image25->Visible=false;Image26->Visible=false;Image27->Visible=false;Image28->Visible=false;
        Image29->Visible=false;Image30->Visible=false;Image31->Visible=false;Image32->Visible=false;Image33->Visible=false;Image34->Visible=false;Image35->Visible=false;
        Image22->Visible=false;Image36->Visible=false;Image37->Visible=false;Image38->Visible=false;Image39->Visible=false;Image40->Visible=false;Image41->Visible=false;
        Visible=false;Image42->Visible=false;

        if(42-trafienia>=5||42-trafienia<1)Label1->Caption="Przegrana! Zdoby³eœ "+traf+" punktów";
        if(42-trafienia<5&&42-trafienia>1)Label1->Caption="Przegrana! Zdoby³eœ "+traf+" punkty";
        if(42-trafienia==1)Label1->Caption="Przegrana! Zdoby³eœ "+traf+" punkt";

        Button2->Caption="Poziomy";
        Button2->Visible=true;
        Button3->Visible=false;
        Button4->Visible=false;
        b->Visible=false;
        p->Visible=false;
        Label1->Visible=true;
        Form1->Visible=true;
        Button1->Caption="Restart";
        Button1->Visible=true;
}else if(b->Left+b->Width/2>=p->Left && b->Left+b->Width/2<=p->Left+p->Width/3 && b->Top+b->Height>=p->Top && b->Top+b->Height<=p->Top+p->Height)
{
        if(y>0 && x==0)
        {
        y=-y*3/4;
        x=-(pow((18.0-(pow(y,2))),0.5));
        }
        if(y>0 && x<0)
        {
        x=x*4/3;
        y=-(pow((18.0-(pow(x,2))),0.5));
        }else if(y>0 && x>0)
        {
        x=x*3/4;
        y=-(pow((18.0-(pow(x,2))),0.5));
        }
}else if(b->Left+b->Width/2>=p->Left+p->Width*2/3 && b->Left+b->Width/2<=p->Left+p->Width && b->Top+b->Height>=p->Top && b->Top+b->Height<=p->Top+p->Height)
{
        if(y>0 && x==0)
        {
        y=-y*3/4;
        x=(pow((18.0-(pow(y,2))),0.5));
        }
        if(y>0 && x<0)
        {
        x=x*3/4;
        y=-(pow((18.0-(pow(x,2))),0.5));
        }else if(y>0 && x>0)
        {
        x=x*4/3;
        y=-(pow((18.0-(pow(x,2))),0.5));
        }
}else if(b->Left+b->Width/2<p->Left+p->Width*2/3 && b->Left+b->Width/2>p->Left+p->Width/3 && b->Top+b->Height>=p->Top && b->Top+b->Height<=p->Top+p->Height)
{
        if(y>0)y=-y;
}
if(Button1->Visible==false&&Image1->Visible==false&&Image2->Visible==false&&Image3->Visible==false&&Image4->Visible==false&&Image5->Visible==false&&Image6->Visible==false&&Image7->Visible==false&&
        Image8->Visible==false&&Image9->Visible==false&&Image10->Visible==false&&Image11->Visible==false&&Image12->Visible==false&&Image13->Visible==false&&Image14->Visible==false&&
        Image15->Visible==false&&Image16->Visible==false&&Image17->Visible==false&&Image18->Visible==false&&Image19->Visible==false&&Image20->Visible==false&&Image21->Visible==false&&
        Image22->Visible==false&&Image23->Visible==false&&Image24->Visible==false&&Image25->Visible==false&&Image26->Visible==false&&Image27->Visible==false&&Image28->Visible==false&&
        Image29->Visible==false&&Image30->Visible==false&&Image31->Visible==false&&Image32->Visible==false&&Image33->Visible==false&&Image34->Visible==false&&Image35->Visible==false&&
        Image22->Visible==false&&Image36->Visible==false&&Image37->Visible==false&&Image38->Visible==false&&Image39->Visible==false&&Image40->Visible==false&&Image41->Visible==false)
{
        Timer_pilka->Enabled=false;

        if(42-trafienia>=5||42-trafienia<1)Label1->Caption="Wygrana! Zdoby³eœ "+traf+" punktów";
        if(42-trafienia<5&&42-trafienia>1)Label1->Caption="Wygrana! Zdoby³eœ "+traf+" punkty";
        if(42-trafienia==1)Label1->Caption="Wygrana! Zdoby³eœ "+traf+" punkt";

        Button2->Caption="Poziomy";
        Button2->Visible=true;
        Button3->Visible=false;
        Button4->Visible=true;
        b->Visible=false;
        p->Visible=false;
        Label1->Visible=true;
        Form1->Visible=true;
        Button1->Caption="Restart";
        Button1->Visible=true;
}
if(kolizjapozioma(b,Image1)==true && Image1->Visible==true || kolizjaprawo(b,Image1)==true && Image1->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image1->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image1)==true && Image1->Visible==true || kolizjadol(b,Image1)==true && Image1->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image1->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image2)==true && Image2->Visible==true || kolizjaprawo(b,Image2)==true && Image2->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image2->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image2)==true && Image2->Visible==true || kolizjadol(b,Image2)==true && Image2->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image2->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image3)==true && Image3->Visible==true || kolizjaprawo(b,Image3)==true && Image3->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image3->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image3)==true && Image3->Visible==true || kolizjadol(b,Image3)==true && Image3->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image3->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image4)==true && Image4->Visible==true || kolizjaprawo(b,Image4)==true && Image4->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image4->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image4)==true && Image4->Visible==true || kolizjadol(b,Image4)==true && Image4->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image4->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image5)==true && Image5->Visible==true || kolizjaprawo(b,Image5)==true && Image5->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image5->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image5)==true && Image5->Visible==true || kolizjadol(b,Image5)==true && Image5->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image5->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image6)==true && Image6->Visible==true || kolizjaprawo(b,Image6)==true && Image6->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image6->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image6)==true && Image6->Visible==true || kolizjadol(b,Image6)==true && Image6->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image6->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image7)==true && Image7->Visible==true || kolizjaprawo(b,Image7)==true && Image7->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image7->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image7)==true && Image7->Visible==true || kolizjadol(b,Image7)==true && Image7->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image7->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image8)==true && Image8->Visible==true || kolizjaprawo(b,Image8)==true && Image8->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image8->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image8)==true && Image8->Visible==true || kolizjadol(b,Image8)==true && Image8->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image8->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image9)==true && Image9->Visible==true || kolizjaprawo(b,Image9)==true && Image9->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image9->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image9)==true && Image9->Visible==true || kolizjadol(b,Image9)==true && Image9->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image9->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image10)==true && Image10->Visible==true || kolizjaprawo(b,Image10)==true && Image10->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image10->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image10)==true && Image10->Visible==true || kolizjadol(b,Image10)==true && Image10->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image10->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image11)==true && Image11->Visible==true || kolizjaprawo(b,Image11)==true && Image11->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image11->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image11)==true && Image11->Visible==true || kolizjadol(b,Image11)==true && Image11->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image11->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image12)==true && Image12->Visible==true || kolizjaprawo(b,Image12)==true && Image12->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image12->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image12)==true && Image12->Visible==true || kolizjadol(b,Image12)==true && Image12->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image12->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image13)==true && Image13->Visible==true || kolizjaprawo(b,Image13)==true && Image13->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image13->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image13)==true && Image13->Visible==true || kolizjadol(b,Image13)==true && Image13->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image13->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image14)==true && Image14->Visible==true || kolizjaprawo(b,Image14)==true && Image14->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image14->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image14)==true && Image14->Visible==true || kolizjadol(b,Image14)==true && Image14->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image14->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image15)==true && Image15->Visible==true || kolizjaprawo(b,Image15)==true && Image15->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image15->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image15)==true && Image15->Visible==true || kolizjadol(b,Image15)==true && Image15->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image15->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image16)==true && Image16->Visible==true || kolizjaprawo(b,Image16)==true && Image16->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image16->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image16)==true && Image16->Visible==true || kolizjadol(b,Image16)==true && Image16->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image16->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image17)==true && Image17->Visible==true || kolizjaprawo(b,Image17)==true && Image17->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image17->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image17)==true && Image17->Visible==true || kolizjadol(b,Image17)==true && Image17->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image17->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image18)==true && Image18->Visible==true || kolizjaprawo(b,Image18)==true && Image18->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image18->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image18)==true && Image18->Visible==true || kolizjadol(b,Image18)==true && Image18->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image18->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image19)==true && Image19->Visible==true || kolizjaprawo(b,Image19)==true && Image19->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image19->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image19)==true && Image19->Visible==true || kolizjadol(b,Image19)==true && Image19->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image19->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image20)==true && Image20->Visible==true || kolizjaprawo(b,Image20)==true && Image20->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image20->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image20)==true && Image20->Visible==true || kolizjadol(b,Image20)==true && Image20->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image20->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image21)==true && Image21->Visible==true || kolizjaprawo(b,Image21)==true && Image21->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image21->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image21)==true && Image21->Visible==true || kolizjadol(b,Image21)==true && Image21->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image21->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image22)==true && Image22->Visible==true || kolizjaprawo(b,Image22)==true && Image22->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image22->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image22)==true && Image22->Visible==true || kolizjadol(b,Image22)==true && Image22->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image22->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image23)==true && Image23->Visible==true || kolizjaprawo(b,Image23)==true && Image23->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image23->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image23)==true && Image23->Visible==true || kolizjadol(b,Image23)==true && Image23->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image23->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image24)==true && Image24->Visible==true || kolizjaprawo(b,Image24)==true && Image24->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image24->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image24)==true && Image24->Visible==true || kolizjadol(b,Image24)==true && Image24->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image24->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image25)==true && Image25->Visible==true || kolizjaprawo(b,Image25)==true && Image25->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image25->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image25)==true && Image25->Visible==true || kolizjadol(b,Image25)==true && Image25->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image25->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image26)==true && Image26->Visible==true || kolizjaprawo(b,Image26)==true && Image26->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image26->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image26)==true && Image26->Visible==true || kolizjadol(b,Image26)==true && Image26->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image26->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image27)==true && Image27->Visible==true || kolizjaprawo(b,Image27)==true && Image27->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image27->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image27)==true && Image27->Visible==true || kolizjadol(b,Image27)==true && Image27->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image27->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image28)==true && Image28->Visible==true || kolizjaprawo(b,Image28)==true && Image28->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image28->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image28)==true && Image28->Visible==true || kolizjadol(b,Image28)==true && Image28->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image28->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image29)==true && Image29->Visible==true || kolizjaprawo(b,Image29)==true && Image29->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image29->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image29)==true && Image29->Visible==true || kolizjadol(b,Image29)==true && Image29->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image29->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image30)==true && Image30->Visible==true || kolizjaprawo(b,Image30)==true && Image30->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image30->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image30)==true && Image30->Visible==true || kolizjadol(b,Image30)==true && Image30->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image30->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image31)==true && Image31->Visible==true || kolizjaprawo(b,Image31)==true && Image31->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image31->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image31)==true && Image31->Visible==true || kolizjadol(b,Image31)==true && Image31->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image31->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image32)==true && Image32->Visible==true || kolizjaprawo(b,Image32)==true && Image32->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image32->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image32)==true && Image32->Visible==true || kolizjadol(b,Image32)==true && Image32->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image32->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image33)==true && Image33->Visible==true || kolizjaprawo(b,Image33)==true && Image33->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image33->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image33)==true && Image33->Visible==true || kolizjadol(b,Image33)==true && Image33->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image33->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image34)==true && Image34->Visible==true || kolizjaprawo(b,Image34)==true && Image34->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image34->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image34)==true && Image34->Visible==true || kolizjadol(b,Image34)==true && Image34->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image34->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image35)==true && Image35->Visible==true || kolizjaprawo(b,Image35)==true && Image35->Visible==true)
{
        if(x!=0)
        {
        x=-x;
        Image35->Visible=false;
        trafienia--;
        }
}
if(kolizjapionowa(b,Image35)==true && Image35->Visible==true || kolizjadol(b,Image35)==true && Image35->Visible==true)
{
        if(y!=0)
        {
        y=-y;
        Image35->Visible=false;
        trafienia--;
        }
}
if(kolizjapozioma(b,Image36)==true && Image36->Visible==true || kolizjaprawo(b,Image36)==true && Image36->Visible==true)
{
        if(x!=0)
        {
        Image36->Visible=false;
        x=-x;
        trafienia--;
        Image11->Visible=true;
        }
}
if(kolizjapionowa(b,Image36)==true && Image36->Visible==true || kolizjadol(b,Image36)==true && Image36->Visible==true)
{
        if(y!=0)
        {
        Image36->Visible=false;
        y=-y;
        trafienia--;
        Image11->Visible=true;
        }
}
if(kolizjapozioma(b,Image37)==true && Image37->Visible==true || kolizjaprawo(b,Image37)==true && Image37->Visible==true)
{
        if(x!=0)
        {
        Image37->Visible=false;
        x=-x;
        trafienia--;
        Image12->Visible=true;
        }
}
if(kolizjapionowa(b,Image37)==true && Image37->Visible==true || kolizjadol(b,Image37)==true && Image37->Visible==true)
{
        if(y!=0)
        {
        Image37->Visible=false;
        y=-y;
        trafienia--;
        Image12->Visible=true;
        }
}
if(kolizjapozioma(b,Image38)==true && Image38->Visible==true || kolizjaprawo(b,Image38)==true && Image38->Visible==true)
{
        if(x!=0)
        {
        Image38->Visible=false;
        x=-x;
        trafienia--;
        Image17->Visible=true;
        }
}
if(kolizjapionowa(b,Image38)==true && Image38->Visible==true || kolizjadol(b,Image38)==true && Image38->Visible==true)
{
        if(y!=0)
        {
        Image38->Visible=false;
        y=-y;
        trafienia--;
        Image17->Visible=true;
        }
}
if(kolizjapozioma(b,Image39)==true && Image39->Visible==true || kolizjaprawo(b,Image39)==true && Image39->Visible==true)
{
        if(x!=0)
        {
        Image39->Visible=false;
        x=-x;
        trafienia--;
        Image18->Visible=true;
        }
}
if(kolizjapionowa(b,Image39)==true && Image39->Visible==true || kolizjadol(b,Image39)==true && Image39->Visible==true)
{
        if(y!=0)
        {
        Image39->Visible=false;
        y=-y;
        trafienia--;
        Image18->Visible=true;
        }
}
if(kolizjapozioma(b,Image40)==true && Image40->Visible==true || kolizjaprawo(b,Image40)==true && Image40->Visible==true)
{
        if(x!=0)
        {
        Image40->Visible=false;
        x=-x;
        trafienia--;
        Image19->Visible=true;
        }
}
if(kolizjapionowa(b,Image40)==true && Image40->Visible==true || kolizjadol(b,Image40)==true && Image40->Visible==true)
{
        if(y!=0)
        {
        Image40->Visible=false;
        y=-y;
        trafienia--;
        Image19->Visible=true;
        }
}
if(kolizjapozioma(b,Image41)==true && Image41->Visible==true || kolizjaprawo(b,Image41)==true && Image41->Visible==true)
{
        if(x!=0)
        {
        Image41->Visible=false;
        x=-x;
        trafienia--;
        Image25->Visible=true;
        }
}
if(kolizjapionowa(b,Image41)==true && Image41->Visible==true || kolizjadol(b,Image41)==true && Image41->Visible==true)
{
        if(y!=0)
        {
        Image41->Visible=false;
        y=-y;
        trafienia--;
        Image25->Visible=true;
        }
}
if(kolizjapozioma(b,Image42)==true && Image42->Visible==true || kolizjaprawo(b,Image42)==true && Image42->Visible==true)
{
        if(x!=0)
        {
        Image42->Visible=false;
        x=-x;
        trafienia--;
        Image24->Visible=true;
        }
}
if(kolizjapionowa(b,Image42)==true && Image42->Visible==true || kolizjadol(b,Image42)==true && Image42->Visible==true)
{
        if(y!=0)
        {
        Image42->Visible=false;
        y=-y;
        trafienia--;
        Image24->Visible=true;
        }
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer_lewoTimer(TObject *Sender)
{
        if(p->Left>10)p->Left-=4;
        if(Timer_pilka->Enabled==false)
        {
        if(b->Left>42)b->Left-=4;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer_prawoTimer(TObject *Sender)
{
        if(p->Left+15+p->Width<Form1->Width)p->Left+=4;
        if(Timer_pilka->Enabled==false)
        {
        if(b->Left+47+b->Width<Form1->Width)b->Left+=4;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Key==37 || Key==65) Timer_lewo->Enabled=true;
        if(Key==39 || Key==68) Timer_prawo->Enabled=true;
        if(Button1->Visible==true && Key==13||Button1->Visible==true && Key==32)
        {
        l1->Visible=true;
        l2->Visible=true;
        l3->Visible=true;
        b->Left=392;
        b->Top=576;
        p->Left=360;
        p->Visible=true;
        b->Visible=true;
        x=-3.0;
        y=-3.0;
        Button1->Visible=false;
        Button2->Visible=false;
        Button3->Visible=false;
        Button4->Visible=false;
        Poziom1->Visible=false;
        Poziom2->Visible=false;
        Poziom3->Visible=false;
        Poziom4->Visible=false;
        Poziom5->Visible=false;
        trafienia=42;
        Image1->Visible = true;Image2->Visible = true;Image3->Visible = true;
        Image4->Visible = true;Image5->Visible = true;Image6->Visible = true;
        Image7->Visible = true;Image8->Visible = true;Image9->Visible = true;
        Image10->Visible = true;Image11->Visible = true;Image12->Visible = true;
        Image13->Visible = true;Image14->Visible = true;Image15->Visible = true;
        Image16->Visible = true;Image17->Visible = true;Image18->Visible = true;
        Image19->Visible = true;Image20->Visible = true;Image21->Visible = true;
        Image22->Visible = true;Image23->Visible = true;Image24->Visible = true;
        Image25->Visible = true;Image26->Visible = true;Image27->Visible = true;
        Image28->Visible = true;Image29->Visible = true;Image30->Visible = true;
        Image31->Visible = true;Image32->Visible = true;Image33->Visible = true;
        Image34->Visible = true;Image35->Visible = true;Image36->Visible = true;
        Image37->Visible = true;Image38->Visible = true;Image39->Visible = true;
        Image40->Visible = true;Image41->Visible = true;Image42->Visible = true;
        }
        if(Timer_pilka->Enabled==false && Key==32)
        {
        Timer_pilka->Enabled=true;
        }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Key==37 || Key==65) Timer_lewo->Enabled=false;
        if(Key==39 || Key==68) Timer_prawo->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        l1->Visible=true;
        l2->Visible=true;
        l3->Visible=true;
        b->Left=392;
        b->Top=576;
        p->Left=360;
        b->Visible=true;
        x=-3.0;
        y=-3.0;
        Button1->Visible=false;
        Button2->Visible=false;
        Button3->Visible=false;
        Button4->Visible=false;
        Poziom1->Visible=false;
        Poziom2->Visible=false;
        Poziom3->Visible=false;
        Poziom4->Visible=false;
        Poziom5->Visible=false;
        Label1->Visible=false;
        Image1->Visible = true;Image2->Visible = true;Image3->Visible = true;
        Image4->Visible = true;Image5->Visible = true;Image6->Visible = true;
        Image7->Visible = true;Image8->Visible = true;Image9->Visible = true;
        Image10->Visible = true;Image11->Visible = true;Image12->Visible = true;
        Image13->Visible = true;Image14->Visible = true;Image15->Visible = true;
        Image16->Visible = true;Image17->Visible = true;Image18->Visible = true;
        Image19->Visible = true;Image20->Visible = true;Image21->Visible = true;
        Image22->Visible = true;Image23->Visible = true;Image24->Visible = true;
        Image25->Visible = true;Image26->Visible = true;Image27->Visible = true;
        Image28->Visible = true;Image29->Visible = true;Image30->Visible = true;
        Image31->Visible = true;Image32->Visible = true;Image33->Visible = true;
        Image34->Visible = true;Image35->Visible = true;Image36->Visible = true;
        Image37->Visible = true;Image38->Visible = true;Image39->Visible = true;
        Image40->Visible = true;Image41->Visible = true;Image42->Visible = true;
        p->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        l1->Visible=false;
        l2->Visible=false;
        l3->Visible=false;
        Button1->Caption="Graj";
        Button1->Visible=true;
        Button2->Caption="Poziomy";
        Button2->Visible=true;
        Button3->Visible=false;
        Button4->Visible=false;
        b->Visible=false;
        p->Visible=false;
        Image1->Visible=false;Image2->Visible=false;Image3->Visible=false;Image4->Visible=false;Image5->Visible=false;Image6->Visible=false;Image7->Visible=false;
        Image8->Visible=false;Image9->Visible=false;Image10->Visible=false;Image11->Visible=false;Image12->Visible=false;Image13->Visible=false;Image14->Visible=false;
        Image15->Visible=false;Image16->Visible=false;Image17->Visible=false;Image18->Visible=false;Image19->Visible=false;Image20->Visible=false;Image21->Visible=false;
        Image22->Visible=false;Image23->Visible=false;Image24->Visible=false;Image25->Visible=false;Image26->Visible=false;Image27->Visible=false;Image28->Visible=false;
        Image29->Visible=false;Image30->Visible=false;Image31->Visible=false;Image32->Visible=false;Image33->Visible=false;Image34->Visible=false;Image35->Visible=false;
        Image22->Visible=false;Image36->Visible=false;Image37->Visible=false;Image38->Visible=false;Image39->Visible=false;Image40->Visible=false;Image41->Visible=false;
        Visible=false;Image42->Visible=false;

        Form1->Visible=true;
        Label1->Caption="Arkanoid";
        Label1->Visible=true;

        Poziom1->Visible=false;
        Poziom2->Visible=false;
        Poziom3->Visible=false;
        Poziom4->Visible=false;
        Poziom5->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        l1->Visible=false;
        l2->Visible=false;
        l3->Visible=false;
        Button1->Visible=false;
        Button2->Visible=false;
        Button3->Caption="Wróæ";
        Button3->Top=576;
        Button3->Visible=true;
        b->Visible=false;
        p->Visible=false;
        Image1->Visible=false;Image2->Visible=false;Image3->Visible=false;Image4->Visible=false;Image5->Visible=false;Image6->Visible=false;Image7->Visible=false;
        Image8->Visible=false;Image9->Visible=false;Image10->Visible=false;Image11->Visible=false;Image12->Visible=false;Image13->Visible=false;Image14->Visible=false;
        Image15->Visible=false;Image16->Visible=false;Image17->Visible=false;Image18->Visible=false;Image19->Visible=false;Image20->Visible=false;Image21->Visible=false;
        Image22->Visible=false;Image23->Visible=false;Image24->Visible=false;Image25->Visible=false;Image26->Visible=false;Image27->Visible=false;Image28->Visible=false;
        Image29->Visible=false;Image30->Visible=false;Image31->Visible=false;Image32->Visible=false;Image33->Visible=false;Image34->Visible=false;Image35->Visible=false;
        Image22->Visible=false;Image36->Visible=false;Image37->Visible=false;Image38->Visible=false;Image39->Visible=false;Image40->Visible=false;Image41->Visible=false;
        Visible=false;Image42->Visible=false;

        Form1->Visible=true;
        Label1->Caption="Poziomy";
        Label1->Visible=true;

        Poziom1->Visible=true;
        Poziom2->Visible=true;
        Poziom3->Visible=true;
        Poziom4->Visible=true;
        Poziom5->Visible=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button3Click(TObject *Sender)
{
        l1->Visible=false;
        l2->Visible=false;
        l3->Visible=false;
        Button1->Caption="Graj";
        Button1->Visible=true;
        Button2->Caption="Poziomy";
        Button2->Visible=true;
        Button3->Visible=false;
        b->Visible=false;
        p->Visible=false;
        Image1->Visible=false;Image2->Visible=false;Image3->Visible=false;Image4->Visible=false;Image5->Visible=false;Image6->Visible=false;Image7->Visible=false;
        Image8->Visible=false;Image9->Visible=false;Image10->Visible=false;Image11->Visible=false;Image12->Visible=false;Image13->Visible=false;Image14->Visible=false;
        Image15->Visible=false;Image16->Visible=false;Image17->Visible=false;Image18->Visible=false;Image19->Visible=false;Image20->Visible=false;Image21->Visible=false;
        Image22->Visible=false;Image23->Visible=false;Image24->Visible=false;Image25->Visible=false;Image26->Visible=false;Image27->Visible=false;Image28->Visible=false;
        Image29->Visible=false;Image30->Visible=false;Image31->Visible=false;Image32->Visible=false;Image33->Visible=false;Image34->Visible=false;Image35->Visible=false;
        Image22->Visible=false;Image36->Visible=false;Image37->Visible=false;Image38->Visible=false;Image39->Visible=false;Image40->Visible=false;Image41->Visible=false;
        Visible=false;Image42->Visible=false;

        Form1->Visible=true;
        Label1->Caption="Arkanoid";
        Label1->Visible=true;

        Poziom1->Visible=false;
        Poziom2->Visible=false;
        Poziom3->Visible=false;
        Poziom4->Visible=false;
        Poziom5->Visible=false;
}
//---------------------------------------------------------------------------


