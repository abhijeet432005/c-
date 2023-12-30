#include<stdio.h>
#include<conio.h> this header file is function getch

int swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp; 
    printf("value of a %d\n", a);
    printf("value of b %d\n", b); 
}

int ptr(int *y , int *z){
    
    int temp = *y;
    *y = *z;
    *z = temp;
    printf("value after swaping a = %d b = %d\n", *y, *z);
}

// in function :
// -call by value ---- when a value directly recived
// -call by refernce ---- when a address recived

int main(){
    int a , b;
    a = 65;
    b = 4;
    printf("value before swaping a = %d b = %d\n", a,b );
    ptr(&a,&b);

    getch();
}