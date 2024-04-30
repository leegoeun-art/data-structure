#include "DoubleLinkedList.h"

// 공백 이중 연결 리스트를 생성하는 연산
linkedList_h* createLinkedList_h(void) {
	linkedList_h* DL;
	DL = (linkedList_h*)malloc(sizeof(linkedList_h)); // 헤드 노드 할당
	DL->head = NULL;
	return DL;
}

//이중 연결 리스트를 순서대로 출력하는 연산
void printList(linkedList_h* DL) {
	listNode* p;
	printf("DL = (");
	p = DL->head;

	while (p != NULL) {
		printf("%s", p->data);
		p = p->rlink;
		if (p != NULL) printf(", ");
	}
	printf(") \n");
}

//pre 뒤에 노드를 삽입하는 연산
void insertNode(linkedList_h* DL, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (DL->head == NULL) {
		newNode->rlink = NULL;
		newNode->llink = NULL;
		DL->head = newNode;
	}
	else {
		newNode->rlink = pre->rlink;
		pre->rlink = newNode;
		newNode->llink = pre;
		if (newNode->rlink != NULL)
			newNode->rlink->llink = newNode;
	}
}

void deleteNode(linkedList_h* DL, listNode* old) {
	if (DL->head == NULL) return;
	else if (old == NULL) return;
	else {
		old->llink->rlink = old->rlink;
		old->rlink->llink = old->llink;
		free(old);
	}
}

listNode* searchNode(linkedList_h* DL, char* x) {
	listNode* temp;
	temp = DL->head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->rlink;
	}
	return temp;
}
