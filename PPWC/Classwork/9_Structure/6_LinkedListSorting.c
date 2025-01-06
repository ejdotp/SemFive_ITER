//Soritng a single linked list:

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	int size;
	struct node *link; //self referencing structure
};

int size = 1;

void begin(struct node **head, int x);
void end(struct node **head, int x);
void insert(struct node **head, int pos, int x);
void delfirst(struct node **head);
void dellast(struct node **head);
void del(struct node **head, int pos);
void print(struct node *head);
void sort(struct node **head);

int main()
{
	struct node *head = NULL;
	int ch, t, flag = 1, pos = 0;
	
	for(t = 10; t <= 50; t += 10)
		end(&head, t);              //initialise with 10->20->30->40->50;
		
	printf("Menu:-\n1: Insert at Beginning\n2: Insert at End\n3: Insert at Index\n4: Delete First\n5: Delete Last\n6: Delete at Index\n7: Print Linked List\n8: Sort\n9: Exit\n\n");
	
	do{
a:      printf("Enter Choice: ");
		scanf("%d", &ch);
		
		switch(ch){
			case 1: printf("Enter Value to insert: ");
				    scanf("%d", &t);
				    begin(&head, t);
				    break;
			case 2: printf("Enter Value to insert: ");
				    scanf("%d", &t);
				    end(&head, t);
				    break;
			case 3: printf("Enter Value to insert: ");
				    scanf("%d", &t);
				    printf("Enter position to insert at: ");
				    scanf("%d", &pos);
				    insert(&head, pos, t);
				    break;
			case 4: delfirst(&head);
				    break;
			case 5: dellast(&head);
				    break;
			case 6: printf("Enter position to delete: ");
				    scanf("%d", &pos);
				    del(&head, pos);
				    break;
			case 7: print(head);
					break;
			case 8: sort(&head);
					break;
			case 9: flag = 0;
					break;
			default: printf("Invalid Input!\n\n");
					 goto a;
		}		
	}while(flag);
	
	return 0;
}

void begin(struct node **head, int x)
{
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = x;
	new->link = *head;
	*head = new;
	size++;
}

void end(struct node **head, int x)
{
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = x;
	new->link = NULL;
	
	if(*head == NULL){
		*head = new;
		return;
	}
	
	struct node *temp = *head;
	while(temp->link != NULL){
		temp = temp->link;
	}
	temp->link = new;
	new->link = NULL;
	size++;
}

void insert(struct node **head, int pos, int x)
{
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = x;
	new->link = NULL;
	
	if(pos == 0){
		begin(head, x);
		return;
	}
	
	struct node *temp = *head;
	for(int i = 0; i < pos-1; i++){
		temp = temp->link;
	}
	new->link = temp->link;
	temp->link = new;
	size++;
}

void delfirst(struct node **head){
	if(*head == NULL){
		printf("\nLinkedList is Empty!!!\n\n");
		return;
	}
	*head = (*head)->link;
	size--;
	printf("\nSuccessfully Deleted!\n\n");
}

void dellast(struct node **head){
	if(*head == NULL){
		printf("\nLinkedList is Empty!!!\n\n");
		return;
	}
	struct node *temp = *head;
	while(temp->link->link != NULL){
		temp = temp->link;
	}
	temp->link = NULL;
	size--;
	printf("\nSuccessfully Deleted!\n\n");
}

void del(struct node **head, int pos){
	if(*head == NULL){
		printf("\nLinkedList is Empty!!!\n\n");
		return;
	}
	struct node *temp = *head;
	for(int i = 0; i < pos-1; i++){
		temp = temp->link;
	}
	temp->link = temp->link->link;
	size--;
	printf("\nSuccessfully Deleted!\n\n");
}

void print(struct node *head)
{
	struct node *temp = head;
	printf("\n");
	while(temp->link != NULL){
		printf("%d -> ", temp->data);
		temp = temp->link;
	}
	printf("%d\n", temp->data);
	printf("Current size = %d\n\n", size);
}

void sort(struct node **head)
{	
	for(int i = 0; i<size; i++)
    {
    	struct node *temp = *head;
    	for(int j = 0; j<size-i-1; j++)
    	{
    		if(temp->data > temp->link->data)
    		{
    			int t = temp->data;
    			temp->data = temp->link->data;
    			temp->link->data = t;
    		}
    		temp = temp->link;
    	}
    }
}

