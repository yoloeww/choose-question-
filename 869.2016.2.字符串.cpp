# include<stdio.h>
# include<string.h>
int main(void)
{
   char str[100];
   int n;
   printf("������һ���ַ���:\n");
   gets(str);
   printf("������һ����:\n");
   scanf("%d",&n);
   if(n==1)
	   printf("���ַ�������Ϊ%d\n",strlen(str));
   else if(n==0)
	   printf("%s\n",strupr(str));
   return 0;

}