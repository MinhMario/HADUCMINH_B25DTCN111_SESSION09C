#include<stdio.h>

int main(){
	int n,b;
	int count=0;
	printf("Nhap vao so b");
	scanf("%d",&b);
	printf("Nhap vao so phan tu trong mang:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu mang[%d]",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]=b){
			count++;
		}
	}
	printf("So %d xuat hien nhieu nhat trong mang",b);
	return 0;
}

