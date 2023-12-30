#include<stdio.h>
int main(){
    // int arr[5];

                                                         // // Taking input in array

    // for(int i = 0; i<=4; i++){
    //     printf("Enter the element %d\n: ", i+1);
    //     scanf("%d", &arr[i]);
    // }

                                                // // printing array via loops 

    // for(int i = 0; i<=4; i++){
    //     printf("%d ", arr[i] );
    // }

    // printf("\n");

                                                        // // reversing of an array 

    // for(int i = 4; i>=0;i--){
    //     printf("%d ", arr[i]);
    // }

                                      // printing the array whose marks is less tha or equal to 35

    // int marks[10] = {90,95,25,37,78,31,45,78,66,89};
    // for (int i = 0; i < 10; i++)
    // {
    //     if (marks[i] <= 35)
    //     {
    //         printf("%d ", i);
    //     }
        
    // }
    

                                                    // printing address of an array

    int arr[5] = {10,20,30,40,50};
    for(int i = 0; i<5; i++){
        printf("%p\n", &arr[i]);
    }
}