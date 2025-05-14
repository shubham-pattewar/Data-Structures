#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *create() {
    struct node *temp;
    int ch, val;

    printf("Press -1 to Exit: ");
    scanf("%d", &ch);

    if (ch == -1) {
        return 0;
    } else {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &val);
        temp->data = val;
        temp->left = 0;
        temp->right = 0;

        printf("Enter Left Child for %d:\n", val);
        temp->left = create();

        printf("Enter Right Child for %d:\n", val);
        temp->right = create();

        return temp;
    }
}

void inorder(struct node *root) {
    if (root == 0) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(struct node *root) {
    if (root == 0) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root) {
    if (root == 0) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main() {
    struct node *root;
    root = create();

    printf("\nInorder Traversal:\n");
    inorder(root);
    printf("\n");

    printf("Preorder Traversal:\n");
    preorder(root);
    printf("\n");

    printf("Postorder Traversal:\n");
    postorder(root);
    printf("\n");

    return 0;
}
