#include<stdio.h>
#include<stdlib.h>
#include "ListBaseStack.h"

int main(void) {

	Stack stack;
	StackInit(&stack);

	SPush(&stack, 1);


	while (!SlsEmpty(&stack))
		printf("&d ", SPop(&stack));

	return 0;
}