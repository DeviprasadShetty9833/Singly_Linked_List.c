# Singly_Linked_List.c

<br> ![Author: Deviprasad Shetty](https://img.shields.io/badge/Author-Deviprasad%20Shetty-000000?style=for-the-badge&labelColor=white)
<br> 


# My Intro:
<br> Hi, 😃👋 I'm Deviprasad Shetty, highly passionate for coding, learning and exploring new fields in Computer Science domain. 
<br> I'm excited 😃 to dive deeper into my technical skills, collaborate with others, and take on projects that challenge me to grow. 
<br> Always eager to learn and connect with others who share similar interests! 🤗🧑‍💻
<br> 
| [![LinkedIn](https://img.shields.io/badge/LinkedIn-%230077B5?style=for-the-badge&logo=LinkedIn&logoColor=white)](https://linkedin.com/in/deviprasad-shetty-4bba49313) | [![Website](https://img.shields.io/badge/Website-indigo?style=for-the-badge&logo=About.me&logoColor=white)](https://yourwebsite.com/) | [![My Portfolio](https://img.shields.io/badge/My_Portfolio-000?style=for-the-badge&logo=GitHub&logoColor=white)](https://github.com/DeviprasadShetty9833/My_Portfolio)  |                      
|---|---|---|
<br> 

[![DSA_in_C_Tutorial](https://img.shields.io/badge/Back_to-DSA_in_C_Tutorial-000080?style=for-the-badge&logo=C&logoColor=white)](https://github.com/DeviprasadShetty9833/DSA_in_C_Tutorial) 

# Singly_Linked_List:

<table>
<tr><td>

⏺️ A singly linked list is a linear data structure where each element (called a node) contains:

  - Data: The value stored in the node.

  - Next: A pointer/reference to the next node in the list.

⏺️ The last node’s next pointer is set to NULL to indicate the end of the list.

<details>
  <summary>Click to expand 🔻</summary>

<br> 🟠 Basic Operations:

```html

- Insertion: Add a node at the beginning, end, or a specific position.

- Deletion: Remove a node from the beginning, end, or a specific position.

- Traversal: Visit each node to access or display its value.

```

<br> 🟠 Advantages:

```html

• Dynamic size: Can grow or shrink as needed.

• Efficient insertions and deletions: No shifting of elements like arrays.

```

<br> 🟠 Applications:

```html

• Dynamic memory allocation.

• Implementation of stacks, queues, and other abstract data types.

• Undo functionality in text editors.

```

</tr></td>
</table>

</details> 

# Source Code:

# 🔎 Explanation of Code: 


<br> ![1.](https://img.shields.io/badge/_1]_-Header_Files-000080?style=for-the-badge&logo=C&logoColor=white)   

*Code*:

```html
#include <stdio.h>   // For input/output functions like printf and scanf
#include <stdlib.h>  // For malloc and free functions

```

<br> ![2.](https://img.shields.io/badge/_2]_-Node_Structure-000080?style=for-the-badge&logo=C&logoColor=white)   

*Code*:

```html
typedef struct Node {
    int data;              // Holds the value
    struct Node *next;     // Pointer to the next node
} Node;

```

> - typedef allows you to create an alias for a data type. In this case, it enables you to use Node instead of writing struct Node every time.
> - Node is the name of the structure.
> - data is used to store the value contained in the Node.
> - next is a pointer of type struct Node, which is used to point to the next Node in the linked list, thus creating the chain-like structure.

In Plain English:

> This is a structure (called Node) that contains:  an integer data, and a pointer next that links to the next node in the list. Also, because of typedef, you can just say Node instead of struct Node.”

<br> ![image alt](https://github.com/DeviprasadShetty9833/Singly_Linked_List.c/blob/542f71872f4e42020d36a731dfb83d9620f2d1cb/assets/SLL1.png)  <!-- Website : Medium -->


<br> ![3.](https://img.shields.io/badge/_3]_-Create_a_Node-000080?style=for-the-badge&logo=C&logoColor=white)   

*Code*:

```html

Node* createNode(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));  // Allocate memory

    newNode->data = data;                         // Set the value
    newNode->next = NULL;                         // Initially points to nothing

    return newNode;                               // Return the new node
}

```

> - createNode is function that returns a pointer to a Node.
> - newNode is a pointer to a Node.
> -  malloc calculates the size in bytes needed to store a Node Structure and allocates memory from the heap(dynamic memory) and returns void pointer.
> - (Node*) before malloc converts (typecasting) the generic void pointer into a Node pointer.
> - int data is stored in newNode's data and newNode's next pointer points to NULL i.e does not point to anything.

In Plain English:

> "I made a new node for you. I saved your number in it. I made sure it doesn't point to any other node yet. Now I’m giving it to you so you can put it into your list."

<br> ![image alt](https://github.com/DeviprasadShetty9833/Singly_Linked_List.c/blob/aca2fa765667965ca09da800977a87b951831b2b/assets/SLL2.png)  <!-- Website : Stackademic -->

<br> ![4.](https://img.shields.io/badge/_4]_-Insert_At_Beginning-000080?style=for-the-badge&logo=C&logoColor=white)   

*Code*:

```html

void insertAtBeginning(Node **head, int data) {
    Node *newNode = createNode(data);                 // Create node

    newNode->next = *head;                            // Point new node to current head
    *head = newNode;                                  // Move head to new node

    printf("%d inserted at the beginning\n", data);
}

```

> - Node **head is a pointer to the head pointer of list. It allows modifying the actual head.
> - Link newNode to initial node pointed by head. 
> - Link head pointer to point new node, thus newNode becomes initial node.

Example:
Position:        1             2   
List: head→[20 | next]→[30 | next]→NULL
Insert: [10 | next]→NULL at position 1 i.e before 20.

Step 1: 
[10 | next] ← newNode
        ↓ 
 head→[20 | next]→[30 | next]→NULL

 Step 2: 
 [10 | next] ← newNode
   ↑     ↓ 
 head→[20 | next]→[30 | next]→NULL

Step 3:
head→[10 | next]→[20 | next]→[30 | next]→NULL


In Plain English:

> I made a new node for you. I saved your number in it. Then, I'll link it to the current first node (if there is one). Now I’ll point this head to this new node — boom, it's leading the list!"

<br> ![5.](https://img.shields.io/badge/_5]_-Insert_At_End-000080?style=for-the-badge&logo=C&logoColor=white)   

*Code*:

```html

void insertAtEnd(Node **head, int data) {
    Node *newNode = createNode(data);
    
    if (*head == NULL) {
        *head = newNode;
        printf("%d inserted at the end\n", data);
        return;
    }
    
    Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;                     // Move to the last node
    temp->next = newNode;                      // Link new node at the end

    printf("%d inserted at the end\n", data);
}

```

<br> ![6.](https://img.shields.io/badge/_6]_-Insert_At_Position-000080?style=for-the-badge&logo=C&logoColor=white)   

*Code*:

```html

void insertAtPosition(Node **head, int data, int pos) {
    if (pos < 1) { 
        printf("Invalid position!\n");
        return;
    }

    if (pos == 1) {
        insertAtBeginning(head, data);
        return;
    }

    Node *newNode = createNode(data);  // Create newNode

    Node *temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;
    if (temp == NULL) {
        printf("Position out of bounds!\n");
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    printf("%d inserted at position %d\n", data, pos);
}

```


# Output:

---

| [![TOP](https://img.shields.io/badge/_🔺_-Navigate_to_TOP_↑_-blue?style=for-the-badge&labelColor=white)](https://github.com/DeviprasadShetty9833/Singly_Linked_List.c/blob/main/README.md) | [![DSA_in_C_Tutorial](https://img.shields.io/badge/Back_to-DSA_in_C_Tutorial-000080?style=for-the-badge&logo=C&logoColor=white)](https://github.com/DeviprasadShetty9833/DSA_in_C_Tutorial)  | [![My_Portfolio](https://img.shields.io/badge/Back_to-My_Portfolio-000000?style=for-the-badge&logo=GitHub&logoColor=white)](https://github.com/DeviprasadShetty9833/My_Portfolio) |
|---|---|---|
