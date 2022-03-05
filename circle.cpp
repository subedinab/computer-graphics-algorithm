#include<graphics.h>
main(){
	int gd=0,gm;
	initgraph(&gd,&gm,"");
	circle(300,200,20);
	getch();
	closegraph();
}
