#include<stdio.h>
#include<stdlib.h>
#include "ListBaseStack.h"


void StackInit(Stack* pstack) {
	pstack->head = NULL;
}

int SlsEmpty(Stack* pstack) {
	if (pstack->head == NULL)
		return TRUE;
	else
		return FALSE;
}

void SPush(Stack* pstack, Data data) {
	Node* newNode = (Node*)malloc(sizeof(Node));

	newNode->data = data;
	newNode->next = pstack->head;

	pstack->head = newNode;
}

Data SPop(Stack* pstack) {
	Data rdata;
	Node* rnode;

	if (SlsEmpty(pstack)) {
		printf("Stack Memory Eroror!0");
		exit(-1);
	}

	rdata = pstack->head->next;
	free(rnode);

}

Data SPeek(Stack* pstack) {
	if (SlsEmpty(pstack)) {
		printf("Stack Memory Error!");
		exit(-1);
	}
	return pstack->head->data;
}
