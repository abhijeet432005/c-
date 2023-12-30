#include <stdio.h>

int palindrome(int num)
{
    int x, r, y, s = 0;
    x= num;
    y = x;
    while (x != 0)
    {
        r = x % 10;
        s = (s * 10) + r;
        x = x / 10;
    }

    return s == y;
}
int main()
{

    for (int i = 1; i <= 1000; i++)
    {
        if (palindrome(i))
        {
            printf("%d The number is palindrome\n", i);
        }
    }
}