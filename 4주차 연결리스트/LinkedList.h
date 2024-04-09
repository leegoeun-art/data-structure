#pragma once

typedef struct ListNode {
	char data[4];
	struct ListNode* link;
} listNode;

typedef struct {
	listNode* head;
} linkedList_h;

linkedLIst_h* create