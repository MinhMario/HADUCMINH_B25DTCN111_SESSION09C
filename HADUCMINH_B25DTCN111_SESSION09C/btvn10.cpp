#include<stdio.h>
#include<string.h>
#include<limits.h>
int main (){
	int n ;

	
	printf("Enter length of arr : ");
	scanf("%d",&n);
	int arr[n];


	for(int i = 0 ; i < n ; i++){
		printf("Enter arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}

	int maxLength = 0 ;

	
	int currentIndex = 0 ;


	int listMax[n]; 

	
	for(int i = 0 ; i < n ; i++){
	
		int tmp = 0 ;
		for(int j = i ; j < n ; j++){
			if(arr[i] == arr[j]){
				tmp++;
			}
		}

	
		if(tmp > maxLength){
			maxLength = tmp;
			listMax[n] = {};
			currentIndex = 0 ;
			listMax[currentIndex] = arr[i];
			currentIndex++;
		}else if (tmp == maxLength){ 
			listMax[currentIndex] = arr[i]; 
			currentIndex++;
		}
	}

	printf("Cac phan co cung tan suat xuat hien lon nhat : ");
	for(int i = 0 ; i < currentIndex ; i++){
		printf("%d ",listMax[i]);
	}
}
