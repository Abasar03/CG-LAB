// C++ program for implementing
// Bresenham Algorithm
#include<iostream>
#include<graphics.h>

using namespace std;


void Bresenham(float x0,float x1,float y0,float y1)
{   
    float dx=abs(x1-x0);
    float dy=abs(y1-y0);
    float P;
    int k=0;
    int xinc;
    int yinc;
    float steps;
    
    cout<<"Slope is:"<<dy/dx;
    if(x1>x0)
	{
    	xinc=1;
	}
	else
	 	xinc=-1;
	 	
    if(y1>y0)
	{
    	yinc=1;
	}
	else
	 	yinc=-1;
	 	
	if(abs(dx)>abs(dy))
	{
		P=2*dy-dx;
		steps=abs(dx);
			while(k<steps)
			{
				putpixel(x0,y0,BLACK);
				delay(10);
				if(P<0)
				{
					x0=x0+xinc;
					y0=y0;
					P=P+2*dy;
					k++;
				}
				else
				{	
					x0=x0+xinc;
					y0=y0+yinc;
					P=P+2*dy-2*dx;
					k++;
				}
			}
}
	else if(abs(dy)>=abs(dx))
	{
		P=2*dx-dy;
		steps=abs(dy);
		while(k<steps)
		{ 
			putpixel(x0,y0,BLACK);
			delay(10);
			if(P<0)
			{
				x0=x0;
				y0=y0+yinc;
				P=P+2*dx;
				k++;
			}
			else
			{
			x0=x0+xinc;
			y0=y0+yinc;
			P=P+2*dx-2*dy;
			k++;
			}
		
		}
	}
}


int main()
{
	initwindow(400,300,"ezzzzzzzz");
	setbkcolor(WHITE);
	cleardevice();
	setcolor(BLACK); 
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	outtextxy(200, 10,"ABASAR-THA078BCT003");
	
	float x0,x1,y0,y1;
	cout<<"Enter first endpoints"<<endl;
	cin>>x0>>y0;
	cout<<"Enter second endpoints"<<endl;
	cin>>x1>>y1;
	
	Bresenham(x0,x1,y0,y1);
	
	// Keep the window open
    getch();
    closegraph();
    
	return 0;
}




