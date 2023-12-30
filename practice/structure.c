#include<stdio.h>
struct student
{
    int roll_number;
    float per;
    int mark;
    char name[10];
};

int main(){
    struct student s1;
    printf("Enter rollnumber, percenrage, marks, yout name : \n");
    scanf("%d %f %d %s", &s1.roll_number, &s1.per, &s1.mark, s1.name);

    printf("%d %.2f %d %s", s1.roll_number, s1.per, s1.mark, s1.name);

}
