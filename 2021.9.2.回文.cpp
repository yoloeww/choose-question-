# include<stdio.h>
int main(void)
{
  int s=0,i,t,n;
  printf("input num:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i=i*10)
  {
    s=n%(i*10)/i+s*10;
  }
  printf("%d",s);
}