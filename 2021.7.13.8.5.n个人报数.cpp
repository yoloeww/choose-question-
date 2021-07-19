# include<stdio.h>
int main(void)
{
    int i,k,m,n,num[50],*p;
	printf("\ninput number of people n :\n");
	scanf("%d",&n);
	p=num;
	for(i=0;i<n;i++)
	*(p+i)=i+1;
	i=0; //循环时计数变量
	k=0;  //报数计数变量
	m=0;  //退出人数
	while(m<n-1)
	{
	    if(*(p+i)!=0)
		  k++;
		if(k==3)
		{
		   *(p+i)=0;
		   k=0;
		   m++;
		}
		i++;
		if(i==n)
			i=0;
	}
	while(*p==0)
		p++;
	printf("最后留下的人为NO.%d\n",*p);
	return 0;
}