#include <stdio.h>
int main(){
        char runAgain;
        
    do
    {
        int x, z, a, b, c, d;
        printf("Enter the number : ");
        printf("\n");
        scanf("%d", &x);
        a = x % 10;
        z = x / 10;
        b = z % 10;
        c = z / 10;

        d = (a * a * a) + (b * b * b) + (c * c * c);
        if (d == x)
        {
            printf("The number is armstrong \n\n");
        }
        else{
            printf("The number is not armstrong \n\n");
        }

       printf("Do you want to run the program again? (y/n): ");
        scanf(" %c", &runAgain);
    }
    while (runAgain == 'y' || runAgain == 'Y');

    return 0;
}

