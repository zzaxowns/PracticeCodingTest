#include<stdio.h> // 단일 리스트 
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

typedef struct list {
	Node *head;
	Node *current;
	unsigned int len;
}List;

void Initialize(List *list) {
	list->head = NULL;
	list->current = NULL;
	list->len = 0;
}

Node* CreateNewNode(int x) {
	Node *temp;

	temp = (Node*)calloc(1, sizeof(Node));

	if (temp == NULL) { printf("Memory allocation failed\n"); }
	else {
		temp->data = x;
		temp->next = NULL;
	}

	return temp;
}

void Add_Front(List *list, int x) {
	Node* temp;
	
	temp = CreateNewNode(x);

	if (temp == NULL) {
		printf("Add_Front Error\n");
		exit(1);
	}

	//순서 중요
	temp->next = list->head;
	list->head = temp;
	list->current = temp;

	list->len++;
}

void Add_Back(List *list, int x) {
	Node* newNode;
	Node* endNode;

	newNode = CreateNewNode(x);

	if (newNode == NULL) {
		printf("Add_Back Error\n");
		exit(1);
	}

	//맨 처음일 경우
	if (list->head == NULL) {
		list->head = newNode;
		list->current = newNode;
		return;
	}

	//그 외에 맨 끝에 추가 할 경우
	endNode = list->head;

	while (endNode->next != NULL) { //맨 끝 노드 찾는 중
		endNode = endNode->next;
	}

	endNode->next = newNode;
	list->current = newNode;

	return;
}

void printList(List *list) {

	Node *temp;
	
	if (list->head == NULL) {
		printf("List is empty\n");
		return;
	}

	temp = list->head;
	printf("head -> ");

	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;
	}

	printf("NULL\n");

	return;
}

int main(void)
{
	List mylist;

	Initialize(&mylist);

	Add_Front(&mylist, 50);
	Add_Front(&mylist, 10);
	Add_Front(&mylist, 75);
	Add_Back(&mylist, 100);

	printList(&mylist);

	return 0;
}