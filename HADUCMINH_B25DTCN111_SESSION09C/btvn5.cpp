#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao so luong mang");
	scanf("%d",&n);
	int arr[n];
	int dem_chan=0;
	int dem_le=0;
	for(int i=0;i<n;i++){
		printf("gia tri trong mang la [%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("Danh sach so chan ");
		for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			printf("%d",arr[i]);
			dem_chan++;
		}
		}
	printf("Danh sach so le ");
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			printf("%d",arr[i]);
			dem_le++;
		}
	}
	printf("tONG CHU SO LE %d\n",dem_le);
	printf("tong chu so chan%d\n",dem_chan);
	return 0;
}

