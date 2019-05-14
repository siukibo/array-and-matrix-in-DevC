//nhap ma tran A mxn tim so lon nhat tren hang 2
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
{   int max=0;
		for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	      if(i==1&&*(a+n*i+j)>max)
		      max=*(a+n*i+j);
	 return max;
}
int main()
{   int m,n;
   printf("nhap so hang :");
   scanf("%d",&m);
   printf("nhap so cot: ");
   scanf("%d",&n);
   if(m<2)
   printf("khong co du lieu");
   else
   {int *a=(int*)malloc(m*n*sizeof(int));
   nhap(a,m,n);
   xuat(a,m,n);
     int max=tong(a,m,n);
     printf("so lon nhat hang 2:  %d",max);
}}
