// C++ program for implementing
// Mid-Point Circle Drawing Algorithm
#include<iostream>
#include <graphics.h>
#include <math.h>

using namespace std;


void midPointCircleDraw(int a, int b, float r)
{
	int x = 0, y = b;
	
	//initial decision parameter
	float p = 5/4 - r;
	
	while(x < y)
	{
		if(p<0)
		{
			x++;
			p = p + 2*x + 1;
		}
		else{
			x++;
			y--;
			p = p + 2*x - 2*y + 1;
		}
		putpixel(x+a,y+b,1); //octant 1
		putpixel(y+a,x+b,2); //octant 2
		putpixel(x+a,-y+b,3); //octant 3
		putpixel(y+a,-x+b,4); //octant 4
		putpixel(-x+a,y+b,5); //octant 5
		putpixel(-y+a,x+b,6); //octant 6
		putpixel(-x+a,-y+b,7); //octant 7
		putpixel(-y+a,-x+b,8); //octant 8
		
		delay(10);
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
	
	int k,h;
	float r;
	
	cout << "Enter the center of circle: " << endl;
	cin >> k >> h;
	cout << "Enter the radius of circle: ";
	cin >> r;
	
	midPointCircleDraw(k, h, r);
	
	 // Keep the window open
    getch();
    closegraph();

	return 0;
}

