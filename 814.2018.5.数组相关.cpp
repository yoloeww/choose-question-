# include<stdio.h>
# define M 5
int sum1=0,sum2=0,sum=0;
void num(int a[M][M])
{
	int i,j;
	for(i=0;i<M;i++)
		for(j=0;j<M;j++)
		{
		  if(i==j)
		  {
		    sum1=a[i][i]+sum1;
		  }
		  else if(i+j==5)
		  {
		     sum2=a[i][j]+sum2;
		  }
		}
		sum=sum1+sum2;
}
int main(void)
{
	
	int a[M][M],i,j;
	printf("请输入5x5的数组:\n");
	for(i=0;i<M;i++)
		for(j=0;j<M;j++)
			scanf("%d",&a[i][j]);
		num(a);
  printf("主对角线元素为\n%d",sum1);
  printf("副对角线元素为\n%d",sum2);
  printf("对角线元素为\n%d",sum);
  return 0;
}
