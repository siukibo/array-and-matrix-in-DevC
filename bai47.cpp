//nhap ma tran A mxn tinh tong cac phan tu tren hang 0
#include<conio.h>
#include<stdio.h>
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
int  tong(int*a,int m,int n)
{   int tong=0;
	for(int j=0;j<n;j++)
		tong+=*(a+j);
	 return tong;
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
     int p=tong(a,m,n);
     printf("tong cac phan tu hang 0 la:  %d",p);
}
