// C++ program for implementing
// DDA Algorithm

#include<iostream>
#include<graphics.h>

using namespace std;


void DDALINE(float x0,float y0,float x1,float y1)
{
	float dx=x1-x0;
	float dy=y1-y0;
	float m=dy/dx;
	
	if(m<1)
	{
		while(x0!=x1)
		{
			putpixel(x0,y0,BLACK);
			x0=x0+1;
			y0=y0+m;
			delay(10);	
		}
	}
	else if(m>1)
	{
		while(y0!=y1)
		{
			putpixel(x0,y0,BLACK);
			x0=x0+1;
			y0=y0+1;
			delay(10);	
		}
	}
	
	else
	{
		while(y0!=y1)
		{
			putpixel(x0,y0,BLACK);
			x0=x0+1/m;
			y0=y0+1;
			delay(10);
			
		}
	}
	

}
int main()
{
	//Console settings
	initwindow(400,300,"ezzzzzzzz");
	setbkcolor(WHITE);
	cleardevice();
	setcolor(BLACK); 
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	outtextxy(200, 10,"ABASAR-THA078BCT003");
	
	float x0,x1,y0,y1;
	cout<<"Enter first end points"<<endl;
	cin>>x0>>y0;
	cout<<"Enter second end points"<<endl;
	cin>>x1>>y1;
	
	DDALINE(x0,y0,x1,y1);
	
	// Keep the window open
    getch();
    closegraph();
    
	return 0;
	
}
