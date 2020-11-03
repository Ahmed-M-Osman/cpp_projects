#include<graphics.h>
#include<iostream.h>
#include<time.h>

void pix(int x,int y,int color)
{

    setfillstyle(SOLID_FILL,color);
    bar(x,y,x+5,y+5);

}

void pixrc(int x1,int y1,int x2,int y2)
{
    int x0=x1;
    int j=((x2-x1)/8)*((y2-y1)/8);
    int clr[100];

    for(y1;y1<=y2;y1+=7)
    {
    srand (time(NULL));
    for(x1;x1<=x2;x1+=7){
    int color = rand() % 16+1;
    for(int i=0;i<=j;i++)
    clr[i]=color;
    setfillstyle(SOLID_FILL,color);
    bar(x1,y1,x1+5,y1+5);
    delay(100);
   }
    x1=x0;
    delay(100);

    }

}

void pixsnowflake(int x,int y,int radius,int color)
{
    struct arccoordstype act;
    struct arccoordstype act1;
    int subarcx[100];
    int subarcy[100];
    for(int r=0;r<=radius;r+=8)
    for(int t=0;t<=360;t+=45)
    {
        setcolor(0);
        arc(x,y,0,t,r);
        getarccoords(&act);
        pix(act.xend,act.yend,color);
       /* if(r>=radius/4){
            for(int a=0;a<=11;a++){
            subarcx[a]=act.xend;
            subarcy[a]=act.yend;
        }
    }
    for(int a=0;a<=11;a++){
        for(int rs=0;r<=radius;rs+=7)
        for(int ts=45;t<=135;t+=90){
        arc(subarcx[a],subarcy[a],0,ts,rs);
        getarccoords(&act1);
        pix(act.xend,act.yend,color);
        }
    }*/
        delay(10);
    }

}


int main()
{
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\BGI");
    int x=0,y=0,color;
    srand (time(NULL));
    color = rand() % 15;
    cout<<color;
    /*cin>>x;
    cin>>y;
    cin>>color;*/
   /* for(x;x<=640;x+=12)
    {
    for(y;y<=480;y+=12)
    pix(x,y,color);
    y=0;
    }*/

    //pixrc(100,100,150,150);
/*while(!ismouseclick(WM_LBUTTONDOWN)){
    //pixr(100,100,150,150);
    int mx=mousex();
    int my=mousey();
    if(mx>=90 && mx<=510)
    if(my>=90 && my<=360)
    {
    setfillstyle(SOLID_FILL,BLACK);
    setcolor(BLACK);
    pieslice(mx,my,0,360,10);
    }


}*/
delay(1000);
while(1){
   if(ismouseclick(WM_LBUTTONDOWN)){
   int mx=mousex();
   int my=mousey();
   srand(time(NULL));
   int r=rand() % 50+10;
   pixsnowflake(mx,my,r,9);
   clearmouseclick( WM_LBUTTONDOWN );}
}
 //pixsnowflake(100,50,40,9);

    getch();
    closegraph();
}

