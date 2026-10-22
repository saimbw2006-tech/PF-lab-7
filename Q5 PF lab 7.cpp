#include <stdio.h>

int main(void) {
    int arr[3][3][3];
    int layer1[3][3], layer2[3][3], layer3[3][3];

    for (int k = 0; k < 3; k++) {
        printf("Enter Layer %d elements:\n", k + 1);
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                scanf("%d", &arr[k][i][j]);
    }

    for (int k = 0; k < 3; k++) {
        printf("Layer %d:\n", k + 1);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%4d", arr[k][i][j]);

                if (k == 0) layer1[i][j] = arr[k][i][j];
                else if (k == 1) layer2[i][j] = arr[k][i][j];
                else layer3[i][j] = arr[k][i][j];
            }
            printf("\n");
        }
        printf("\n");
    }

    int flag1 = 1, flag2 = 1, flag3 = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (layer1[i][j] != layer2[i][j]){
            	flag1= 0;} 
            if (layer1[i][j] != layer3[i][j]){
            	flag2 = 0;}  
            if (layer2[i][j] != layer3[i][j]){
            	flag3 = 0;
			} 
        }
    }

 
    if (flag1 == 0) {
        printf("\nLayer 1 versus Layer 2 are not identical.\n");
    } else {
        printf("Layer 1 versus Layer 2 are identical.\n");
    }
 
    if (flag2 == 0) {
        printf("Layer 1 versus Layer 3 are not identical.\n");
    } else {
        printf("Layer 1 versus Layer 3 are identical.\n");
    }
    if (flag3 == 0) {
        printf("Layer 2 versus Layer 3 are not identical.\n");
    } else {
        printf("Layer 2 versus Layer 3 are identical.\n");
    }

    if (flag1 == 1 && flag2 == 1 && flag3 == 1) {
        printf("\nAll layers are identical.\n");
    } else if (flag1 == 0 && flag2 == 0 && flag3 == 0) {
        printf("\nAll 3 layers are distinct.\n");
    } else {
        printf("\nSome layers are identical and some are distinct.\n");
    }
 
    return 0;
}
 
