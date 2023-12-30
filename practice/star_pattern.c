#include<stdio.h>
int main(){
    int p = 1;
    for(int i = 1; i<=4; i++){
        for (int j = 1; j<=4  ; j++)
        {
            if(j<=i){
                printf("%d ",p);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        p++;
        
    }
 
}