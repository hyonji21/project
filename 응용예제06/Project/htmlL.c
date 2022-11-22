#include <stdlib.h>
#include "htmlL.h"

int isStackEmpty(void) {
	if (top == NULL)return 1;
	else return 0;
}

void push(element item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));

	temp->data = item;
	temp->link = top;
	top = temp;
}

element pop(void) {
	element item;
	stackNode* temp = top;

	if (isStackEmpty()) {
		return 0;
	}
	else {
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
}

element peek(void) {
	if (isStackEmpty()) {
		return 0;
	}
	else {
		return(top->data);
	}
}

void printStack(void) {
	stackNode* p = top;
	printf(" </");
	while (p) {
		printf("%d", p->data);
		p = p->link;
	}
	printf(">");
}