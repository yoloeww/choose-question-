# include<stdio.h>
# define N 10
int main(void)
{
	void sort(int *a,int *b);
	int i,j,max;
	int a[N];
	printf("������ʮ����:\n");
    for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	/*for(i=0;i<N-1;i++)  ѡ������
	{
	    max=0;
		for(j=1;j<N-i;j++)
		{
		    if(a[j]>a[max])
				max=j;
		}
     sort(&a[j-1],&a[max]);
	}*/
	for(i=0;i<N-1;i++)   //ð������
		for(j=0;j<N-1-i;j++)
		{
			 if(a[j]>a[j+1])
			 sort(&a[j],&a[j+1]);
		}
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	putchar('\n');
	return 0;

}
void sort(int *a,int *b)
{  
	int temp;
     	temp=*b;
		*b=*a;
		*a=temp;
}