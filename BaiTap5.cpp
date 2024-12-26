#include<stdio.h>
using namespace std;
int main(){
	int arr[]={3,5,2,7,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int found=0,m;
	printf("Moi ban nhap so:");
	scanf("%d",&m);
	for (int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
}
}printf("Mang sau khi sap xep: ");
for(int i=0;i<n;i++){	
	printf("%d",arr[i]);
}
for(int i=1;i<n;i++){	
	if(arr[i]==m){
		found=1;
		printf("\nVi tri cua so %d trong mang la :%d ",m,i);
	}
}
if(found==0){
		printf("\n so ko co trong mang");
	}
	return 0;
}
