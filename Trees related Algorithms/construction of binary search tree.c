#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root= NULL;
struct node* createNode(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data= data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
void insert(int data) {
    struct node *newNode = createNode(data);
    if(root == NULL){
        root = newNode;
        return;
      }
    else {
        struct node *current = root, *parent = NULL;

        while(true) {
            parent = current;

            if(data < current->data) {
                current = current->left;
                if(current == NULL) {
                    parent->left = newNode;
                    return;
                }
            }
            else {
                current = current->right;
                if(current == NULL) {
                    parent->right = newNode;
                    return;
                }
            }
        }
    }
}
void display(struct node *node) {
        if(node->left!= NULL)
            display(node->left);
        printf("%d ", node->data);
        if(node->right!= NULL)
          display(node->right);
}
int main()
{
    insert(50);
    insert(30);
    insert(70);
    insert(60);
    insert(10);
    insert(90);

    printf("Binary search tree after insertion: \n");
    display(root);
    return 0;
}
