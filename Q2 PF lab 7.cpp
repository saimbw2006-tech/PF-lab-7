#include <stdio.h>

int main(){
	int row,col,zcount=0;
	int arr[5][5];
	int identity=1;
	printf("enter the row size (1-5)\n");
	scanf("%d", & row);
	printf("enter the column size (1-5)\n");
	scanf("%d", & col);
	if (row<1 || row>5 || col<1 ||col>5){
		printf("invalid array size entered");
		return 0;
	}
	for (int i=0; i<row; i++){
		for (int j=0; j<col; j++){
			printf("arr[%d][%d] = ",i ,j);
			scanf("%d",& arr[i][j]);
		}
	}
	if (row==col){
		printf("\nSquare Matrix\n");
		for (int i = 0; i < row; i++) {
             for (int j = 0; j < col; j++){
        	     printf("%d\t", arr[i][j]);
        	 }
                 printf("\n");         
	 }
     }
     if (row!=col){
		printf("\nRectangular Matrix\n");
		for (int i = 0; i < row; i++) {
             for (int j = 0; j < col; j++){
        	     printf("%d\t", arr[i][j]);
        	 }
                 printf("\n");         
	 }
     }
     int elements=row*col;
	 for (int i=0; i<row; i++){
	 	for(int j=0; j<col;j++){
	 		if (arr[i][j]==0){
	 			zcount=zcount+1;
			 }
		 }
	 }
	 if (zcount==elements){
	 	printf("\nZero Matrix as well as a Null Matrix\n");
	 }	
	 

   	if (row != col){
    identity = 0;}
     else{
         for (int i = 0; i < row; i++){
             for (int j = 0; j < col; j++){
                 if (i == j && arr[i][j] != 1){
                     identity = 0;}
                 if (i != j && arr[i][j] != 0){
                     identity = 0;}
                 }
             }
         }

     if (identity == 1){
         printf("\nIdentity matrix\n");}	
	 
	 int diagonal=1;
	 if (row!=col){
	 	diagonal=0;}
	 else{
	 	for(int i=0;i<row;i++){
	 		for(int j=0;j<col;j++){
	 			if(i!=j && arr[i][j]!=0){
	 				diagonal=0;}
			 }
		 }
	 }
	 if (diagonal==1){
	 	printf("\nDiagonal matrix\n");}	
	
	 int scalar,k;
	 scalar=1;
	 k=arr[0][0];
	 if (row!=col){
	 	scalar=0;}
	 else{
	 	for(int i=0;i<row;i++){
	 		for(int j=0;j<col;j++){
	 			if(i==j && arr[i][j]!=k){
	 				scalar=0;}
	 			if (i!=j && arr[i][j]!=0){
	 				scalar=0;
				 }
			 }
		 }
	 }
	 if (scalar==1){
	 	printf("\nScalar matrix\n");}
	 
	 int upper=1;
	 if (row != col){
    upper = 0;}
	 for(int i=0;i<row;i++){
	 	for(int j=0;j<col;j++){
	 		if (i>j && arr[i][j]!=0){
	 			upper=0;
			 }
         }
     }
     if (upper==1){
	 	printf("\nUpper Traiangle Matrix\n");}
	 	
	int lower=1;
	if (row != col){
    upper = 0;}
	 for(int i=0;i<row;i++){
	 	for(int j=0;j<col;j++){
	 		if (j>i && arr[i][j]!=0){
	 			lower=0;}
         }
     }
     if (lower==1){
	 	printf("\nLower Traiangle Matrix\n");}
	 	
	int symmetric=1;
	int t[row][col];
	if (row!=col){
		 symmetric=0;}
	else{
		for (int i = 0; i < row; i++){
             for (int j = 0; j < col; j++){
            t[j][i] = arr[i][j];
             }
         }
         for (int i = 0; i < row; i++){
             for (int j = 0; j < col; j++){
                 if (t[i][j] !=arr[i][j]){
            	     symmetric=0;}
             }
         }
	}
	  
	if (symmetric==1){
	 	printf("\nSymmetric Matrix\n");}
	 	
	int skew=1;
	int s[row][col];
	if (row!=col){
		 skew=0;}
	else{
		for (int i = 0; i < row; i++){
             for (int j = 0; j < col; j++){
                 s[j][i] = arr[i][j];
             }
         }
         for (int i = 0; i < row; i++){
             for (int j = 0; j < col; j++){
                 if (s[i][j] != -1 * arr[i][j]){
            	     skew=0;}
                 }
             }
         }
    if (skew==1){
	 	printf("\nSkew Symmetric Matrix\n");}
	 
	if (row==1){
		printf("\nRow Matrix\n");}
	if (col==1){
		printf("\nColumn Matrix\n");}
	
	int n;
	int equal=1;
	printf("\ndo you want to check for a equal matrix:\n1.Yes enter a new matrix\n2.No thanks");
	scanf("%d",&n);
	switch (n){
		case 1:
			int row2,col2;
			int arr2[5][5];
			printf("\nenter the row size (1-5)\n");
	        scanf("%d", & row2);
	        printf("\nenter the column size (1-5)\n");
	        scanf("%d", & col2);
	        if (row2<1 || row2>5 || col2<1 ||col2>5|| row!=row2||col!=col2){
		        printf("\ninvalid array size entered or cannot be compared\n");
		        break ;}
		    else{
	        for (int i=0; i<row2; i++){
		        for (int j=0; j<col2; j++){
			        printf("arr[%d][%d] = ",i ,j);
			        scanf("%d",& arr2[i][j]);
		        }
	    }
	        if (row==row2 && col==col2){
	        	for (int i=0; i<row2; i++){
		            for (int j=0; j<col2; j++){
		            	if (arr[i][j]!=arr2[i][j]){
		            		equal=0;
						}
			}
	}
}
}
        if (equal=1){
            printf("\nEqual Matrix\n");}
		break;
			
		case 2:
			if (n==2){
				break;
			}
		}
		
		
		
	int nilpotent=1;
	if (row != col){
	    nilpotent=0;}
    else{
        int prod[5][5];
        int temp[5][5];                                     

        for (int i = 0; i < row; i++){                      
            for (int j = 0; j < col; j++){
                prod[i][j] = arr[i][j];
            }
        }

        for (int p = 1; p < row; p++){                      
            for (int i = 0; i < row; i++){
                for (int j = 0; j < col; j++){
                    temp[i][j] = 0;                         
                    for (int k = 0; k < col; k++){
                        temp[i][j] = temp[i][j] + prod[i][k] * arr[k][j];  
                }
            }
        }
        for (int i = 0; i < row; i++){                    
            for (int j = 0; j < col; j++){
                prod[i][j] = temp[i][j];
            }
        }
        }                                                   

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(prod[i][j]!=0){
            	nilpotent=0;}
        }
    }
    printf("\nArray multiplied with itself %d times (power %d):\n", row - 1, row);   // CHANGED: message now shows the power
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }
}
    if (nilpotent==1){
    	printf("\nNilpotent Matrix\n");}
    else{
    	printf("\nNot a Nilpotent Matrix");
	}
	
	/*idemptotent*/
		int idemptotent=1;
	if (row != col){
	    idemptotent=0;}
    else{
        int a[5][5];
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                a[i][j] = 0;
                for (int k = 0; k < col; k++){
                    a[i][j] = a[i][j] + arr[i][k] * arr[k][j];
            }
        }
    }

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(a[i][j]!=arr[i][j]){
            	idemptotent=0;}
        }
    }

}
    if (idemptotent==1){
    	printf("\nidemptotent Matrix\n");}
    else{
    	printf("\nNot a idemptotent Matrix");
	}
	
    if (row != col){
	printf("\nDeterminant not possible (not a square matrix)\n");}
    else{
	int d[5][5], prev = 1, det, sign = 1;
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			d[i][j] = arr[i][j];}}
	for (int c = 0; c < row; c++){
		for (int i = c + 1; i < row; i++){
			if (d[c][c] == 0 && d[i][c] != 0){
				for (int j = 0; j < col; j++){
					int tmp = d[c][j];
					d[c][j] = d[i][j];
					d[i][j] = tmp;}
				sign = -sign;}}
		if (d[c][c] == 0){
			sign = 0;
			break;}
		for (int i = c + 1; i < row; i++){
			for (int j = c + 1; j < col; j++){
				d[i][j] = (d[i][j] * d[c][c] - d[i][c] * d[c][j]) / prev;}}
		prev = d[c][c];}
	det = sign * d[row - 1][row - 1];
	printf("\nDeterminant = %d\n", det);
	if (det == 0){
		printf("\nSingular Matrix\n");}
	else{
		printf("\nNon-Singular Matrix\n");}}

	 
	return 0;
}
