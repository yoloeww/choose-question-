# include<stdio.h>
# define PI 3.14
int main(void)
{
   double r,h,l=0.0,s=0.0,v=0.0;
   printf("input r:\n");
   scanf("%lf",&r);
   printf("input h:\n");
 scanf("%lf",&h);
   l=PI*2*r;
   s=PI*r*r;
   v=PI*r*r*h;
   printf("圆周长为%4.2lf\n",l);
    printf("圆面积为%4.2lf\n",s);
	 printf("圆柱体积为%4.2lf\n",v);
	 return 0;
}