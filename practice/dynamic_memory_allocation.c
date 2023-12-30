// types: 
// 1. malloc()
// 2.calloc()
// 3.realloc()
// 4.free()

#include<stdio.h>
#include<stdlib.h>
int main(){

    // 1. malloc --> “malloc” or “memory allocation”
    // ptr = (cast-type*) malloc(byte-size)

    int *x;
    x =(int *)malloc(sizeof(int));
    *x = 55;
    printf("%d\n", *x);
    
    // 2. calloc (“calloc” or “contiguous allocation”) --> with the help this we can make array
    // ptr = (cast-type*)calloc(n, element-size)

    int *y;
    y = (int *)calloc(5, sizeof(int));

    for(int i = 0; i<5;i++){
        y[i] = i+1;        
    }

    for (int i = 0; i <5; i++)
    {
        printf("%d ", y[i]);
    }
        printf("\n");


    // 3. realloc() --> “realloc” or “re-allocation” --> method in C is used to dynamically change the memory allocation of a previously allocated memory.
    // ptr = realloc(ptr, newSize); 

    int *z;
    z = (int *)calloc(5, sizeof(int));

    for(int i = 0; i<5;i++){
        y[i] = i+1;        
    }

        printf("calloc -->\n");
    for (int i = 0; i <5; i++)
    {
        printf("%d ", y[i]);
    }
        printf("\n");

    z = (int *)realloc(z, 10 * sizeof(int));

    for(int i = 0; i<10;i++){
        y[i] = i+1;        
    }

        printf("realloc -->\n");
    for (int i = 0; i <10; i++)
    {
        printf("%d ", y[i]);
    }   
        printf("\n");


    
}