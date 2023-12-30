#include <stdio.h>
int main()
{
    char ch;

    do
    {

        int x, p, y, s = 0;
        printf("Enter the numebr : ");
        scanf("%d", &x);
        y = x;
        while (x != 0)
        {
            p = x % 10;
            s = s + p;
            x = x / 10;
        }

        printf("The sum is %d\n", s);

        printf("Want to runagain the program : (y/n) ");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');
}