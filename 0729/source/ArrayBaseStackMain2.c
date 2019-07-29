#include<stdio.h>
#include "ArrayBaseStack_2.h"

int main(void) {
	Stack stack;
	StackInit(&stack);

	SPush(&stack, 1.1); SPush(&stack, 2.2);
	SPush(&stack, 3.3); SPush(&stack, 4.4);
	SPush(&stack, 5.5);

	while (!SlsEmpty(&stack)) {
		printf("���� ���� ���� : %d\n",StackCount(&stack));
		printf("top�� �ִ� ���� : %d \n", SPop(&stack));
	}
		

	return 0;
}