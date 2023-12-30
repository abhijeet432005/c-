#include <stdio.h>



// concept ---> small no. % big number = small no.
// ex: 2 % 10 = 2
// ex: 5 % 10 = 5 

int armstrong(int num) {
    int x, s = 0, p, z;
    x = num;
    z = x;
    while (x != 0) {
        p = x % 10;
        s = s + (p * p * p);
        x = x / 10;
    }
    return s == z;
}

int main() {
    for(int i = 1 ; i <= 1000; i++){
        if (armstrong(i)) {
            printf("%d The number is armstrong.\n", i);
        }  
        // else {
        //     printf("%d The number is not armstrong.\n", i);
        // }
    }

    

    return 0;
}
