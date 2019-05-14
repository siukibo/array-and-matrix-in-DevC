// nhap vao tu ban phim mang so nguyen gom n phan tu. hien thi mang va mang dao.
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
	{
	
	printf("%5d",*(a+i));
}
}
void mangdao(int*a,int n)
{
	printf("\nmang dao cua mang vua nhap la:\n");
	for(int i=n-1;i>=0;i--)
	printf("%5d",*(a+i));
}
int main()
{   int n;
   printf("nhap so phan tu co trong mang:");
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   nhapmang(a,n);
   xuatmang(a,n);
   mangdao(a,n);
}
