#include<stdio.h>
#include "ArrayBaseStack_2.h"

int main(void) {
	Stack stack;
	StackInit(&stack);

	SPush(&stack, 1.1); SPush(&stack, 2.2);
	SPush(&stack, 3.3); SPush(&stack, 4.4);
	SPush(&stack, 5.5);

	while (!SlsEmpty(&stack)) {
		printf("현재 스택 개수 : %d\n",StackCount(&stack));
		printf("top에 있는 숫자 : %d \n", SPop(&stack));
	}
		

	return 0;
}