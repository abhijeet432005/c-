#include<stdio.h>

struct book{
    char name[40];

    int price;

};
int main(){
    
    struct book b1;
    printf("Enter the name of book\nprice of book : \n");
    scanf("%s %d", b1.name, &b1.price);
    printf("%s %d", b1.name, b1.price);
}