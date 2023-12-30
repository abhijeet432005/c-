#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkedlist(struct node *p){
    while(p != NULL){
        printf("%d ", p -> data);
        p = p -> next;
    }
}

int main(){
    struct node *head;
    struct node *first = NULL;
    struct node *sec = NULL;
    struct node *third = NULL;

   first =(struct node*)malloc(sizeof(struct node));
   sec =(struct node*)malloc(sizeof(struct node));
   third =(struct node*)malloc(sizeof(struct node));

   first -> data = 10;
   first -> next = sec;

   sec -> data = 20;
   sec -> next = third;

   third -> data = 30;
   third -> next = NULL;

   head = first;

   linkedlist(head);

}