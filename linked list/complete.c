#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_begin();
void insert_pos();
void insert_end();
void delete_begin();
void delete_end();
void delete_pos();

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;
int main(){
    char cho;
    
        printf("\n*****\n");
        printf("0. Create\n");
        printf("1. Display\n");
        printf("2. Insert Node at beginning\n");
        printf("3. Insert Node in specific position\n");
        printf("4. Insert Node at end of LinkedList\n");
        printf("5. Delete Node at beginning\n");
        printf("6. Delete Node at end\n");
        printf("7. Delete Node at position\n");
        printf("8. ** To exit **\n");

    while(1){
        printf("Enter the choice : ");
        scanf(" %c", &cho);
        getchar();  // Consume the newline character

        switch (cho){
            case '0': 
                create();
                break;
            case '1': 
                display();
                break;
            case '2': 
                insert_begin();
                break;
            case '3': 
                insert_pos();
                break;
            case '4': 
                insert_end();
                break;
            case '5': 
                delete_begin();
                break;
            case '6': 
                delete_end();
                break;
            case '7': 
                delete_pos();
                break;
            case '8': 
                exit(0);
            default:
                printf("\nWrong Choice");
                break;
        }
    }
}

void create(){
    struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d",&temp->data); 
	temp->next = NULL;
	if(head==NULL)	{
		head = temp;
	}
	else{
		struct node* ptr = head;
		while(ptr->next!=NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp; 
	}
}

void display(){
    struct node *ptr = head;

    while(ptr != NULL){
        printf("%d ->", ptr -> data);
        ptr = ptr -> next;
    }
    printf("\n");

}

void insert_begin(){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enetr the element : ");
    scanf("%d", &temp -> data);
    temp -> next = NULL;

    if(head == NULL){
        head = temp;
    }

    else{
        temp -> next = head;
        head = temp;
    }
}


void insert_pos(){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enetr the element : ");
    scanf("%d", &temp -> data);
    temp -> next = NULL;

    if(head == NULL){
        head = temp;
    }

    else{
        int pos;
        printf("Enter the posation : ");
        scanf("%d", &pos);

        struct node *pptr, *ptr = head;
        for(int i = 0; i<pos; i++){
            pptr = ptr;
            ptr = ptr -> next;
        }
        temp -> next = ptr;
        pptr -> next = temp;
    }


}


void insert_end(){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enetr the element : ");
    scanf("%d", &temp -> data);
    temp -> next = NULL;

    if(head == NULL){
        head = temp;
    }

    else{
        struct node *ptr = head;
        while(ptr ->next != NULL){
            ptr = ptr -> next;
        }

        ptr->next = temp;
    }
}

void delete_begin(){
    if(head == NULL){
        printf("linked list is empty");
        return;
    }

    else{
        struct node *ptr = head;
        head = head -> next;
        free(ptr);
        printf("node deleted \n");
    }

    
}

void delete_end(){
    if(head == NULL){
        printf("linked list is empty");
    }

    else if(head->next==NULL) 
	{
		struct node* ptr = head;
		head = ptr->next;
		free(ptr);

	}

    else{
        struct node *pptr, *ptr = head;
        while(ptr -> next != NULL){
            pptr = ptr;
            ptr = ptr -> next;
        }
        pptr -> next = NULL;
        free(ptr);
        printf("node deleted \n");
    }
}

void delete_pos(){
    if(head == NULL){
        printf("linked list is empty");
    }

    else{
        int pos;
        printf("Enter the posation : ");
        scanf("%d", &pos);

        struct node *pptr, *ptr = head;
        for(int i = 0; i<pos; i++){
            pptr = ptr;
            ptr = ptr -> next;
        }

        pptr -> next = ptr -> next;
        free(ptr);
        printf("node deleted \n");
    }
}