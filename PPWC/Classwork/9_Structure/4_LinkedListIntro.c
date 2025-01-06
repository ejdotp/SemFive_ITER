//LInked List without functions:

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *link; //self referencing structure
};

int main()
{
	struct Node *head = NULL;
	struct Node *new = (struct Node*)malloc(sizeof(struct Node));
	new->data = 10;
	new->link = head;
	head = new;
	new = (struct Node*)malloc(sizeof(struct Node));
	new->data = 20;
	new->link = head;
	head = new;
	new = (struct Node*)malloc(sizeof(struct Node));
	new->data = 30;
	new->link = head;
	head = new;
	
	//traversing:-
	struct Node *temp = head;
	while(temp->link != NULL){
		printf("%d -> ", temp->data);
		temp = temp->link;
	}
	printf("%d\n", temp->data);
	
	return 0;
}

