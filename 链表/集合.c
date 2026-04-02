#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void appendNode(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

Node* unionSets(Node* S1, Node* S2) {
    Node* result = NULL;
    Node* temp = S1;
    while (temp != NULL) {
        appendNode(&result, temp->data);
        temp = temp->next;
    }
    temp = S2;
    while (temp != NULL) {
        appendNode(&result, temp->data);
        temp = temp->next;
    }
    return result;
}

Node* differenceSets(Node* S1, Node* S2) {
    Node* result = NULL;
    Node* temp = S1;
    while (temp != NULL) {
        int found = 0;
        Node* temp2 = S2;
        while (temp2 != NULL) {
            if (temp->data == temp2->data) {
                found = 1;
                break;
            }
            temp2 = temp2->next;
        }
        if (!found) {
            appendNode(&result, temp->data);
        }
        temp = temp->next;
    }
    return result;
}

Node* intersectionSets(Node* S1, Node* S2) {
    Node* result = NULL;
    Node* temp = S1;
    while (temp != NULL) {
        Node* temp2 = S2;
        while (temp2 != NULL) {
            if (temp->data == temp2->data) {
                appendNode(&result, temp->data);
                break;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    return result;
}

int main() {
    Node* S1 = NULL;
    Node* S2 = NULL;
    appendNode(&S1, 2);
    appendNode(&S1, 3);
    appendNode(&S1, 5);
    appendNode(&S1, 6);
    appendNode(&S2, 3);
    appendNode(&S2, 4);
    appendNode(&S2, 6);
    appendNode(&S2, 8);

    printf("Set S1: ");
    printList(S1);
    printf("Set S2: ");
    printList(S2);

    Node* unionResult = unionSets(S1, S2);
    printf("Union of S1 and S2: ");
    printList(unionResult);

    Node* differenceResult = differenceSets(S1, S2);
    printf("Difference of S1 and S2: ");
    printList(differenceResult);

    Node* intersectionResult = intersectionSets(S1, S2);
    printf("Intersection of S1 and S2: ");
    printList(intersectionResult);

    return 0;
}

