#include<stdio.h>
main()
{
	int x,*p1,**p2;
	x = 100;
	clrscr();
	p1 = &x;
	p2 = &p1;
	printf("%d",**p2);
}