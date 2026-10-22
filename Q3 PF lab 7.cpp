#include <stdio.h>

int main(){
	int row1,col1,row2,col2;
	int flag = 0;  
	printf("enter the row size");
	scanf("%d", & row1);
	printf("enter the column size");
	scanf("%d", & col1);
    printf("enter the row size for 2nd array");
	scanf("%d", & row2);
	printf("enter the column size for 2nd array");
	scanf("%d", & col2); 
	if (row1>3 || row2>3 || col1>3 || col2>3 || col1 <1|| col2<1 || row1<1 || row2<1){
		printf("Invalid array size entered");
		return 0;
	}
	int arr1[row1][col1];
	int arr2[row2][col2];
	int C[3][3];
	if (col1!=row2){
		printf("array cannot be multiplied");
		flag=1;}
	else {
		printf("Enter the elements\n");
		for (int i = 0; i < row1; i++){
             for (int j = 0; j < col1; j++){
                 scanf("%d", &arr1[i][j]);}
         }
        printf("Enter the elements\n");
	     for (int i = 0; i < row2; i++){
             for (int j = 0; j < col2; j++){
                 scanf("%d", &arr2[i][j]);}
		 }
	}
	if (flag==0){
		for (int i = 0; i < row1; i++) {
             for (int j = 0; j < col2; j++) {
                 C[i][j] = 0;
                 for (int k = 0; k < col1; k++)
                 C[i][j] += arr1[i][k] * arr2[k][j];
        }
    }
 
    printf("\nThe result of array multiplication is:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }
 
	}
	return 0;
	}
	
