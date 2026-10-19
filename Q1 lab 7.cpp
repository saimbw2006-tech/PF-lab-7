#include <stdio.h>
int main(){
    int a[3][3],t[3][3],cof[3][3],adj[3][3];
	float inv[3][3];
    int n,k=0,determinent;
    int m[4];         
    int det, sign, minor;
    printf("Enter the elements\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n Enter your preferred operation\n 1.Transpose\n 2.Cofactor\n 3.Determinent\n 4.Adjoint\n 5.Inverse\n\n");
    scanf("%d",& n);
    
    switch(n){
    	case 1:
    		for (int i = 0; i < 3; i++){
                 for (int j = 0; j < 3; j++){
                     t[j][i] = a[i][j];
                 }
             }
             printf("\nTranspose matrix:\n");
             for (int i = 0; i < 3; i++){
             	for (int j = 0; j < 3; j++){
                     printf("%d\t", t[i][j]);}
                 printf("\n");}
			break;
		case 2:
			for (int i = 0; i < 3; i++){
                 for (int j = 0; j < 3; j++){
                     k = 0;
                     for (int r = 0; r < 3; r++){
                         for (int c = 0; c < 3; c++){
                             if (r != i && c != j){
                             m[k] = a[r][c];
                             k++;}
                         }
                     }
                     det = m[0] * m[3] - m[1] * m[2];
                     if ((i + j) % 2 == 0){
                     	sign=1;}
                     else{
                     	sign=-1;}	
                     cof[i][j] = sign * det;
                 }
             }
             printf("\nCofactor matrix:\n");
             for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                     printf("%d\t", cof[i][j]);
                 }
                 printf("\n");
             }
         case 3:
         	det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])- a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])+ a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
             printf("\nDeterminant = %d\n", det);
             
         case 4:
         	for (int i = 0; i < 3; i++){
                 for (int j = 0; j < 3; j++){
                     k = 0;
                     for (int r = 0; r < 3; r++){
                         for (int c = 0; c < 3; c++){
                             if (r != i && c != j){
                             m[k] = a[r][c];
                             k++;}
                         }
                     }
                     det = m[0] * m[3] - m[1] * m[2];
                     if ((i + j) % 2 == 0){
                     	sign=1;}
                     else{
                     	sign=-1;}	
                     cof[i][j] = sign * det;
                 }
             }
         	for (int i = 0; i < 3; i++){
                 for (int j = 0; j < 3; j++){
                     adj[j][i] = cof[i][j];
                 }
             }
		     printf("\nAdjoint matrix:\n");
             for (int i = 0; i < 3; i++){
             	for (int j = 0; j < 3; j++){
                     printf("%d\t", adj[i][j]);}
                 printf("\n");}
			break;
		case 5:
             for (int i = 0; i < 3; i++){
                 for (int j = 0; j < 3; j++){
                     k = 0;
                     for (int r = 0; r < 3; r++){
                         for (int c = 0; c < 3; c++){
                             if (r != i && c != j){
                             m[k] = a[r][c];
                             k++;}
                         }
                     }
                     det = m[0] * m[3] - m[1] * m[2];
                     if ((i + j) % 2 == 0){
                     	sign=1;}
                     else{
                     	sign=-1;}	
                     cof[i][j] = sign * det;
                 }
             }
         	for (int i = 0; i < 3; i++){
                 for (int j = 0; j < 3; j++){
                     adj[j][i] = cof[i][j];
                 }
             }
            det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])- a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])+ a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
            for (int i = 0; i l< 3; i++){
                 for (int j = 0; j < 3; j++){
                 	inv[i][j] = (float)adj[i][j] / det;      
                 }
             }
             for (int i = 0; i < 3; i++){
             	for (int j = 0; j < 3; j++){
                     printf("%.2f\t", inv[i][j]);}             
                 printf("\n");}
			break;
             			
}
    return 0;
    
}
