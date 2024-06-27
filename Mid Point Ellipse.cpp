// C program for implementing
// Mid-Point Ellipse Drawing Algorithm

#include <iostream>
#include <graphics.h>
#include<math.h>

using namespace std;

void midptellipse(int rx, int ry, int xc, int yc)
{

	float dx, dy, d1, d2, x, y;
	x = 0;
	y = ry;

	// Initial decision parameter of region 1
	d1 = (ry * ry)- (rx * rx * ry)+ (0.25 * rx * rx);
	dx = 2 * ry * ry * x;
	dy = 2 * rx * rx * y;

	// For region 1
	while (dx < dy) {

		// Print points based on 4-way symmetry
		putpixel(x + xc, y + yc,1);
		putpixel(-x + xc, y + yc,2);
		putpixel(x + xc, -y + yc,3);
		putpixel(-x + xc, -y + yc,4);

		// Checking and updating value of
		// decision parameter based on algorithm
		if (d1 < 0) {
			x++;
			dx = dx + (2 * ry * ry);
			d1 = d1 + dx + (ry * ry);
		}
		else {
			x++;
			y--;
			dx = dx + (2 * ry * ry);
			dy = dy - (2 * rx * rx);
			d1 = d1 + dx - dy + (ry * ry);
		}
	}

	// Decision parameter of region 2
	d2 = ((ry * ry) * ((x + 0.5) * (x + 0.5)))
		+ ((rx * rx) * ((y - 1) * (y - 1)))
		- (rx * rx * ry * ry);

	// Plotting points of region 2
	while (y >= 0) {

		// printing points based on 4-way symmetry
		putpixel(x + xc, y + yc,5);
		putpixel(-x + xc, y + yc,6);
		putpixel(x + xc, -y + yc,7);
		putpixel(-x + xc, -y + yc,8);

		// Checking and updating parameter
		// value based on algorithm
		if (d2 > 0) {
			y--;
			dy = dy - (2 * rx * rx);
			d2 = d2 + (rx * rx) - dy;
		}
		else {
			y--;
			x++;
			dx = dx + (2 * ry * ry);
			dy = dy - (2 * rx * rx);
			d2 = d2 + dx - dy + (rx * rx);
		}
	}
}

// Driver code
int main()
{
	initwindow(400,300,"ezzzzzzzz");
	setbkcolor(WHITE);
	cleardevice();
	setcolor(BLACK); 
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	outtextxy(200, 10,"ABASAR-THA078BCT003");
	
	int a,b,x,y;
	cout<<"Enter major and minor radius"<<endl;
	cin>>a>>b;
	cout<<"Enter centre of ellipse"<<endl;
	cin>>x>>y;
	
	midptellipse(a,b,x,y);
	
	getch();
    closegraph();

	return 0;
}

