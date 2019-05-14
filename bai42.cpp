// nhap vao tu ban phim mang so nguyen gom n kiem tra mang tang dan khong
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void nhapmang(int *a,int n)
{
	printf("nhap cac phan tu cua mang:\n");
	for(int i=0;i<n;i++)
	{ printf("a[%d]=",i);
	  scanf("%5d",(a+i));
	}
}
void xuatmang(int*a,int n)
{   printf("mang da nhap la:\n");
    
	for(int i=0;i<n;i++)
	printf("%5d",*(a+i));	
}
void ktra(int*a,int n)
{
	bool kt=true;
    for(int i=0;i<n;i++)
    if(*(a+i)>*(a+i+1))
    {
	kt=false;
	break;}
	if(kt==true)
	printf("\nmang tang dan");
	else
	printf("\nmang khong tang dan");
}
int main()
{   int n;
   printf("nhap so phan tu co trong mang:");
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   nhapmang(a,n);
   xuatmang(a,n);
   ktra(a,n);
}
