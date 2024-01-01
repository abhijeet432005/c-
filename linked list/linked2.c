// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void traverse(struct node *p){
    while(p != NULL){
        printf("%d --> ", p -> data);
        p = p -> next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head, *newnode, *temp;
    
    head = NULL;
    
    char ch;
    do{
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d", newnode -> data);
        newnode -> next = NULL;
        
        if(head == NULL){
            head = temp = newnode;
        }
        else{
            temp -> next = newnode;
            temp -> next = newnode;
            temp = temp -> next;
        }
        
        traverse(head);
        
        printf("Want to continue : ");
        scanf(" %c", &ch);
    }
    while(ch == 'y' || ch == 'Y');
    
}











// #include<stdio.h>
// #include<stdlib.h>

// struct node {
//     int data;
//     struct node *next;
// }; 

// void traverse(struct node *p) {
//     printf("Linked List: ");
//     while (p != NULL) {
//         printf("%d -> ", p->data);
//         p = p->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     struct node *head = NULL, *new1, *temp;
//     char runAgain;
    
//     do {
//         new1 = (struct node*)malloc(sizeof(struct node));
//         printf("Enter the value : ");
//         scanf("%d", &(new1->data));
//         new1->next = NULL;

//         if (head == NULL) {
//             head = temp = new1;
//         } else {
//             temp->next = new1;
//             temp = temp->next;
//         }

//         traverse(head);

//         printf("Do you want to run the program again? (y/n): ");
//         scanf(" %c", &runAgain);
//     } while (runAgain == 'y' || runAgain == 'Y');
    
//     return 0;
// }
