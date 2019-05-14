//nhap vao tu ban phim mang so nguyen gom n phan tu them phan tu x vao vi tri thu k
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
void them(int *a,int n)
{     int k,x;
    printf("\nnhap gia tri can them:");
   scanf("%d",&x);
    printf("nhap vi tri can chen:");
    scanf("%d",&k);
   for(int i=n;i>k;i--)
   {   
      *(a+i)=*(a+i-1);
      
    }
     *(a+k)=x;
      n++;
	 
	for(int i=0;i<n;i++)
	 printf("%5d",*(a+i));  
}
int main()
{   int n;
   printf("\nnhap so phan tu co trong mang:");
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   nhapmang(a,n);
   xuatmang(a,n);
   them(a,n);
}
