# include<stdio.h>
int main(void)
{
   int a,b,i,sum=0;
   printf("请输入两个整数:\n");
   scanf("%d%d",&a,&b);
   if(a>b)
   {
   for(i=b;i<a;i++)
   {
      if(i%3!=0&&i%5!=0)
		  sum+=i;
   }
   }
   if(a<b)
   {
   for(i=a;i<b;i++)
   {
      if(i%3!=0&&i%5!=0)
		  sum+=i;
   }
   }
   printf("a到b之间既不能被3整除也不能被5整除的数字之和为:%d\n",sum);
   return 0;
}