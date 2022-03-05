#include<iostream>
#include<graphics.h>
#include<cmath>
#include<dos.h>
using namespace std;
void plot(int x1,int y1,int x2,int y2,int x3,int y3){
	moveto(x1,y1);
	lineto(x2,y2);
	lineto(x3,y3);
	lineto(x1,y1);
}
void scalecentroid(int x1,int y1,int x2,int y2,int x3,int y3){
	int sx=2;
	int sy=2;
	int xf=(x1+x2+x3)/3;
	int yf=(y1+y2+y3)/3;
	
	x1=x1*sx+xf*(1-sx);
	y1=y1*sy+yf*(1-sy);
		x2=x2*sx+xf*(1-sx);
	y2=y2*sy+yf*(1-sy);
		x3=x3*sx+xf*(1-sx);
	y3=y3*sy+yf*(1-sy);
	moveto(x1,y1);
	lineto(x2,y2);
	lineto(x3,y3);
	lineto(x1,y1);
}
	

int main(){
	initwindow(400,400,"scale");
	plot(1,2, 3,4 ,7,10);
	scalecentroid(1,2,3,4,7,10);
	getch();
	closegraph();
}
