#include<stdio.h>
#include<conio.h>
int main(){
    int x, y,s = 1;
    printf("Enter the number : ");
    scanf("%d", &x);
    printf("Enter the coffecient ");
    scanf("%d", &y);
    for(int i =1 ; i<=y; i++){
        s = s*x;   
    }

    printf("%d", s);
    




    getch();
}