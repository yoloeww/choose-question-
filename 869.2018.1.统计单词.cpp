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
  printf("������һ���ַ�:\n");
  gets(a);
  k=fun(a);
  printf("�����ַ�����%d������\n",k);
  return 0;
}