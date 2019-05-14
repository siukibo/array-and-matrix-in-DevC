// nhap vao tu ban phim mang so nguyen gom n sap xep mang theo chieu tang dan
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
void sapxep(int *a,int n)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<i;j++)
	if(*(a+i)<*(a+j))
	{ 
	   int temp=*(a+i);
	     *(a+i)=*(a+j);
		 *(a+j)=temp;	
	}
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
   printf("sap xep lai mang:");
   sapxep(a,n);
}
