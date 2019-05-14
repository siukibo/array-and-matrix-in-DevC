// nhap vao tu ban phim mang so nguyen gom n kiem tra so x nhap vao co trong mang khong
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
{   int x;
    printf("\nnhap x:");
    scanf("%d",&x);
    int dem=0;
    for(int i=0;i<n;i++)
    if(*(a+i)==x)
    dem++;
    if(dem>0)
    printf("so %d co trong mang",x);
    else
    printf("so %d khong co trong mang",x);
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
