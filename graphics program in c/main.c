#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int gd=DETECT, gm;
    int i,x=100,y=50;
    initgraph(&gd,&gm," ");
    for(i=1;i<16;i++)
    {

        setcolor(i);
        outtextxy(x,y,"welcome shreyansh");
        y=y+30;
    }
    setbkcolor(CYAN);
    setcolor(RED);
    outtextxy(200,300,"press any key to continue");
    getch();
    cleardevice();

    setbkcolor(RED);
    settextstyle(0,HORIZ_DIR,2)  // settextstyle(font,direction,size)
    outtextxy(100,100,"welcome shrey");
    closegraph();
    return 0;
}
    return 0;

