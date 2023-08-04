#include<stdio.h>

main()
{
	int *p;
	char a;
	
	p = fopen("fill2.txt","r");
	
	if(p==NULL)
	{
		printf("fill not open ");
	}
	else
	{
		while(a!=EOF)
		{
			a = fgetc(p);
			printf("%c",a);
		}
 	fclose(p);
	}
}
