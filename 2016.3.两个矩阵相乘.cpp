# include<stdio.h>
# define x 2
# define y 2
# define z 3

int main(void)
{  
	int a[100][100],b[100][100],c[100][100]={0},i,j;
	printf("������һ��x��y�е�A����:\n");
    for(i=0;i<x;i++)
	  {
		  for(j=0;j<y;j++)
                 scanf("%d",&a[i][j]);
	  }
    printf("������һ��y��z�е�B����:\n");
     for(i=0;i<y;i++)
	  {
		  for(j=0;j<z;j++)
                 scanf("%d",&b[i][j]);
	  }
    printf("A*B���¾���Ϊ:\n");
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