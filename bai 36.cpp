// nhap vao tu ban phim mang so nguyen gom n tim vi tri phan tu nho nhat trong mang
#include<stdio.h>
#include<stdlib.h>
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
void min(int *a,int n)
{  int min=*a;
   for(int i=0;i<n;i++)
   if(*(a+i)<min)
   min=*(a+i);
   for(int i=0;i<n;i++)
   if(*(a+i)==min)
   printf("\nvi tri phan tu nho nhat la: a[%d]",i);
}
int main()
{   int n;
   printf("nhap so phan tu co trong mang:");
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   nhapmang(a,n);
   xuatmang(a,n);
   min(a,n);
   
}
