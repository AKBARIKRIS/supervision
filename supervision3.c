#include <stdio.h>
 
int main()
{
   int *fp;
   char ch;
   char *filename = "fill3.txt";
   char *content = "This text file, using C programming.";

   fp = fopen(filename,"r");
   printf("\n Contents of %s  \n",filename);
   
   while ((ch = fgetc(fp) )!= EOF)
   {
      printf ("%c",ch);
   }

   fclose(fp);
   fp = fopen(filename,"a");
   fprintf(fp, "%s\n",content);
   fclose(fp);
   fp = fopen(filename,"r");
   printf("\nContents of %s  -\n",filename);
   
   while ((ch = fgetc(fp))!= EOF)
   {
      printf ("%c",ch);
   }
    fclose(fp);
}
