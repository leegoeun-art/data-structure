#pragma once

typedef struct ListNode {
	struct ListNode* llink;  
	char data[4];
} listNode;

//리스트 시작을 나타내는 head 노드를 구조체로 정의
typedef struct {
	listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void);
void printList(linkedList_h* CL);
void insertFirstNode(linkedList_h* CL, listNode* pre, char* x);
void insertMiddleNode(linkedList_h* CL, listNode* pre, char* x);
void deleteNode(linkedList_h* CL, listNode* old);
listNode* searchNode(linkedList_h* CL, char* x);