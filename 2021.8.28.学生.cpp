
# include<stdio.h>
# define N 2 
struct student
{
    char name[100];
    float score[3];
}stu[N];
int main(void)
{
	int i,j;
	float ave[N]={0},sum[N]={0};
  for(i=0;i<N;i++)
  {
	  printf("input %d ��ѧ��������:\n",i+1);
	  scanf("%s",stu[i].name);
	  for(j=0;j<3;j++)
	  {
		  printf("������ %d ��ѧ�������ſγɼ�:\n",i+1);
	       scanf("%f",&stu[i].score[j]);
		   sum[i]=sum[i]+stu[i].score[j];
	 }
	    ave[i]=sum[i]/3.0;
  }
  FILE *fp;
fp=fopen("D:\\output.txt","w");
for(i=0;i<N;i++)
{
 fprintf(fp,"%s %5.2f %5.2f %5.2f ave:%5.2f\n",stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],ave[i]);
 printf("��%d��ѧ��%s�ĳɼ��ֱ�Ϊ:\n%5.2f\n %5.2f\n %5.2f\n ƽ���ɼ�Ϊ:%5.2f\n",i+1,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],ave[i]);
}
return 0;
}
