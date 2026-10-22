#include <stdio.h>

int main() {
    int arr[3][3][3];
    int total,max=-100,min=10000;
    float avg;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("Enter element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d\t", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++) {
    	int layertotal=0;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
            	layertotal=layertotal+arr[i][j][k];
            	if (arr[i][j][k]>=max){
            		max=arr[i][j][k];}
                if (arr[j][j][k]<=min){
                	min=arr[i][j][k];}
                total=total+arr[i][j][k];
            }
        }
        printf("\nthe layerwise total for layer %d is %d\n",i+1,layertotal);
    }
    avg=total/27;
    printf("\nthe greatest element in array is %d\n",max);
    printf("the smallest element in array is %d\n",min);
    printf("the total of array is %d\n",total);
    printf("the average of the array is %.2f\n",avg);
    return 0;
}


