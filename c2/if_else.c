#include<stdio.h>

int main(){
    int l,b;
    printf("Enter the length :");
    scanf("%d", &l);
    printf("Enter the breadth : ");
    scanf("%d", &b);
    int A = l*b;
    int P = 2*(l+b);

    if (A>P)
    {
        printf("Area is greater ");
    }
    else if (A==P)
    {
        printf("Both are equal");
    }

    else if(A<P){
        printf("Area is smaller ");
    }
    
    


    

    

}