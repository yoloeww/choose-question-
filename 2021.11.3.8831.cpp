# include<stdio.h>
int main()
{
	double shuzu[3][3]={{1,2,3},{1,2,1},{5,6,7}};
	double xiangliang[3]={3,2,1},result[3];
int i,j;
for(i=0;i<3;i++)
{
result[i]=0;
for(j=0;j<3;j++)
result[i]=result[i]+shuzu[i][j]*xiangliang[j];
}
for(i=0;i<3;i++)
printf("%8.2f",xiangliang[i]);
printf("\n");
for(i=0;i<3;i++)
printf("%8.2f",result[i]);
printf("\n");
return 0;
}
