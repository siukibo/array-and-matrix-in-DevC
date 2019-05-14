//nhap ma tran A mxn Bmxn tinh tong C=A+B
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
void tong(int*a,int*b,int m,int n)
{  int*c;
   for(int i=0;i<m;i++)
   {
   for(int j=0;j<n;j++)
     {
	 *(c+n*i+j)=*(a+n*i+j)+*(b+n*i+j);
      printf("%5d",	 *(c+n*i+j));
     }
     printf("\n");
}}
int main()
{   int m,n;
   printf("nhap so hang :");
   scanf("%d",&m);
   printf("nhap so cot: ");
   scanf("%d",&n);
   int *a=(int*)malloc(m*n*sizeof(int));
   int *b=(int*)malloc(m*n*sizeof(int));
   printf("nhap ma tran A:\n");
   nhap(a,m,n); 
   xuat(a,m,n);
   printf("nhap ma tran B:\n");
   nhap(b,m,n);
   xuat(b,m,n);
   printf("tong 2 ma tran la:\n");
   tong(a,b,m,n);
   

}
