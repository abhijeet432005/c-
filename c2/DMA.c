#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    ptr[0] = 20;
    ptr[1] = 10; 
    ptr[2] = 30; 
    ptr[3] = 40;
    ptr[4] = 50;

    for(int i = 0; i<5; i++){
        printf("%d ", ptr[i]);
    }
}