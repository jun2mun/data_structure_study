#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"

void StackInit(Stack* pstack) {
	pstack->topIndex = -1;
}

int SlsEmpty(Stack* pstack) {
	if (pstack->topIndex == -1)
		return TRUE;
	else
		return FALSE;
}

void SPush(Stack* pstack, Data data) {
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}

Data SPop(Stack* pstack) {
	int rldx;

	if (SlsEmpty(pstack)) {
		printf("stack memory error!");
		exit(-1);
	}

	rldx = pstack->topIndex;
	pstack->topIndex -= 1;

	return pstack->stackArr[rldx];
}

Data SPeek(Stack* pstack) {
	if (SlsEmpty(pstack)) {
		printf("Stack memory error!");
		exit(-1);
	}

	return pstack->stackArr[pstack->topIndex];
}