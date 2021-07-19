# include<stdio.h>
# include<string.h>
void replace(char *p)
{
   int i,flag=0;
  while(*p!='\0')
   {
       if(*p=='h'&&*(p+1)=='e'&&*(p+2)=='r')
	   {
		   *p='s';
		   *(p+1)='h';
		   *(p+2)='e';
		   flag=1;
	   } 
	   p++;
   }
  if(flag)
	  printf("error");
}
int main(void)
{
	char p[100];
	printf("input p:\n");
    gets(p);
	replace(p);
	printf("%s",p);
	return 0;
   
}
