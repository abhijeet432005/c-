#include <stdio.h>
int main(){
    int a[5] = {10,20,30,40,50};
    int max = a[0];
    for (int i = 0; i <=4; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        
    }
    printf("%d\n", max);

                                                                    //Minimum Element
    int b[5] = {10,20,30,40,50};
    int min = b[0];
    for (int i = 0; i <=4; i++)
    {
        if (max > b[i])
        {            
            max = b[i];
        }
        
    }
    printf("%d", max);
}