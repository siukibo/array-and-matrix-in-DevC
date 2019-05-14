//nhap ma tran A nxn dem so chan
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void nhap(int*a,int n) 
{
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	   {
	   printf("a[%d][%d]=",i,j);
	   scanf("%d",(a+n*i+j));
       }
}
void xuat(int*a,int n) 
{   printf("ma tran vua nhap la:\n");
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	   printf("%5d",*(a+n*i+j));
	printf("\n");
    }
}
int  ktra(int*a,int n)
{   int dem=0;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	if(*(a+n*i+j)%2==0)
	   dem++;
	   return dem;
}
int main()
{   int n;
   printf("nhap n: ");
   scanf("%d",&n);
   int *a=(int*)malloc(n*n*sizeof(int));
   nhap(a,n);
   xuat(a,n);
     int dem=ktra(a,n);
      printf("so cac so chan trong ma tran la:%5d",dem);
}
