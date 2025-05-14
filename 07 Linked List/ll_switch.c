#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *newnode, *head, *temp;
    int choice, value, flag = 1;

    head = 0;

    printf("Search Operation for Linked List: \n");
    printf("1. Insert at Beginning\n");
    printf("2. Insert at End\n");
    printf("3. Search an Element\n");
    printf("4. Display List\n");
    printf("5. Exit\n");

    do{
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1: newnode = (struct node*)malloc(sizeof(struct node));
                    printf("Enter Data: ");
                    scanf("%d", &newnode->data);
                    newnode->next = head;
                    head = newnode;
                    break;
                
            case 2: newnode = (struct node*)malloc(sizeof(struct node));
                    printf("Enter Data: ");
                    scanf("%d", &newnode->data);
                    newnode->next = 0;

                    temp = head;
                    while (temp->next != 0) {
                        temp = temp->next;
                    }
                    temp->next = newnode;

                    break;

            case 3: printf("Enter Value to Search: ");
                    scanf("%d", &value);
                    break;
                
            case 4: temp = head;
                    printf("Linked List: ");
                    while (temp != 0) {
                        printf("%d \t", temp->data);
                        temp = temp->next;
                    }
                    break;

            case 5: printf("Exiting Program...");
                    break;

            default: printf("Invalid Choice");
        }
    } while(choice != 5);

    return 0;
}