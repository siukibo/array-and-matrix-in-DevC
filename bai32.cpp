// nhap vao tu ban phim mang so nguyen gom n phan tu xoa phan tu am
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
void xoa(int *a,int n)
{for(int i=0;i<n;i++)
    if(*(a+i)<0)
    {for(int j=i;j<n-1;j++)
    *(a+j)=*(a+j+1);
    n--;}
 for(int i=0;i<n;i++)
 printf("%5d",*(a+i));	
}
int main()
{   int n;
   printf("nhap so phan tu co trong mang:");
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   nhapmang(a,n);
   xuatmang(a,n);
   printf(" mang sau khi nhap la:");
   xoa(a,n);
}
