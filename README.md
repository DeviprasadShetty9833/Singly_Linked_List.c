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

<br> ![4.](https://img.shields.io/badge/_5]_-Insert_At_End-000080?style=for-the-badge&logo=C&logoColor=white)   

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

# Output:

---

| [![TOP](https://img.shields.io/badge/_🔺_-Navigate_to_TOP_↑_-blue?style=for-the-badge&labelColor=white)](https://github.com/DeviprasadShetty9833/Singly_Linked_List.c/blob/main/README.md) | [![DSA_in_C_Tutorial](https://img.shields.io/badge/Back_to-DSA_in_C_Tutorial-000080?style=for-the-badge&logo=C&logoColor=white)](https://github.com/DeviprasadShetty9833/DSA_in_C_Tutorial)  | [![My_Portfolio](https://img.shields.io/badge/Back_to-My_Portfolio-000000?style=for-the-badge&logo=GitHub&logoColor=white)](https://github.com/DeviprasadShetty9833/My_Portfolio) |
|---|---|---|
