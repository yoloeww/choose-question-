# include<stdio.h>
int main(void)
{
   int ispirme(int n);
   int i,m;
   int data[4]={2,13,9,54};
   for(i=0;i<4;i++)
   {
      m=ispirme(data[i]);
	  if(m==0)
		  printf("0");
	  else
		  printf("1");
   }
   printf("\n");
}
int ispirme(int n)
{
     int i;
	 for(i=2;i<n;i++)
	 {
		 if(n%i==0)
			 return 0;
	 }
		 if(n==i)
			 return 1;
}
