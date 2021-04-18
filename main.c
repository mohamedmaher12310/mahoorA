#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};
int main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;

	// allocate 3 nodes in the heap
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));



	head->data = 1;
	head->next = second;

	second->data = 2;


	second->next = third;



	third->data = 3; // assign data to third node
	third->next = NULL;



	return 0;
}
