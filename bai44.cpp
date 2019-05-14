//nhap ma tran A mxn hien thi ma tran va ma tran chuyen vi
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void nhap(int*a,int m,int n) 
{
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	   {
	   printf("a[%d][%d]=",i,j);
	   scanf("%d",(a+n*i+j));
       }
}
void xuat(int*a,int m,int n) 
{   printf("ma tran vua nhap la:\n");
	for(int i=0;i<m;i++)
	{
	for(int j=0;j<n;j++)
	   printf("%5d",*(a+n*i+j));
	printf("\n");
    }
}
void cvi(int*a,int m,int n)
{   
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<m;j++)
	  printf("%5d",*(a+n*j+i));
	printf("\n");
    }
}
int main()
{   int m,n;
   printf("nhap so hang :");
   scanf("%d",&m);
   printf("nhap so cot: ");
   scanf("%d",&n);
   int *a=(int*)malloc(m*n*sizeof(int));
   nhap(a,m,n);
   xuat(a,m,n);
   printf("ma tran chuyen vi cua ma tran vua nhap la:\n");
   cvi(a,m,n);
}
