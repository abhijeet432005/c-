#include<stdio.h>
int main(){

    char runAgain;
    
    do
    {
            int x, s = 0 , p , z;
            z = x;
            printf("Enetr the number : ");
            printf("\n");
            scanf("%d", &x);
            while (x != 0)
            {
                p = x%10;
                s = s+(p*p*p);
                x = x/10;
            }
            if(s == z){
                printf("The number is armstrong \n");
            }
            else{
                printf("The number is armstrong \n");
            }

        printf("Want to runagain the program press : (y/n)");
        scanf(" %c", &runAgain);
    } 
    while (runAgain == 'y' ||  runAgain == 'Y');
    
    return 0;
    
}