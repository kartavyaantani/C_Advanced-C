#include <stdio.h>
main()
{
	FILE *fp;
	long  n;
	char  c;

	clrscr();
	fp = fopen("RANDOM","w");

	while((c = getchar()) != EOF)
		putc(c,fp);
	printf("No. of characters entered = %ld\n",ftell(fp));
	fclose(fp);
	fp = fopen("RANDOM","r");
	n = 0L;

	while(feof(fp) == 0)
	{
		fseek(fp,n,0);
		printf("Position of %c is %ld\n",getc(fp),ftell(fp));
		n += 5L;
	}
	putchar('\n');
	fseek(fp,-1L,2);
	do
	{
		putchar(getc(fp));
	}
	while(!fseek(fp,-2L,1));
		fclose(fp);
}