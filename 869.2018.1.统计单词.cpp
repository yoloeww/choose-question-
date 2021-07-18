# include<stdio.h>
# include<string.h>
int fun(char a[])
{
  int i,n=0,l=0;

     for(i=0;a[i]!='\0';i++)
	 {
	    if((a[i]!=' '&&a[i+1]==' ')||(a[i]!=' '&&a[i+1]=='\0'))
			n++;
	 }
  return n;
}
int main(void)
{
  char a[100],k=0;
  printf("请输入一行字符:\n");
  gets(a);
  k=fun(a);
  printf("这行字符共有%d个单词\n",k);
  return 0;
}