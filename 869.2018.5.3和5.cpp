# include<stdio.h>
int main(void)
{
   int a,b,i,sum=0;
   printf("��������������:\n");
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
   printf("a��b֮��Ȳ��ܱ�3����Ҳ���ܱ�5����������֮��Ϊ:%d\n",sum);
   return 0;
}