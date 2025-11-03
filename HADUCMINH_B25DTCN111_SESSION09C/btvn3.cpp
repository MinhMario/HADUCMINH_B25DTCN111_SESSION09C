#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao so luong mang");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("gia tri trong mang la [%d]",i);
		scanf("%d",&arr[i]);
	}
		for(int i=0;i<n;i++){
			printf("%d",arr[i]);
		}
	
	return 0;
}
