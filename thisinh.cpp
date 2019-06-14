#include<stdio.h>
typedef struct ts{
	char mts[9];
	char hoten[30];
	int diemtoan,diemly,diemanh;
};
void nhap(ts a[],int n)
{
	for(int i=0;i<n;i++)
	{  printf("nhap ma thi sinh:");fflush(stdin);
	   gets(a[i].mts);
	   printf("nhap ten thi sinh:");
	   gets(a[i].hoten);
	   printf("nhap diem toan:");fflush(stdin);
	   scanf("%d",&a[i].diemtoan);
	   printf("nhap diem ly:");
	   scanf("%d",&a[i].diemly);
	   printf("nhap diem anh:");
	   scanf("%d",&a[i].diemanh);	
	}
}
void xuat(ts a[],int n)
{   printf("%10s%30s%10s%10s%10s%10s\n","mts","hoten","diemtoan","diemly","diemanh","tongdiem");
	for(int i=0;i<n;i++)
	{
		printf("%10s%30s%10d%10d%10d%10d\n",a[i].mts,a[i].hoten,a[i].diemtoan,a[i].diemly,a[i].diemanh,a[i].diemtoan+a[i].diemly+a[i].diemanh);
	}
}
void ghitep( ts a[],int n)
{
	FILE *file;
	file=fopen("C:\\Users\\nguye\\Desktop\\tro choi truc tuyen\\ghi tep\\New Text Document.txt","w");
	if(file!= NULL)
	{   for(int i=0;i<n;i++)
	     if(a[i].diemtoan+a[i].diemly+a[i].diemanh>=24)
		fprintf(file,"%d",a[i].diemtoan+a[i].diemly+a[i].diemanh);
	}
	else 
	printf("file not open");
}
int main()
{
	ts a[100];int n;
	printf("nhap so luong thi sinh:");
	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	ghitep(a,n);
}
