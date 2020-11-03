#include<graphics.h>
#include<iostream.h>

main()
{
    int xs = 320,ys = 40,xr = 320,yr = 170,angs = 90,angr = 90,Ns ,Nr, Fs, Fr, t;
    double s;
    cout<<"Enter Ns==> ";
    cin>>Ns;
    cout<<"Enter Nr==>  ";
    cin>>Nr;

    int gm=DETECT;
    int gd;
    initgraph(&gm,&gd,"C\\TC\\BGI");


    struct arccoordstype stator;
    struct arccoordstype rotor;
    while(1){
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    bar(0,0,640,480);//Backround
    setcolor(WHITE);
    setlinestyle( SOLID_LINE,5, 5);
    circle(320,240,102);//Stator
    circle(320,240,70);//Rotor
    setcolor(RED);
    circle(xs,ys,5);//Stator indicator
    circle(xr,yr,2);//Rotor indicator
    setcolor(WHITE);
    arc(320,240,angs,angs+1,100);//Stator
    getarccoords(&stator);
    arc(320,240,angr,angr+1,70);//Rotor
    getarccoords(&rotor);
    xs=stator.xend;
    ys=stator.yend;
    xr=rotor.xend;
    yr=rotor.yend;
    s=(Ns-Nr)/Ns;
    Fs=6*Ns/120;
    Fr=s*Ns;
    t=1000/Fs;
    angs+=5;
    if(angs>=360)
    angs=0;
    angr+=3;
    if(angr>=360)
    angr=0;

    delay(50);
    cleardevice();

    }
    getch();
    closegraph();
}