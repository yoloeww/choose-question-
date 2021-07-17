# include<stdio.h>
# include<string.h>
void sort(char *p1,char *p2,char p3[])
{
	int i=0,j,k;
	while(*p1!='\0')
	{
	   p3[i]=*p1;
	   p1++;
	   i++;
	}
    while(*p2!='\0')
	{
		for(j=0;j<i;j++)
		{
		     if(p3[j]==*p2)
				 break;
		
		}
		if(j==i)
			p3[i++]=*p2;
		     p2++;
	}
	p3[i]='\0';
for(k=0;k<i-1;k++)
   for(int j=0;j<i-1-k;j++)
   {
	   if(p3[j]>p3[j+1])
	   {
		   char t=p3[j+1];
	       p3[j+1]=p3[j];
		   p3[j]=t;
	   }
	}
}
int main(void)
{
    char str1[100],str2[100],str3[100];
	printf("input str a and b:\n");
	gets(str1);
	gets(str2);
	sort(str1,str2,str3);
	puts(str3);
	return 0;
}