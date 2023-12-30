#include<stdio.h>
#include<conio.h>
int main(){
    int x, s = 1;
    printf("Enetr the number : ");
    scanf("%d", &x);
    for(int i = 1 ; i<=x; i++){
        s= s*i;
    }
    
    printf("%d", s);
}