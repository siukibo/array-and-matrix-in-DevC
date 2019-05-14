// nhap vao tu ban phim mang so nguyen gom n phan tu hien thi vi tri cua cac phan tu chia het cho 3
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
void chia3(int *a,int n)
{ 
	for(int i=0;i<n;i++)
	if(*(a+i)%3==0)
	printf("a[%d]",(i));
}
int main()
{   int n;
   printf("nhap so phan tu co trong mang:");
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   nhapmang(a,n);
   xuatmang(a,n);
     printf("vi tri cac phan tu chia het cho 3 la:");
   chia3(a,n);
}
