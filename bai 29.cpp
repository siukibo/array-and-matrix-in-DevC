// nhap vao tu ban phim mang so nguyen gom n phan tu. hien thi mang va tinh gia tri trung binh.
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
int tong (int *a,int n)
{
	int tong=0;
	for(int i=0;i<n;i++)
	 tong+=*(a+i);
	 return tong;
}

int main()
{   int n;
   printf("nhap so phan tu co trong mang:");
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   nhapmang(a,n);
   xuatmang(a,n);
   float p=tong(a,n);
   printf("trung binh cong cac phan tu la :%5f",p/n);
   
}
