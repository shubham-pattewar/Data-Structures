#include <stdio.h>
#include <stdlib.h>

int main(){
    struct node{
        int data;
        struct node *next;
    };
    int flag;

    struct node *newnode, *head, *temp;
    head = 0;

    while(flag){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &newnode->data);

        newnode -> next = 0;

        if(head == 0){
            head = temp = newnode;
        } else{
            temp -> next = newnode;
            temp = newnode;
        }

        printf("Would You Like to continue??(If Yes:1, No:0): ");
        scanf("%d", &flag);
    }

    printf("Displaying Linked List: ");
    int count = 0;
    temp = head;


    while(temp != 0){
        printf("%d\t", temp -> data);
        temp = temp -> next;
        count++;
    }
    printf("\nTotal Nodes: %d", count);

    return 0;
}