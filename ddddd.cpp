#include <iostream>
#include <stdlib.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
main(){
	int gd=DETECT,gm;
	int x1,x2,y1,y2,step,i,dx,dy;
	float x,y,xinc,yinc;
	initgraph(&gd,&gm,"a");
	printf("put the value of x1 and y1");
	scanf("%d%d",&x1,&y1);
	printf("put the value of x2 and y2");
	scanf("%d%d",&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	x=x1;y=y1;
	if (abs(dx)>abs(dy)){
		step=abs(dx);
	}
	else{
		step=abs(dy);
	}
	xinc=dx/float(step);
	yinc=dy/float(step);
	putpixel(x,y,RED);
	for(i=0;i<step;i++){
		x=x+xinc;
		y=y+yinc;
		putpixel(int(x+0.5),int(y+0.5),RED);
		
	}
	getch();
	closegraph();
	return 0;
}
