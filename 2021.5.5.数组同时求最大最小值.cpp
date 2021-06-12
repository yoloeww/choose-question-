# include<stdio.h>
int main(void)
{
	int x[]={3,5,2,98,214,523},max,min;
	int *p=x;
	min=max=x[0];
	for(;p<=x+5;p++)
	{
	   if(max<*p) max=*p;
	   if(min>*p) min=*p;
	}
	printf("max=%d,min=%d\n",max,min);
	
	return 0;
}
