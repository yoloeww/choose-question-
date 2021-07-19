# include<stdio.h>
# define x 2
# define y 2
# define z 3

int main(void)
{  
	int a[100][100],b[100][100],c[100][100]={0},i,j;
	printf("请输入一个x行y列的A矩阵:\n");
    for(i=0;i<x;i++)
	  {
		  for(j=0;j<y;j++)
                 scanf("%d",&a[i][j]);
	  }
    printf("请输入一个y行z列的B矩阵:\n");
     for(i=0;i<y;i++)
	  {
		  for(j=0;j<z;j++)
                 scanf("%d",&b[i][j]);
	  }
    printf("A*B的新矩阵为:\n");
	for(i=0;i<x;i++)
	{
		  for(j=0;j<z;j++)
		  {   
			     c[i][j]=0;
				 for(int k=0;k<y;k++)
			     c[i][j]=a[i][k]*b[k][j]+c[i][j];
		  }
	}
	for(i=0;i<x;i++)
	{
		  for(j=0;j<z;j++)
		  {
			    printf("%5d",c[i][j]);
		  }
		  putchar('\n');
	}
		  return 0;

}
