#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct listNode {
    char data[100];
    struct listNode* llink;
    struct listNode* rlink;
} listNode;

typedef struct linkedList_h {
    listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void) {
    linkedList_h* DL;
    DL = (linkedList_h*)malloc(sizeof(linkedList_h));
    DL->head = NULL;
    return DL;
}

void printList(linkedList_h* DL) {
    listNode* p;
    printf(" DL = (");
    p = DL->head;

    while (p != NULL) {
        printf("%s", p->data);
        p = p->rlink;
        if (p != NULL) printf(", ");
    }
    printf(") \n");
}

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
        if (pre->rlink != NULL)
            pre->rlink->llink = newNode;
        pre->rlink = newNode;
        newNode->llink = pre;
    }

}

void deleteNode(linkedList_h* DL, listNode* old) {
    if (DL->head == NULL || old == NULL) return;
    else {
        if (old->llink != NULL)
            old->llink->rlink = old->rlink;
        if (old->rlink != NULL)
            old->rlink->llink = old->llink;
        free(old->data);
        free(old);
    }
}

listNode* searchNode(linkedList_h* DL, char* x) {
    if (DL == NULL || DL->head == NULL || x == NULL) return NULL;
    listNode* temp;
    temp = DL->head;
    while (temp != NULL) {
        if (strcmp(temp->data, x) == 0) return temp;
        else temp = temp->rlink;
    }
    return temp;
}
