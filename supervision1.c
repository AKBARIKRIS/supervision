#include<stdio.h>
#include<string.h>

main()
{
	int *p;
	
	char a[50];
	int i;
	p = fopen("fill.txt","w");
	if(p == NULL)
	{
		printf("fill not open");
	}
	else
	{
		printf("Enter Text : ");
		gets(a);
		
		for(i=0 ; i<strlen(a) ; i++)
		{
			fputc(a[i],p);
		}
		fclose(p);
	}
}
