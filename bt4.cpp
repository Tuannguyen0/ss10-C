#include<stdio.h>

int main (){
	int arr[] = {27, 19, 3, 6, 31};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if(arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
	
		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	}
	
	printf("ket qua la: \n");
	for (int i = 0; i< n; i++) {
		printf("%d", arr [i]);
		
	}
	printf("\n");
	return 0; 
}
