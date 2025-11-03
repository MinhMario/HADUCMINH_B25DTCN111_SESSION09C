#include<stdio.h>

int main(){
	int timthay=0;
	int key;
	int vi_tri=-1;
	printf("Nhap so quan trong");
	scanf("%d",&key);
	int n;
	printf("Nhap vao so luong mang");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("gia tri trong mang la [%d]",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]==key){
		vi_tri=i;
		timthay=1;
			break;
		}
	}
	if(timthay==1){
	printf("So co ton tai trong khoang \n");
	printf("Vi tri cua %d trong mang la %d",key,vi_tri);
}else{
	printf("So khong ton tai trong khoang");
}
return 0;
}

