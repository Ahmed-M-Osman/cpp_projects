#include<iostream.h>
#include<math.h>
#include<graphics.h>
int main()
{
    int b1,b2,b3,b4,b5,b6,n,v,t,count=0,zero;
    double R;
    char q,chk,ar[100];
M:
    system("color 75");
    cout<<"\t\t\t--------------------\n";
    cout<<"\t\t\twelcome to QUICK OHM\n";
    cout<<"\t\t\t--------------------\n\n\n";
    cout<<"\t\tPlease choose what you want to do:-\n\n";
    cout<<"\t\t1-Enter the colors and recieve value in ohm's\n\n";
    cout<<"\t\t2-Enter the value of resistor in ohm's and recieve it's colors\n\n";
    cout<<"\t\t3-About Quick Ohm\n\n";
    cout<<"\t\tI chose number :";
V:
    cin>>v;
    system("cls");
    if(v!=1&&v!=2&&v!=3)
    {
        cout<<"\t\twrong choice!\t Please choose again\t";
        goto V;
    }
    if(v==1)
    {
        system("color 1E");
        cout<<"\n\t\tWhat's Your Number of Bands?!<3/4/5/6>\n\t\t";
    k:
        cin>>n;
        system("cls");
        if(n!=3&&n!=4&&n!=5&&n!=6)
        {
            cout<<"Wrong Band Number!\tEnter Again:\n";
            goto k;
        }
    i:
        cout<<"\n\t\tNumber of Color of 1st Band:\n";
        cout<<"\n\t\t2-Brown\n\t\t3-Red\n\t\t4-Orange\n";
        cout<<"\t\t5-Yellow\n\t\t6-Green\n\t\t7-Blue\n\t\t8-Violet\n";
        cout<<"\t\t9-Grey\n\t\t10-White\n\t\t";
        cin>>b1;
        if(b1<2||b1>10)
        {
            cout<<"\nWrong Color!\tEnter Again\n";
            goto i;
        }
    j:
        cout<<"\n\t\tNumber of Color of 2nd Band:\n";
        cout<<"\t\t1-Black\n\t\t2-Brown\n\t\t3-Red\n\t\t4-Orange\n";
        cout<<"\t\t5-Yellow\n\t\t6-Green\n\t\t7-Blue\n\t\t8-Violet\n";
        cout<<"\t\t9-Grey\n\t\t10-White\n\t\t";
        cin>>b2;
        if(b2<1||b2>10)
        {
            cout<<"\t\tWrong Color!\tEnter Again\n";
            goto j;
        }
        if(n!=4&&n!=3)
        {
        g:
            cout<<"\n\t\tNumber of Color of 3rd Band:\n";
            cout<<"\t\t1-Black\n\t\t2-Brown\n\t\t3-Red\n\t\t4-Orange\n";
            cout<<"\t\t5-Yellow\n\t\t6-Green\n\t\t7-Blue\n\t\t8-Violet\n";
            cout<<"\t\t9-Grey\n\t\t10-White\n\t\t";
            cin>>b3;
            if(b3<1||b3>10)
            {
                cout<<"\t\tWrong Color!\tEnter Again\n";
                goto g;
            }
        }
        if(n==4||n==3)
        {
        p:
            cout<<"\n\t\tNumber of Color of 3rd Band:\n";
            cout<<"\t\t1-Black\n\t\t2-Brown\n\t\t3-Red\n\t\t4-Orange\n";
            cout<<"\t\t5-Yellow\n\t\t6-Green\n\t\t7-Blue\n\t\t8-Violet\n";
            cout<<"\t\t9-Grey\n\t\t10-White\n";
            cout<<"\t\t11-Gold\n\t\t12-Silver\n\t\t";
            cin>>b3;
            if(b3<1||b3>12)
            {
                cout<<"\t\tWrong Color!\tEnter Again\n";
                goto p;
            }
        }
        if(n==4)
        {
        o:
            cout<<"\n\t\tNumber of Color of 4th Band:\n";
            cout<<"\t\t2-Brown\n\t\t3-Red\n";
            cout<<"\t\t6-Green\n\t\t7-Blue\n\t\t8-Violet\n";
            cout<<"\t\t9-Grey\n\t\t11-Gold\n\t\t12-Silver\n\t\t";
            cin>>b4;
            if(b4<2||b4==10||b4==4||b4==5||b4>12)
            {
                cout<<"\t\tWrong Color!\tEnter Again\n";
                goto o;
            }
        }
        if(n!=4&&n!=3)
        {
        m:
            cout<<"\n\t\tNumber of Color of 4th Band:\n";
            cout<<"\t\t1-Black\n\t\t2-Brown\n\t\t3-Red\n\t\t4-Orange\n";
            cout<<"\t\t5-Yellow\n\t\t6-Green\n\t\t7-Blue\n\t\t8-Violet\n";
            cout<<"\t\t9-Grey\n\t\t10-White\n";
            cout<<"\t\t11-Gold\n\t\t12-Silver\n\t\t";
            cin>>b4;
            if(b4<1||b4>12)
            {
                cout<<"\t\tWrong Color!\tEnter Again\n";
                goto m;
            }
        h:
            cout<<"\n\t\tNumber of Color of 5th Band:\n";
            cout<<"\t\t2-Brown\n\t\t3-Red\n\t\t6-Green\n\t\t7-Blue\n\t\t8-Violet\n";
            cout<<"\t\t9-Grey\n\t\t11-Gold\n\t\t12-Silver\n\t\t";
            cin>>b5;
            if(b5<2||b5==10||b5==4||b5==5||b5>12)
            {
                cout<<"\t\tWrong Color!\tEnter Again\n";
                goto h;
            }}
        if(n==6)
        {
        l:
            cout<<"\n\t\tNumber of Color of 6th Band:\n";
            cout<<"\t\t1-Black\n\t\t2-Brown\n\t\t3-Red\n\t\t";
            cout<<"4-Orange\n\t\t5-Yellow\n\t\t6-Green\n\t\t";
            cout<<"7-Blue\n\t\t8-Violet\n\t\t9-Grey\n\n\t\t";
            cin>>b6;
            if(b6<1||b6>9)
            {
                cout<<"\t\tWrong Color!\tEnter Again\n";
                goto l;
            }
        }
        if(n==4||n==3)
        {
            R=(10*(--b1)+(--b2));
            switch(b3)
            {
                case 1:
                R=R*pow(10,--b3);
                cout<<"\n\t\tResistor's Value:\t"<<R<<" ohm";
                break;
                case 2:
                R=R*pow(10,--b3);
                cout<<"\n\t\tResistor's Value:\t"<<R<<" ohm";
                break;
                case 3:
                R=R/10;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" K ohm";
                break;
                case 4:
                cout<<"\n\t\tResistor's Value:\t"<<R<<" K ohm";
                break;
                case 5:
                R=R*10;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" K ohm";
                break;
                case 6:
                R=R/10;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" M ohm";
                break;
                case 7:
                cout<<"\n\t\tResistor's Value:\t"<<R<<" M ohm";
                break;
                case 8:
                R=R*10;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" M ohm";
                break;
                case 9:
                R=R/10;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" G ohm";
                break;
                case 10:
                cout<<"\n\t\tResistor's Value:\t"<<R<<" G ohm";
                break;
                case 11:
                R=R/10;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" ohm";
                break;
                case 12:
                R=R/100;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" ohm";
                break;
            }
            if(n==3)
                cout<<"\t-+20% Toll";//3rd Band calcs
            else
                switch(b4)
                {
                    case 12:
                    cout<<"\t-+10% Toll";
                    break;
                    case 11:
                    cout<<"\t-+5% Toll";
                    break;
                    case 2:
                    cout<<"\t-+1% Toll";
                    break;
                    case 3:
                    cout<<"\t-+2% Toll";
                    break;
                    case 6:
                    cout<<"\t-+0.5% Toll";
                    break;
                    case 7:
                    cout<<"\t-+0.25% Toll";
                    break;
                    case 8:
                    cout<<"\t-+0.1% Toll";
                    break;
                    case 9:
                    cout<<"\t-+0.05% Toll";
                    break;
                }//switch
        }//4th band calculation
        if(n==5)
        {
            R=(100*(--b1)+10*(--b2)+(--b3));
            switch(b4)
            {
                case 1:
                R=R*pow(10,--b4);
                cout<<"\n\t\tResistor's Value:\t"<<R<<" ohm";
                break;
                case 2:
                R=R/100;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" K ohm";
                break;
                case 3:
                R=R/10;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" K ohm";
                break;
                case 4:
                cout<<"\n\t\tResistor's Value:\t"<<R<<" K ohm";
                break;
                case 5:
                R=R/100;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" M ohm";
                break;
                case 6:
                R=R/10;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" M ohm";
                break;
                case 7:
                cout<<"\n\t\tResistor's Value:\t"<<R<<" M ohm";
                break;
                case 8:
                R=R/100;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" G ohm";
                break;
                case 9:
                R=R/10;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" G ohm";
                break;
                case 10:
                cout<<"\n\t\tResistor's Value:\t"<<R<<" G ohm";
                break;
                case 11:
                R=R/10;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" ohm";
                break;
                case 12:
                R=R/100;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" ohm";
                break;
            }
            switch(b5)
            {
                case 12:
                cout<<"\t-+10% Toll";
                break;
                case 11:
                cout<<"\t-+5% Toll";
                break;
                case 2:
                cout<<"\t-+1% Toll";
                break;
                case 3:
                cout<<"\t-+2% Toll";
                break;
                case 6:
                cout<<"\t-+0.5% Toll";
                break;
                case 7:
                cout<<"\t-+0.25% Toll";
                break;
                case 8:
                cout<<"\t-+0.1% Toll";
                break;
                case 9:
                cout<<"\t-+0.05% Toll";
                break;
            }//switch
        }//5th band calculation
        if(n==6)
        {
            R=(100*(--b1)+10*(--b2)+(--b3));
            switch(b4)
            {
                case 1:
                R=R*pow(10,--b4);
                cout<<"\n\t\tResistor's Value:\t"<<R;
                break;
                case 2:
                R=R/100;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" K ohm";
                break;
                case 3:
                R=R/10;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" K ohm";
                break;
                case 4:
                cout<<"\n\t\tResistor's Value:\t"<<R<<" K ohm";
                break;
                case 5:
                R=R/100;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" M ohm";
                break;
                case 6:
                R=R/10;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" M ohm";
                break;
                case 7:
                cout<<"\n\t\tResistor's Value:\t"<<R<<" M ohm";
                break;
                case 8:
                R=R/100;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" G ohm";
                break;
                case 9:
                R=R/10;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" G ohm";
                break;
                case 10:
                cout<<"\n\t\tResistor's Value:\t"<<R<<" G ohm";
                break;
                case 11:
                R=R/10;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" ohm";
                break;
                case 12:
                R=R/100;
                cout<<"\n\t\tResistor's Value:\t"<<R<<" ohm";
                break;
            }
            switch(b5)
            {
                case 12:
                cout<<"\t-+10% Toll";
                break;
                case 11:
                cout<<"\t-+5% Toll";
                break;
                case 2:
                cout<<"\t-+1% Toll";
                break;
                case 3:
                cout<<"\t-+2% Toll";
                break;
                case 6:
                cout<<"\t-+0.5% Toll";
                break;
                case 7:
                cout<<"\t-+0.25% Toll";
                break;
                case 8:
                cout<<"\t-+0.1% Toll";
                break;
                case 9:
                cout<<"\t-+0.05% Toll";
                break;
            }//switch
            switch(b6)
            {
                case 1:
                cout<<"\n\t\tTemp.Coff = 250ppm/K";
                break;
                case 2:
                cout<<"\n\t\tTemp.Coff = 100ppm/K";
                break;
                case 3:
                cout<<"\n\t\tTemp.Coff = 50ppm/K";
                break;
                case 4:
                cout<<"\n\t\tTemp.Coff = 15ppm/K";
                break;
                case 5:
                cout<<"\n\t\tTemp.Coff = 25ppm/K";
                break;
                case 6:
                cout<<"\n\t\tTemp.Coff = 20ppm/K";
                break;
                case 7:
                cout<<"\n\t\tTemp.Coff = 10ppm/K";
                break;
                case 8:
                cout<<"\n\t\tTemp.Coff = 5ppm/K";
                break;
                case 9:
                cout<<"\n\t\tTemp.Coff = 1ppm/K";
                break;
            }//switch
        }//6th band calculation
    I:
        cout<<"\n\n\t\tBack to Main Menu ==> m\n\n\t\t";
        cout<<"Exit Quick Ohm ==> q\n\t\t";
        cin>>q;
        system("cls");
        if(q!='m'&&q!='M'&&q!='q'&&q!='Q')
        {
            cout<<"Wrong Choice!   Choose Again";
            goto I;
        }
        if(q=='m'||q=='M')
            goto M;
        else
            goto Q;
    }//if v==1
    if(v==2)
    {
        system("color E4");
    d:
        cout<<"\n\t\tPlease Enter The Value of Your Risestor:";
        cin>>R;
        if(R>(999*pow(10,9))||R<0)
        {
            cout<<"Invalid Resistance value\tEnter Again!";
            goto d;
        }
    y:
        cout<<"\n\n\t\tPlease Enter the NUMBER of RESISTOR's Tollerance:\n\n\t\t";
        cout<<"0==> not important for me!\n\t\t1==> -+0.05%\n\t\t";
        cout<<"2==> -+0.1%\n\t\t3==> -+0.25%\n\t\t4==> -+0.5%\n\t\t";
        cout<<"5==> -+1%\n\t\t6==> -+2%\n\t\t7==> -+5%\n\t\t";
        cout<<"8==> -+10%\n\t\t9==> -+20\n\t\tTollerance ==>";
        cin>>b5;
        if(b5>9||b5<0)
        {
            cout<<"\n\t\tWrong Tollerance!!   please enter again";
            goto y;
        }//toll check
    Y:
        cout<<"\n\n\tPlease Enter the NUMBER of Temp. Coff. of the RESISTOR:\n\n\t\t";
        cout<<"0==> not important for me!\n\t\t1==> 1ppm/K\n\t\t";
        cout<<"2==> 5ppm/K\n\t\t3==> 10ppm/K\n\t\t4==> 15ppm/K\n\t\t";
        cout<<"5==> 20ppm/K\n\t\t6==> 25ppm/K\n\t\t7==> 50ppm/K\n\t\t";
        cout<<"8==> 100ppm/K\n\t\t9==> 250ppm/K\n\t\tTemp. Coff. ==>";
        cin>>b6;
        system("cls");
        if(b6<0||b6>9)
        {
            cout<<"\n\t\tWrong Temp. Coff.!!   please enter again";
            goto Y;
        }//temp. coff. check
        if(R<1000)
        {
            R=R/0.999;
            chk='o';
        }
        if(R>=1000&&R<1000000)
        {
            R=R/999;
            chk='K';
        }
        if(R>=1000000&&R<1000000000)
        {
            R=R/999999;
            chk='M';
        }
        if(R>=1000000000)
        {
            R=R/1000000000;
            chk='G';
        }
        t=R;
        if(t==0)
        goto C;
        while(1)
        {
            zero=R/10;
            R=R/10;
            ++count;
            if(zero==0)
                break;
        }
        R=R*pow(10,count);
        C:
        switch(count)
        {
            case 0:
            b1=10*R;
            b2=100*R-10*b1;
            b3=0;
            break;
            case 1:
            b1=R;
            b2=10*R-10*b1;
            b3=100*R-100*b1-10*b2;
            break;//++b3
            case 2:
            b1=R/10;
            b2=R-10*b1;
            b3=10*R-100*b1-10*b2;
            break;//++b3
            case 3:
            b1=R/100;
            b2=R/10-10*b1;
            b3=R-100*b1-10*b2;
            break;
            default :
            break;
        }
        {
            int gd=DETECT;
            int gm;
            initgraph(&gd,&gm,"C:\\TC\\BGI");
            //White Screen
            setfillstyle(SOLID_FILL,RGB(204,255,204));
            bar(0,0,639,479);
            //Text "This is Your Resistor!"
            setbkcolor(RGB(204,255,204));
            setcolor(BLACK);
            outtextxy(240,60,"This is Your Risestor!");
            //sprintf(ar,"%0.05f",R);
            //outtextxy(240,80,ar);
            //Wire
            setfillstyle(SOLID_FILL,LIGHTGRAY);
            bar(10,220,620,230);
            //Risestor Body
            setfillstyle(SOLID_FILL,RGB(250,204,66));
            bar(40,140,140,310);//Left Arm
            bar(140,160,490,290);//Center Body
            bar(490,140,590,310);//Right Arm
            //1st Band
            switch(b1)
            {
                case 0:
                setfillstyle(SOLID_FILL,BLACK);
                break;
                case 1:
                setfillstyle(SOLID_FILL,RGB(99,66,00));
                break;//Brown
                case 2:
                setfillstyle(SOLID_FILL,RGB(255,0,0));
                break;//Red
                case 3:
                setfillstyle(SOLID_FILL,RGB(250,125,0));
                break;//ORANGE
                case 4:
                setfillstyle(SOLID_FILL,YELLOW);
                break;
                case 5:
                setfillstyle(SOLID_FILL,GREEN);
                break;
                case 6:
                setfillstyle(SOLID_FILL,BLUE);
                break;
                case 7:
                setfillstyle(SOLID_FILL,MAGENTA);
                break;
                case 8:
                setfillstyle(SOLID_FILL,DARKGRAY);
                break;
                case 9:
                setfillstyle(SOLID_FILL,WHITE);
                break;
            }//switch b1 1st bit
            bar(90,140,115,310);//O1 ||| ||O
            //2nd Band
            switch(b2)
            {
                case 0:
                setfillstyle(SOLID_FILL,BLACK);
                break;
                case 1:
                setfillstyle(SOLID_FILL,RGB(99,66,00));
                break;//Brown
                case 2:
                setfillstyle(SOLID_FILL,RGB(255,0,0));
                break;//Red
                case 3:
                setfillstyle(SOLID_FILL,RGB(250,125,0));
                break;//ORANGE
                case 4:
                setfillstyle(SOLID_FILL,YELLOW);
                break;
                case 5:
                setfillstyle(SOLID_FILL,GREEN);
                break;
                case 6:
                setfillstyle(SOLID_FILL,BLUE);
                break;
                case 7:
                setfillstyle(SOLID_FILL,MAGENTA);
                break;
                case 8:
                setfillstyle(SOLID_FILL,DARKGRAY);
                break;
                case 9:
                setfillstyle(SOLID_FILL,WHITE);
                break;
            }//switch b2 2nd bit
            bar(145,160,170,290);//O| 1|| ||O
            switch(b3)
            {
                case 0:
                setfillstyle(SOLID_FILL,BLACK);
                break;
                case 1:
                setfillstyle(SOLID_FILL,RGB(99,66,00));
                break;//Brown
                case 2:
                setfillstyle(SOLID_FILL,RGB(255,0,0));
                break;//Red
                case 3:
                setfillstyle(SOLID_FILL,RGB(250,125,0));
                break;//ORANGE
                case 4:
                setfillstyle(SOLID_FILL,YELLOW);
                break;
                case 5:
                setfillstyle(SOLID_FILL,GREEN);
                break;
                case 6:
                setfillstyle(SOLID_FILL,BLUE);
                break;
                case 7:
                setfillstyle(SOLID_FILL,MAGENTA);
                break;
                case 8:
                setfillstyle(SOLID_FILL,DARKGRAY);
                break;
                case 9:
                setfillstyle(SOLID_FILL,WHITE);
                break;
            }//switch b3 3rd bit
            bar(180,160,205,290);//O| |1| ||O
            //4th Band calcs for 4 Band Resistance
            if(b3!=0)
            {
                switch (chk)
                {
                    case 'o':
                    switch(count)
                    {
                        case 1:
                        setfillstyle(SOLID_FILL,LIGHTGRAY);
                        break;//silver
                        case 2:
                        setfillstyle(SOLID_FILL,RGB(202.5,177.5,57.5));
                        break;//gold
                        case 3:
                        setfillstyle(SOLID_FILL,BLACK);
                        break;
                    }
                    break;
                    case 'K':
                    switch(count)
                    {
                        case 1:
                        setfillstyle(SOLID_FILL,RGB(99,66,00));
                        break;//Brown
                        case 2:
                        setfillstyle(SOLID_FILL,RGB(255,0,0));
                        break;//Red
                        case 3:
                        setfillstyle(SOLID_FILL,RGB(250,125,0));
                        break;
                    }
                    break;//ORANGE
                    case 'M':
                    switch(count)
                    {
                        case 1:
                        setfillstyle(SOLID_FILL,YELLOW);
                        break;
                        case 2:
                        setfillstyle(SOLID_FILL,GREEN);
                        break;
                        case 3:
                        setfillstyle(SOLID_FILL,BLUE);
                        break;
                    }
                    break;
                    case 'G':
                    switch(count)
                    {
                        case 1:
                        setfillstyle(SOLID_FILL,MAGENTA);
                        break;
                        case 2:
                        setfillstyle(SOLID_FILL,DARKGRAY);
                        break;
                        case 3:
                        setfillstyle(SOLID_FILL,WHITE);
                        break;
                    }
                    break;
                }//switch b3 multiplier
                bar(215,160,240,290);
            }//O| |1| ||
            if(b3==0)
            {
                switch (chk)
                {
                    case 'o':
                    switch(count)
                    {
                        case 1:
                        setfillstyle(SOLID_FILL,RGB(202.5,177.5,57.5));
                        break;//Gold
                        case 2:
                        setfillstyle(SOLID_FILL,BLACK);
                        break;
                        case 3:
                        setfillstyle(SOLID_FILL,RGB(99,66,00));
                        break;//Brown
                        case 0:
                        setfillstyle(SOLID_FILL,LIGHTGRAY);
                        break;
                    }
                    break;//Silver
                    case 'K':
                    switch(count)
                    {
                        case 1:
                        setfillstyle(SOLID_FILL,RGB(255,0,0));
                        break;//Red
                        case 2:
                        setfillstyle(SOLID_FILL,RGB(250,125,0));
                        break;//ORANGE
                        case 3:
                        setfillstyle(SOLID_FILL,YELLOW);
                        break;
                    }
                    break;
                    case 'M':
                    switch(count)
                    {
                        case 1:
                        setfillstyle(SOLID_FILL,GREEN);
                        break;
                        case 2:
                        setfillstyle(SOLID_FILL,BLUE);
                        break;
                        case 3:
                        setfillstyle(SOLID_FILL,MAGENTA);
                        break;
                    }
                    break;
                    case 'G':
                    switch(count)
                    {
                        case 1:
                        setfillstyle(SOLID_FILL,DARKGRAY);
                        break;
                        case 2:
                        setfillstyle(SOLID_FILL,WHITE);
                        break;
                    }
                    break;
                }//switch b3 multiplier
                bar(180,160,205,290);
            }//O| |1| ||
            switch(b5)
            {
                case 1:
                setfillstyle(SOLID_FILL,DARKGRAY);
                break;
                case 2:
                setfillstyle(SOLID_FILL,MAGENTA);
                break;
                case 3:
                setfillstyle(SOLID_FILL,BLUE);
                break;
                case 4:
                setfillstyle(SOLID_FILL,GREEN);
                break;
                case 5:
                setfillstyle(SOLID_FILL,RGB(99,66,00));
                break;//Brown
                case 6:
                setfillstyle(SOLID_FILL,RGB(255,0,0));
                break;//Red
                case 7:
                setfillstyle(SOLID_FILL,RGB(202.5,177.5,57.5));
                break;//Gold
                case 8:
                setfillstyle(SOLID_FILL,LIGHTGRAY);
                break;//Silver
                default :
                goto n;
            }//switch b5 toll
            bar(460,160,485,290);//O| ||| 1|O
        n:
            switch(b6)
            {
                case 1:
                setfillstyle(SOLID_FILL,DARKGRAY);
                break;
                case 2:
                setfillstyle(SOLID_FILL,MAGENTA);
                break;
                case 3:
                setfillstyle(SOLID_FILL,BLUE);
                break;
                case 4:
                setfillstyle(SOLID_FILL,RGB(250,125,0));
                break;//ORANGE
                case 5:
                setfillstyle(SOLID_FILL,GREEN);
                break;
                case 6:
                setfillstyle(SOLID_FILL,YELLOW);
                break;
                case 7:
                setfillstyle(SOLID_FILL,RGB(255,0,0));
                break;//Red
                case 8:
                setfillstyle(SOLID_FILL,RGB(99,66,00));
                break;//Brown
                case 9:
                setfillstyle(SOLID_FILL,BLACK);
                break;
                default :
                goto s;
            }//switch temp. coff.
            bar(515,140,540,310);//O| ||| |1O
        s:
            cout<<"\n\n\t\tBack to Main Menu ==> m\n\n\t\t";
            cout<<"Exit Quick Ohm ==> q\n\t\t";
            cin>>q;
            system("cls");
            if(q!='m'&&q!='M'&&q!='q'&&q!='Q')
            {
                cout<<"Wrong Choice!   Choose Again";
                goto I;
            }
            if(q=='m'||q=='M')
                goto M;
            else
                goto Q;
            getch();
            closegraph();
        }//end graphics
    }//if v==2
    if(v==3)
    {
        system("color F8");
        cout<<"\n\t\tThis Project Was Made By:";
        cout<<"\n\n\t\tSudan University of Scince and Technology";
        //cout<<"\n\n\n\t\t1-Ahmad Mohamed Abbas Mohamed\n\n\t\t";
        cout<<"\n\n\n\tAhmad Mohamed Osman Mohamed\n\n\t\t";
        //cout<<"3-Ahmad Mohamed Ali Abdullah\n\n\t\t";
        //cout<<"4-Ahmad Mahmoud Ahmad Daldoom\n\n\t\t";
        //cout<<"5-Ahmad Mustaffa Ibrahim Ali\n\n\t\t";
        //cout<<"6-Adam Omar Alshaieb Omar\n";
        cout<<"\n\n\t\tAll Rights Reserved c 2015";
        cout<<"\n\n\t\tBack to Main Menu ==> m\n\n\t\t";
            cout<<"Exit Quick Ohm ==> q\n\t\t";
            cin>>q;
            system("cls");
            if(q!='m'&&q!='M'&&q!='q'&&q!='Q')
            {
                cout<<"Wrong Choice!   Choose Again";
                goto I;
            }
            if(q=='m'||q=='M')
                goto M;
            else
                goto Q;
    }
Q:;
}//main
