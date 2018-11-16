#include <iostream>
#include <graphics.h>
#include <conio.h>
using namespace std;

int main()
{
    int d,m;
    int max_x, max2, maxx_x;
    int points[]={200, 300, 300, 300, 320, 270, 150, 270, 200, 300};
    int points2[]={250, 172, 300, 220, 250, 265, 250, 172};
    int points3[]={100, 620, 250, 620, 360, 760, 210, 760, 100, 620};
    int points4[]={400, 620, 550, 620, 660, 760, 510, 760, 400, 620};
    int i, j =0;
    d=DETECT;
    initgraph(&d,&m," ");

/*
 for( i = 0 ; i <= 200 ; i = i + 2)
   {
      setcolor(WHITE);
      setfillstyle(11, WHITE);
      circle(100, 300-i, 30);
      floodfill(100, 300-i, WHITE);
      delay(15);

      if( i == 420 )
         break;


      cleardevice(); // clear screen
   }
*/


for(i = 0 ; i <= 200 ; i = i + 2)
{
    setcolor(LIGHTBLUE);
    setfillstyle(1, LIGHTBLUE);
    bar(0, 0, max2, 1000);
    rectangle(0, 0, max2, 1000);
    max2=getmaxx();
    floodfill(0, max2, LIGHTBLUE);

    setcolor(YELLOW);
    ///<-
    line(390-i, 320-i,355-i,320-i);
    line(365-i, 365-i, 345-i, 345-i);
    ///^
    line (320-i, 390-i, 320-i, 355-i);
    line(275-i, 365-i, 295-i, 345-i);
    ///->
    line(285-i, 320-i,250-i,320-i);
    line(295-i, 295-i, 275-i, 275-i);
    ///\/
    line (320-i, 285-i, 320-i, 250-i);
    line (365-i, 275-i, 345-i, 295-i);

    setcolor(YELLOW);
    setfillstyle(1, YELLOW);
    circle(320-i, 320-i, 30);
    floodfill(320-i, 320-i, YELLOW);

    if(i==420)
        break;
    delay(10);
    cleardevice();
}


    ///cer
    setcolor(LIGHTBLUE);
    setfillstyle(1, LIGHTBLUE);
    bar(0, 0, max2, 284);
    rectangle(0, 0, max2, 284);
    max2=getmaxx();
    floodfill(0, max2, LIGHTBLUE);

    ///nori
    setcolor(BLUE);
    setfillstyle(1, BLUE);
    arc(380, 100, 80, 200, 20);
    arc(418, 82, 38, 182, 35);
    arc(370, 110, 130, 295, 10);
    arc(390, 110, 205, 320, 20);
    arc(430, 115, 200, 20, 33);
    arc(450, 85, 300, 110, 25);
    floodfill(380, 100, BLUE);

    setcolor(BLUE);
    setfillstyle(1, BLUE);
    arc(600, 130, 65, 200, 30);
    arc(592, 147, 150, 280, 25);
    arc(625, 145, 210, 310, 40);
    arc(650, 151, 190, 10, 25);
    arc(670, 130, 230, 180, 30);
    arc(630, 120, 200, 160, 25);
    floodfill(600, 130, BLUE);

    ///mare
    setcolor(BLUE);
    setfillstyle(9, BLUE);
    rectangle(0, 285, max_x, 700);
    max_x=getmaxx();
    floodfill(200, max_x, BLUE);

    ///valuri
    setcolor(BLUE);
    arc (40, 370, 45, 120, 50);
    arc (120, 310, 210, 300, 50);
    arc (220, 440, 45, 140, 50);
    arc (300, 380, 210, 300, 50);
    arc (560, 350, 45, 150, 50);
    arc (480, 290, 210, 330, 50);
    arc (460, 460, 45, 120, 50);
    arc (540, 410, 210, 300, 50);
    arc (620, 430, 45, 120, 50);
    arc (700, 370, 210, 300, 50);
    /*
    ///valuri
    setfillstyle(9, BLUE);
    arc(20, 285, 40, 180, 20);
    arc(25, 285, 45, 180, 15);
    ellipse(30, 285, 0, 180, 30, 40);
    floodfill(1, 284, BLUE);*/

    ///barcuta
    setcolor(LIGHTRED);
    setfillstyle(11, LIGHTRED);
    drawpoly(5, points);
    floodfill(250, 280, LIGHTRED);

    ///catarg
    bar(245, 170, 250, 280);
    setcolor(WHITE);
    setfillstyle(10, WHITE);
    drawpoly(4, points2);
    //circle(260, 200, 10);
    floodfill(260, 200, WHITE);

    ///soare
    setcolor(YELLOW);
    ///<-
    line(30, 100,65,100);
    line(55, 55, 75, 75);
    ///^
    line (100, 30, 100, 65);
    line(145, 55, 125, 75);
    ///->
    line(135, 100,170,100);
    line(125, 125, 145, 145);
    ///\/
    line (100, 135, 100, 170);
    line (55, 145, 75, 125);

    setcolor(YELLOW);
    setfillstyle(1, YELLOW);
    circle(100, 100, 30);
    floodfill(100, 100, YELLOW);


    ///nisip
    setcolor(YELLOW);
    setfillstyle(9, YELLOW);
    rectangle(0,500, maxx_x, 1000);
    maxx_x=getmaxx();
    floodfill(740, 740, YELLOW);

    ///prosopel 2
    setcolor(RED);
    setfillstyle(2, RED);
    drawpoly(5, points4);
    floodfill(450, 640, RED);

    ///umbrela
    setcolor(RED);
    setfillstyle(1, RED);
    bar(400, 600, 410, 760);
    floodfill(401, 620, RED);
    setfillstyle(9, RED);
    arc (410, 612, 20, 161, 160);
    arc (410, 300, 240, 301, 300);
    floodfill(410, 510, RED);
    setcolor(YELLOW);
    setfillstyle(1, YELLOW);
    circle(470, 530, 25);
    floodfill(470, 530, YELLOW);
    setcolor(BLUE);
    setfillstyle(1, BLUE);
    circle(380, 490, 20);
    floodfill(380, 490, BLUE);
    setcolor(LIGHTGREEN);
    setfillstyle(1, LIGHTGREEN);
    circle(320, 540, 24);
    floodfill(320, 540, LIGHTGREEN);
    setcolor(LIGHTRED);
    setfillstyle(1, LIGHTRED);
    circle(400, 557, 30);
    floodfill(400, 560, LIGHTRED);
    setcolor(LIGHTMAGENTA);
    setfillstyle(1, LIGHTMAGENTA);
    circle(440, 480, 15);
    floodfill(440, 490, LIGHTMAGENTA);
    setcolor(GREEN);
    setfillstyle(1, GREEN);
    circle(520, 550, 18);
    floodfill(520, 540, GREEN);

    ///prosopel 1
    setcolor(GREEN);
    setfillstyle(2, GREEN);
    drawpoly(5, points3);
    floodfill(120, 630, GREEN);

    setcolor(BLUE);
    settextstyle(SMALL_FONT, HORIZ_DIR, 4);
    outtextxy(270, 286, "IRINA");

    getch();
    closegraph();
}



//delay(time);
