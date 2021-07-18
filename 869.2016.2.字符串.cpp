# include<stdio.h>
# include<string.h>
int main(void)
{
   char str[100];
   int n;
   printf("请输入一个字符串:\n");
   gets(str);
   printf("请输入一个数:\n");
   scanf("%d",&n);
   if(n==1)
	   printf("该字符串长度为%d\n",strlen(str));
   else if(n==0)
	   printf("%s\n",strupr(str));
   return 0;

}