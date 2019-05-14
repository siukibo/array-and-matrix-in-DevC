//nhap ma tran A nxn hien thi duong cheo phu
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
void  cheop(int*a,int n)
{   int tong=0;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	if(i+j==(n-1))
	   printf("%5d",*(a+n*i+j));
}
int main()
{   int n;
   printf("nhap n: ");
   scanf("%d",&n);
   int *a=(int*)malloc(n*n*sizeof(int));
   nhap(a,n);
   xuat(a,n);
     printf("phan tu thuoc duong cheo phu la:\n");
     cheop(a,n);
}
