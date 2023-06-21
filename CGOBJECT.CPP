#include<graphics.h>
#include<dos.h>
#include<iostream.h>
#include<conio.h>

class polygon
{
	public:
	int c;

	void floodfill(int x, int y, int ocolor, int ncolor)
	{
      		c = getpixel(x,y);
     		if(c == ocolor)
     		{
 			putpixel(x,y,ncolor);
 			delay(9);
 			floodfill(x+1,y,ocolor,ncolor);
 			floodfill(x-1,y,ocolor,ncolor);
 			floodfill(x,y+1,ocolor,ncolor);
 			floodfill(x,y-1,ocolor,ncolor);
		}
	}

	void flodfill(int x, int y, int ocolor, int ncolor)
	{
      		int c = getpixel(x,y);
     		if(c == ocolor)
     		{
 			putpixel(x,y,ncolor);
 			//delay(9);
 			flodfill(x+1,y,ocolor,ncolor);
 			flodfill(x-1,y,ocolor,ncolor);
 			flodfill(x,y+1,ocolor,ncolor);
 			flodfill(x,y-1,ocolor,ncolor);
		}
	}
};


void repeat()
{

	int j;

	//dots
	for(j=20;j<=620;)
	{
		fillellipse(j,460,3,3);
		j += 100;
	}

	fillellipse(20,400,3,3);   //2nd last
	fillellipse(120,400,3,3);
	fillellipse(220,400,3,3);
	fillellipse(320,400,3,3);
	setcolor(5);
	setfillstyle(1,5);
	fillellipse(400,400,5,5);
	setcolor(14);
	setfillstyle(1,15);
	fillellipse(520,400,3,3);
	fillellipse(620,400,3,3);

	for(j=20;j<=620;)
	{
		fillellipse(j,340,3,3);
		j += 100;
	}

	fillellipse(20,280,3,3);
	fillellipse(120,280,3,3);
	fillellipse(520,280,3,3);
	fillellipse(620,280,3,3);

	fillellipse(20,220,3,3);
	fillellipse(120,220,3,3);
	fillellipse(520,220,3,3);
	fillellipse(620,220,3,3);


	for(j=20;j<=620;)
	{
		fillellipse(j,160,3,3);
		j += 100;
	}
	setcolor(4);
	setfillstyle(1,4);
	fillellipse(620,160,5,5);

	setcolor(1);
	setfillstyle(1,1);
	fillellipse(20,100,5,5);
	setcolor(0);
	setfillstyle(1,15);
	for(j=120;j<=620;)
	{
		fillellipse(j,100,3,3);
		j += 100;
	}

	for(j=20;j<=620;)
	{
		fillellipse(j,40,3,3);
		j += 100;
	}

	//left bottom line
	setcolor(3);
	rectangle(0,437,370,419);

	//right bottom line
	rectangle(423,437,getmaxx(),419);

	//outer rectangle
	setcolor(3);
	rectangle(0,0,getmaxx(),getmaxy());

	//inner rectangle
	setfillstyle(1,12);
	rectangle(198,170,420,318);
	rectangle(208,180,410,308);
	// setcolor

	//c
	//vertical line
	setcolor(3);
	line(50,170,50,318);
	line(60,180,60,308);

	//horizontal line
	line(60,180,145,180);
	line(50,170,145,170);
	line(145,180,145,170); //small vertical line
	line(50,318,145,318);
	line(60,308,145,308);
	line(145,318,145,308);  //small vertical line

	//G
	//Vertical lines
	line(475,170,475,318);
	line(485,180,485,308);

	line(590,318,590,230);
	line(580,308,580,240);

	line(590,170,590,180);
	line(530,240,530,230);

	//Horizontal lines
	line(475,170,590,170);
	line(485,180,590,180);
	line(475,318,590,318);
	line(485,308,580,308);

	line(580,240,530,240);
	line(590,230,530,230);

	//2nd last middle rectangle
	rectangle(250,362,520,380);
	//2nd last left rectangle
	rectangle(0,362,200,380);
	//2nd last right rectangle
	rectangle(568,362,getmaxx(),380);
	//top 2nd line right rectangle
	rectangle(0,110,380,130);
	//top 2nd line left rectangle
	rectangle(437,110,getmaxx(),130);
	//1st line right rectangle
	rectangle(568,50,getmaxx(),70);
	//1st line left rectangle
	rectangle(0,50,200,70);
	//1st line middle rectangle
	rectangle(250,50,520,70);




	//enemies

	int ocolor=0,ncolor=12;
	setcolor(12);
	setfillstyle(1,12);
	fillellipse(230,200,15,13);
	line(215,200,215,220);
	line(215,220,220,215);
	line(220,215,225,220);
	line(225,220,230,215);
	line(230,215,235,220);
	line(235,220,240,215);
	line(240,215,245,220);
	line(245,200,245,220);
	setcolor(0);
	setfillstyle(1,15);
	//setcolor(12);
	fillellipse(224,200,2,3);
	fillellipse(235,200,2,3);

	setcolor(1);
	setfillstyle(1,1);
	fillellipse(380,200,15,13);
	line(365,200,365,220);
	line(365,220,370,215);
	line(370,215,375,220);
	line(375,220,380,215);
	line(380,215,385,220);
	line(385,220,390,215);
	line(390,215,395,220);
	line(395,200,395,220);
	setcolor(0);
	setfillstyle(1,15);
	//setcolor(0);
	fillellipse(374,200,2,3);
	fillellipse(385,200,2,3);

	setcolor(5);
	setfillstyle(1,5);
	fillellipse(305,260,15,13);
	line(290,260,290,280);
	line(290,280,295,275);
	line(295,275,300,280);
	line(300,280,305,275);
	line(305,275,310,280);
	line(310,280,315,275);
	line(315,275,320,280);
	line(320,260,320,280);
	setcolor(0);
	setfillstyle(1,15);
	//setcolor(12);
	fillellipse(299,260,2,3);
	fillellipse(310,260,2,3);
       //	fillellipse(284,250,2,3);


	polygon p;
	p.flodfill(217,217,ocolor,ncolor);
	p.flodfill(367,217,ocolor,BLUE);
	p.flodfill(292,277,ocolor,MAGENTA);


}


void loading()
{
	int ocolor=0,ncolor=6;

	cout<<"\n\n\n\n\n\n\n\n\n\n\tL\tO\tA\tD\tI\tN\tG  .  .  .";
	rectangle(120,200,420,250);

	for(int x=120; x<= 420; x++)
	{
		for(int y=200; y<= 250; y++)
		{
		       putpixel(x,y,GREEN);
		}
		delay(30);
	}
	cleardevice();
}


void main()
{

	int gm, gd=DETECT, i;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");


	loading();
	settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
	setcolor(13);
 	outtextxy(180,190,"READY ??");
	delay(1000);
	cleardevice();

	settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
	setcolor(14);
	outtextxy(120,190,"LET'S BEGIN!!");
	delay(1000);
	cleardevice();

	repeat();
	//packman
	for(i=0; i<380;i++)
	{
		setcolor(0);
		setfillstyle(1,14);
		pieslice(21+i,458,-30,50,16);
		delay(4);
	}

	for(i=0; i<57; i++)
	{
		setcolor(0);
		setfillstyle(1,14);
		pieslice(400,458-i,-30,50,16);
		delay(4);
	}

	for(i=0; i<150; i++)
	{
		setcolor(0);
		setfillstyle(1,13);
		pieslice(400+i,401,-30,50,16);
		delay(4);
	}


	settextstyle(BOLD_FONT,HORIZ_DIR,4);
	setcolor(15);
	//settextcolor(RED);
	outtextxy(104,180,"ENEMIES AHEAD!!");
	for(i=0; i<61; i++)
	{
		setcolor(0);
		setfillstyle(1,13);
		pieslice(550,401-i,-30,50,16);
		delay(5);
	}
	for(i=0; i<70; i++)
	{
		setcolor(0);
		setfillstyle(1,14);
		pieslice(550+i,340,-30,50,16);
		delay(4);
	}


	for(i=0; i<190; i++)
	{
		setcolor(0);
		setfillstyle(1,14);
		pieslice(620,340-i,-30,50,16);
		delay(4);
	}

	for(i=0; i<1;i++)
	{
		setcolor(0);
		setfillstyle(1,4);
		pieslice(620-i,150,-30,50,16);
		delay(5);
	}


	//just added

	for(i=0; i<213;i++)
	{
		//left bottom line
		setcolor(4);
		rectangle(0,437,370,419);

		//right bottom line
		rectangle(423,437,getmaxx(),419);

		//outer rectangle
		setcolor(4);
		rectangle(0,0,getmaxx(),getmaxy());

		//inner rectangle
		setfillstyle(1,4);
		rectangle(198,170,420,318);
		rectangle(208,180,410,308);
		// setcolor

		//c
		//vertical line
		setcolor(4);
		line(50,170,50,318);
		line(60,180,60,308);

		//horizontal line
		line(60,180,145,180);
		line(50,170,145,170);
		line(145,180,145,170); //small vertical line
		line(50,318,145,318);
		line(60,308,145,308);
		line(145,318,145,308);  //small vertical line

		//G
		//Vertical lines
		line(475,170,475,318);
		line(485,180,485,308);

		line(590,318,590,230);
		line(580,308,580,240);

		line(590,170,590,180);
		line(530,240,530,230);

		//Horizontal lines
		line(475,170,590,170);
		line(485,180,590,180);
		line(475,318,590,318);
		line(485,308,580,308);

		line(580,240,530,240);
		line(590,230,530,230);

		//2nd last middle rectangle
		rectangle(250,362,520,380);
		//2nd last left rectangle
		rectangle(0,362,200,380);
		//2nd last right rectangle
		rectangle(568,362,getmaxx(),380);
		//top 2nd line right rectangle
		rectangle(0,110,380,130);
		//top 2nd line left rectangle
		rectangle(437,110,getmaxx(),130);
		//1st line right rectangle
		rectangle(568,50,getmaxx(),70);
		//1st line left rectangle
		rectangle(0,50,200,70);
		//1st line middle rectangle
		rectangle(250,50,520,70);

		//enemies
		setcolor(4);

		int ocolor=0,ncolor=12;
		setcolor(12);
		setfillstyle(1,12);
		fillellipse(230,200,15,13);
		line(215,200,215,220);
		line(215,220,220,215);
		line(220,215,225,220);
		line(225,220,230,215);
		line(230,215,235,220);
		line(235,220,240,215);
		line(240,215,245,220);
		line(245,200,245,220);
		setcolor(0);
		setfillstyle(1,15);
		//setcolor(12);
		fillellipse(224,200,2,3);
		fillellipse(235,200,2,3);

		setcolor(1);
		setfillstyle(1,1);
		fillellipse(380,200,15,13);
		line(365,200,365,220);
		line(365,220,370,215);
		line(370,215,375,220);
		line(375,220,380,215);
		line(380,215,385,220);
		line(385,220,390,215);
		line(390,215,395,220);
		line(395,200,395,220);
		setcolor(0);
		setfillstyle(1,15);
		//setcolor(0);
		fillellipse(374,200,2,3);
		fillellipse(385,200,2,3);

		setcolor(5);
		setfillstyle(1,5);
		fillellipse(305,260,15,13);
		line(290,260,290,280);
		line(290,280,295,275);
		line(295,275,300,280);
		line(300,280,305,275);
		line(305,275,310,280);
		line(310,280,315,275);
		line(315,275,320,280);
		line(320,260,320,280);
		setcolor(0);
		setfillstyle(1,15);
		//setcolor(12);
		fillellipse(299,260,2,3);
		fillellipse(310,260,2,3);
       		//fillellipse(284,250,2,3);


		polygon p;
		p.flodfill(217,217,ocolor,ncolor);
		p.flodfill(367,217,ocolor,BLUE);
		p.flodfill(292,277,ocolor,MAGENTA);

	
       		//polygon p;
      		//p.flodfill(217,217,ocolor,ncolor);



		setcolor(4);	
		setfillstyle(1,4);
		pieslice(620-i,150,150,0,16);
		pieslice(620-i,150,200,360,16);
		delay(5);
		cleardevice();

	}

	setcolor(15);
	setfillstyle(1,15);

	repeat();

	for(i=0; i<30;i++)
	{
		setcolor(0);
		setfillstyle(1,14);
		pieslice(415,120-i,-30,50,16);
		delay(5);

	}

	for(i=0; i<399;i++)
	{
		setcolor(0);
		setfillstyle(1,14);
		//pieslice(415-i,90,-30,50,16);
		pieslice(415-i,90,150,0,16);
		pieslice(415-i,90,200,360,16);
		delay(5);

	}

	for(i=0; i<700;i++)
	{
		setcolor(0);
		setfillstyle(1,1);
		//pieslice(415-i,90,-30,50,16);
		pieslice(17+i,90,-30,50,16);
		delay(5);

	}


	cleardevice();

	setfillstyle(1,14);
	rectangle(0,0,getmaxx(),getmaxy());


	i=0;
	while(i<6)
	{
		settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
		setcolor(14);
		outtextxy(230,180,"LVL 1");
		outtextxy(170,220,"COMPLETED");
		delay(500);
	
		settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
		setcolor(0);
		outtextxy(230,180,"LVL 1");
		outtextxy(170,220,"COMPLETED");
		delay(500);
		i++;
	}
	cleardevice();
	getch();
}