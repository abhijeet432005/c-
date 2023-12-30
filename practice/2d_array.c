#include<stdio.h>
int main(){
    // int arr[3][4];                                         //arr [row][col]
    // printf("Enetr 12 number : ");
    // for(int i = 0 ; i < 3; i++){
    //     for(int j = 0 ; j< 4; j++){
    //         int x;
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // for(int i = 0 ; i < 3; i++){
    //     for(int j = 0 ; j< 4; j++){
    //         int x;
    //         printf("%d ", arr[i][j] );
    //     }
    // }



// addition of matrix


int x [3][3],y [3][3],z [3][3];
printf("Enter the number in 1 matrix : ");
for(int i = 0; i<3; i++){
    printf("\n");
    for(int j = 0 ; j< 3; j++){
        scanf("%d", &x[i][j]);
    }
}
printf("Enter the number in 2 matrix : ");
for(int i = 0; i<3; i++){
    printf("\n");
    for(int j = 0 ; j< 3; j++){
        scanf("%d", &y[i][j]);
    }
}

printf("addition of matrix : ");
for(int i = 0; i<3; i++){
    printf("\n");
    for(int j = 0 ; j< 3; j++){
        z[i][j] = x[i][j]+y[i][j];
    }
}

for(int i = 0; i<3; i++){
    printf("\n");
    for(int j = 0 ; j< 3; j++){
        printf("%d ", z[i][j]);
    }
}




}



