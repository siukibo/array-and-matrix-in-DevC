// nhap vao tu ban phim mang so nguyen gom n dem va hien thi so nguyen to
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
void nto(int *a,int n)
{   int dem=0;
   printf("\nday cac so nguyen to:\n");
	for(int i=0;i<n;i++)
	{ int uoc=0;
	  for(int j=2;j<*(a+i);j++)
	  {if(*(a+i)%j==0)
	    uoc++;
	  }
	  if(uoc==0)
	    {
	  dem++;
	printf("%5d",*(a+i));
	    }
      
	}
	printf("\nmang co %d so nguyen to",dem);
}
int main()
{   int n;
   printf("nhap so phan tu co trong mang:");
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   nhapmang(a,n);
   xuatmang(a,n);
   nto(a,n);
}
