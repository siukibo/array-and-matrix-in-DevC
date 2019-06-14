#include<stdio.h>
#include<stdlib.h>
struct date {  
  int ngay;  
  int thang;  
  int nam; 
};
struct nv{
	char hoten[30];
	char quequan[30];
	int luong;
	struct date ngaysinh;
	};
void nhap(struct nv a[100],int n)
{
	for(int i=0;i<n;i++)
	{
	printf("nhap ten:");
	fflush(stdin);
    gets(a[i].hoten);
    printf("que quan:");
     gets(a[i].quequan);
     printf("luong: ");
    fflush(stdin);
    scanf("%d",&a[i].luong);
    printf("ngaysinh:");
    scanf("%d%d%d",&a[i].ngaysinh.ngay,&a[i].ngaysinh.thang,&a[i].ngaysinh.nam);
}
}
void xuat(nv a[100],int n)
{  
		for(int i=0;i<n;i++)
{
	printf("%7s%7s%7d%7d/%d/%d\n",a[i].hoten,a[i].quequan,a[i].luong,a[i].ngaysinh.ngay,a[i].ngaysinh.thang,a[i].ngaysinh.nam);
}
}
void loc(nv a[100],int n )
{
	for(int i=0;i<n;i++)
    {
    	if(a[i].luong<300000&&a[i].quequan=="hanoi")
    	{
    		printf("%7s%7s%7d%7d/%d/%d",a[i].hoten,a[i].quequan,a[i].luong,a[i].ngaysinh.ngay,a[i].ngaysinh.thang,a[i].ngaysinh.nam);
		}
	}
}
int main()
{
	nv a[100];int n;
	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	loc(a,n);
}
