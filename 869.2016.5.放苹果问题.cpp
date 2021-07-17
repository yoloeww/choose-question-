#include<stdio.h>
int a[30];
int f(int m,int n)
{
	if(n==1||m==0)
	{
		return 1;
	}
	if(n>m)
	{
		return f(m,m);
	}
	return f(m,n-1)+f(m-n,n);
}
int main(void)
{
	int t,m,n,i=0;
	scanf("%d",&t);
	while(t--)
	{
	  	scanf("%d%d",&m,&n);
	  	a[i++]=f(m,n);
	}
	for(int j=0;j<i;j++){
		printf("%d\n",a[j]);
	}
	return 0;
}
