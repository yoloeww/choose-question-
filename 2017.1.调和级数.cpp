# include<stdio.h>
int main(void)
{
   double sum=0;
   int n=0;
   while(sum<1)
   {
       sum=sum+(1.0)/(n+1);
	   n++;
   }
   printf("第%d项的值大于9\n",n+1);
   return 0;
}
