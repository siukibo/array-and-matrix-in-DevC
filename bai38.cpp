// nhap vao tu ban phim mang so nguyen gom n dem va hien thi so chinh phuong
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
void sqrt(int*a,int n)
{    int dem=0;
printf("\n cac so chinh phuong co trong mang:");
	for(int i=0;i<n;i++)
	{ int b= (int)sqrt(*(a+i));
	  if(b*b==*(a+i))
	  {
	  	printf("%5d",*(a+i));
	  	dem++;
	  }
	}
	printf("\nco %d so chinh phuong trong mang",dem);
}
int main()
{   int n;
   printf("nhap so phan tu co trong mang:");
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   nhapmang(a,n);
   xuatmang(a,n);
   sqrt(a,n);
}
