//Mahmood AminToosi
#include <graphics.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

class Rect
{
  private:
    int x1,y1,x2,y2,
        color,visible;
    char name[20];
  public:
    Rect();
    Rect (char *,int,int,int,int,
          int Color=GREEN,int Visible=0);
    int area();
    void scale(float,float);
    void show();
    void hide();
    void changecolor(int);
    ~Rect();
};

Rect::Rect()
{
  x1=y1=120; x2=y2=220;
  color=GREEN; visible=0;
  strcpy(name,"NoName");
}

Rect::Rect(char *Name,
           int a1,int b1,int a2,int b2,
           int Color,int Visible)
{
  strcpy(name,Name);
  x1=a1; x2=a2; y1=b1; y2=b2;
  color=Color; visible=Visible;
  if(visible==1) show();
}

void Rect::show()
{
  setcolor(color);
  rectangle(x1,y1,x2,y2);
  outtextxy((x1+x2)/2-strlen(name)/2*8,
             y1-10,name);
  visible=1;
}

void Rect::hide()
{
  setcolor(BLACK);
  rectangle(x1,y1,x2,y2);
  outtextxy((x1+x2)/2-strlen(name)/2*8,
             y1-10,name);
  visible=0;
  setcolor(WHITE);
}

void Rect::changecolor(int c)
{
  color = c;
  if (visible==1) show();
}

int Rect::area()
{
   return((x2-x1)*(y2-y1));
}

void Rect::scale(float sx,float sy)
{
  int v=visible;
  if(visible==1) hide();
  x1*=sx;  y1*=sy;
  x2*=sx;  y2*=sy;
  if(v==1) show();
}

Rect::~Rect()
{
 hide();
}

void main()
{
  int d,m;
  d=DETECT;
  initgraph(&d,&m,"d:\\tc\\bgi");
  Rect A("A",100,240,200,350,RED,1);

  outtextxy(10,20,"Press a key to change color of A");
  getch();
  A.changecolor(YELLOW);

  outtextxy(10,30,"Press a key to hide A");
  getch();
  A.hide();

  outtextxy(10,40,"Press a key to show A");
  getch();
  A.show();

  {
    Rect B; //name of B would be "NoName"

    outtextxy(10,50,"Press a key to view B");
    getch();
    B.show();

    outtextxy(10,60,"Press a key to change scale of B");
    getch();
    B.scale(1.5,2);

    outtextxy(10,70,"Press a key to automatic hide B");
    getch();
  }

  outtextxy(10,80,"Area of A is");
  char s[20];
  itoa(A.area(),s,10);
  outtextxy(120,80,s);

  getch();
}