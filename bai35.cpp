// nhap vao tu ban phim mang so nguyen gom n tim gia tri lon hat trong mang
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
int gtln(int *a,int n)
{    int max=*a;
	for(int i=0;i<n;i++)
	if(*(a+i)>max)
	max=*(a+i);
	return max;
}
int main()
{   int n;
   printf("nhap so phan tu co trong mang:");
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   nhapmang(a,n);
   xuatmang(a,n);
   int p= gtln(a,n);
   printf("\ngia tri lon nhat cua mang la %d",p);
}
