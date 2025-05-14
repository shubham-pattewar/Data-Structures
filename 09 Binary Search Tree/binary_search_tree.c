#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* insert(struct node* root, int val) {
    if (root == 0) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = val;
        temp->left = 0;
        temp->right = 0;
        return temp;
    }

    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);

    return root;
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
    struct node *root = 0;
    int val;

    printf("Enter elements to insert into BST (press -1 to stop):\n");

    while (1) {
        printf("Enter value: ");
        scanf("%d", &val);
        if (val == -1) break;
        root = insert(root, val);
    }

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
