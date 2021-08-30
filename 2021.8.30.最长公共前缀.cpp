# include<stdio.h>
# include<string.h>
void fun(char *p1,char *p2,char *p3)
{
   while(*p1!='\0'&&*p2!='\0')
   {
      if((*p1)==(*p2))
		  *p3=*p1;
          p1++;
		  p2++;
		  p3++;
   }
   p3='\0';
}
int main(void)
{  
	char a[100],b[100],c[100]={0};
	printf("input two char:\n");
	gets(a);
	gets(b);
	fun(a,b,c);
	puts(c);
	return 0;
}