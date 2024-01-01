// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of an array : ");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i <= n-1; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i <=n-1; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
// }

#include<stdio.h>
int main(){
    int *x,*y,a,b;
    a =5;
    b = 5;
    x = &a;
    y = &b;
    printf("%d ", sizeof(&x));
    printf("%d", &y);
}