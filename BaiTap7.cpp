#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int n,m;
   scanf("%d",&n);
   scanf("%d",&m);
  int arr[n][m];
 
  for (int i=0;i<n;i++)
  {
  for(int j=0;j<m;j++)
  {  printf("arr[%d][%d]: ", i, j);
  	scanf("%d",&arr[i][j]);}}
  	 for (int i=0;i<=n;i++)
  {
  for(int j=0;j<m;j++)
  {
  	
  for (int k = 0; k < m - j - 1; k++) {
            if (arr[i][k] > arr[i][k + 1]) {
            int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
        arr[i][k + 1] = temp;
                            }
                        }
                    }
                }
                printf("\nMang sau khi sap xep theo dong tang dan:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
    return 0;
}
