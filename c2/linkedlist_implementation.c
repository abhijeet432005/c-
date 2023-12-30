#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node* next;
 
};

void linkedlistTraversal(struct node* ptr){
    while(ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
}

int main (){
    struct node *head, *second, *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // link first and second node 
    head -> data = 10;
    head -> next = second; 

    // Link second and third node 
    second -> data = 45;
    second -> next = third;

    // Terminate the list at the third node
    third -> data = 75;
    third -> next = NULL;

    
    linkedlistTraversal(head);
    return 0;
}