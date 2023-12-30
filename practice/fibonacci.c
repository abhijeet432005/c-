#include<stdio.h>
#include<conio.h>
int main(){
    int x = -1 , y = 1, z,r;
    printf("Enter the range : ");
    scanf("%d", &r);
    for(int i = 0; i<r; i++){
        z = x+y;
        printf("%d ", z);
        x = y;
        y = z;
        
    }


    getch();
}