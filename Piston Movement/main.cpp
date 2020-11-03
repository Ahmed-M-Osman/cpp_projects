#include<graphics.h>
#include<math.h>
#include<time.h>

main()
{
    int gm=DETECT;
    int gd;
    initgraph(&gm,&gd,"C\\TC\\BGI");
    int i;
    int x1,y1,x2,n=10,c=0,s=RGB(220,247,248);
    double a,j,p,b;
    struct arccoordstype act;
    for(i=180;i<=721;i+=5)
    {
        b=M_PI*i/180;
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        bar(0,0,650,490);
        setcolor(LIGHTGRAY);
        setbkcolor(LIGHTGRAY);
        setlinestyle( SOLID_LINE,5, 5);
        arc(450,240,0,i,50);
        getarccoords(&act);
        setcolor(WHITE);
        x1=act.xend;
        y1=act.yend;
        line(450,240,x1,y1);
        circle(x1,y1,2);
        circle(450,240,2);
        j=M_PI*(i+2)/180;
        a=50*cos(j);
        x2=120+a;
        setcolor(WHITE);
        line(x1,y1,x2+100,240);
        line(120,220,260,220);//Cylinder upper
        line(120,260,260,260);//Cylinder lower
        line(120,220,120,260);//Cylinder top
        line(110,223,120,223);//upper valve
        line(110,257,120,257);//lower valve
        line(120,240,123,240);//Spark
        rectangle(180+a,225,x2+100,255);//Piston
        setlinestyle(SOLID_LINE,5,2);
        line(210+a,225,210+a,255);//Piston front line
        line(205+a,225,205+a,255);//Piston back line
        setfillstyle(SOLID_FILL,s);
        floodfill(125,230,WHITE);
       // outtextxy(x1+10,y1-10,"A");
        //outtextxy(350,240,"O");
        //outtextxy(x2-25,200,"B");
        outtextxy(180,50,"Simulating The Movement of a Piston");
        setfillstyle(SOLID_FILL,RGB(220,247,248));
        bar(500,80,510,90);
        outtextxy(520,77,"Air");
        setfillstyle(SOLID_FILL,RGB(253,202,0));
        bar(500,100,510,110);
        outtextxy(520,97,"Eploding Fuel");
        setfillstyle(SOLID_FILL,RGB(131,125,105));
        bar(500,120,510,130);
        outtextxy(520,117,"Exauhst Gases");
        setfillstyle(SOLID_FILL,RGB(253,165,0));
        bar(500,140,510,150);
        outtextxy(520,137,"Fuel");
        setfillstyle(SOLID_FILL,YELLOW);
        bar(500,160,510,170);
        outtextxy(520,157,"Spark");
        p=sin(b);
        if(i<=360){
            if(p<=0){
            s=RGB(220,247,248);//Air sucktion
            setfillstyle(SOLID_FILL,s);
            bar(110,226,80,221);
            n=10;}
            if(p>=0){
             s=RGB(131,125,105);
            setfillstyle(SOLID_FILL,s);
            bar(110,226,80,221);}
           //Exauht
        }
        if(i<=540&&i>=530){
            setfillstyle(SOLID_FILL,YELLOW);
            bar(123,223,128,255);
            setfillstyle(SOLID_FILL,RGB(253,165,0));
            bar(110,260,80,255);
            }
        if(i>360&&i<=720){
            if(p<=0){
            s=RGB(253,202,0);//Explotion
            n=1;}
            if(p>=0){
            s=RGB(220,247,248);
            }//Air compiretion
            }
        if(i==720){

            i=0;}
        delay(n);
        cleardevice();
    }
    getch();
    closegraph();
}
