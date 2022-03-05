#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
void draw(int,int,int,int);
int main(){
	int gd=DETECT,gm;
	int r,x,y,xc,yc,pk;
	initgraph(&gd,&gm,NULL);
	cout<<"enter radius"<<endl;
	cin>>r;
	cout<<"enter centers cooerdinate";
	cin>>xc>>yc;
	pk=1-r;
	x=0,y=r;
	while(x<=y){
		draw(x,y,xc,yc);
		x++;
		if(pk<0){
			pk=pk+2*x+1;
		}
		else{
			y--;
			pk=pk+2*x-2*y+1;
		}
	}
	getch();
	closegraph();
	return 0;
}
void draw(int x,int y,int xc,int yc){
	putpixel(x+xc,y+yc,1);
	putpixel(-x+xc,y+yc,2);
	putpixel(x+xc,-y+yc,3);
	putpixel(-x+xc,-y+yc,4);
	putpixel(y+xc,x+yc,5);
	putpixel(-y+xc,x+yc,6);
	putpixel(-y+xc,-x+yc,7);
	putpixel(y+xc,-x+yc,8);
	delay(100);
				
}

