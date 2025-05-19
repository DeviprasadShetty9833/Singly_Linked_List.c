#include <stdio.h>
#include <stdlib.h>
// Node structure
typedef struct Node {
int data;
struct Node *next;
} Node;
// Function to create a new node
Node* createNode(int data) {
Node *newNode = (Node*)malloc(sizeof(Node));
newNode->data = data;
newNode->next = NULL;
return newNode;
}
// Function to insert a node at the beginning
void insertAtBeginning(Node **head, int data) {
Node *newNode = createNode(data);
newNode->next = *head;