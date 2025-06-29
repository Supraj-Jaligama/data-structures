#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

typedef struct node snode;

snode* head = NULL;

void createlist(int x){
    snode* newnode = (snode*)malloc(sizeof(snode));
    newnode->data = x;
    newnode->next = head;
    head = newnode;
}

void printlist(void){
    snode* tempnode = head;
    if(tempnode == NULL){
        printf("list is empty\n");
        return;
    }
    while(tempnode != NULL){
        printf("%d->", tempnode->data);
        tempnode = tempnode->next;
    }
    printf("NULL\n");
}

void appendnode(int x){
    snode* newnode = (snode*)malloc(sizeof(snode));
    newnode->data = x;
    newnode->next = NULL;

    if(head == NULL){
        head = newnode;
        return;
    }

    snode* tempnode = head;
    while(tempnode->next != NULL){
        tempnode = tempnode->next;
    }
    tempnode->next = newnode;
}

int main(){
    createlist(10);
    createlist(20);
    appendnode(30);
    appendnode(40);
    printlist();  // <-- print to see the list
    return 0;
}