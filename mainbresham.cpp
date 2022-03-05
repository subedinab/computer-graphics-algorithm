#include<iostream>
#include<graphics.h>
#include<dos.h>
#include<cmath>
using namespace std;
int main(){
	int x1,y1,x2,y2,dx,dy,xi,yi,pk,i;
	initwindow(200,500,"breshaem algorithm");
	cout<<"enter the value of x1 and y1";
	cin>>x1>>y1;
	cout<<"enter the value of x2,y2";
	cin>>x2>>y2;
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(x2>x1){
		xi=1;
	}
	else{
		xi=-1;
	}
	if(y2>y1){
		yi=1;
	}
	else{
		yi=-1;
	}
	putpixel(x1,y1,RED);
	if(dx>dy){
		pk=2*dy-dx;
		for(i=0;i<dx;i++){
			if(pk<0){
				x1=x1+xi;
				y1=y1;
				pk=pk+2*dy;
			}
			else{
				x1=x1+xi;
				y1=y1+yi;
				pk=pk+2*dy-2*dx;
				
			}
			putpixel(x1,y1,RED);
			
		}
	}
	else{
		pk=2*dx-dy;
		for(i=0;i<dy;i++){
			if(pk<0){
				x1=x1;
				y1=y1+yi;
				pk=pk+2*dx;
			}
			else{
				x1=x1+xi;
				y1=y1+yi;
				pk=pk+2*dx-2*dy;
				
			}
			putpixel(x1,y1,RED);
		}
		
	}
	getch();
	closegraph();
	
}
