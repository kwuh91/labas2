#include <stdio.h>
#include <stdlib.h>
/*
struct Node {
    double data;
    struct Node *next;
    struct Node *prev;
};

void addend(struct Node **head, struct Node **tail, double newdata) {
    struct Node *new_node = new Node;
    struct Node *last = *head;
    new_node->data = newdata;
    new_node->next = NULL;
    if (*head == NULL) {
        new_node->prev = NULL;
        *head = new_node;
        *tail = new_node;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
    new_node->prev = last;
    *tail = new_node;
}

void display(struct Node *head) {
    while (head != NULL) {
        printf("%lf ", head->data);
        head = head->next;
    }
}

void reversedisplay(struct Node *tail) {
    while (tail != NULL) {
        printf("%lf ", tail->data);
        tail = tail->prev;
    }
}

int main() {
    struct Node *head = NULL;
    struct Node *tail = NULL;
    printf("Enter numbers:\n");
    char newsymb[10], *end;
    gets(newsymb);
    while (newsymb[0] != NULL) {
        double n = (double) atof (newsymb);
        addend(&head, &tail, n);
        gets(newsymb);
    }
    printf("Entered numbers:\n");
    display(head);
    printf("\nReversed entered numbers:\n");
    reversedisplay(tail);
    printf("\nResult:\n");
    struct Node *last = head;
    while (last->next != NULL) {
        last = last->next;
    }
    while (head != NULL) {
        printf("%lf + %lf = %lf\n", head->data, last->data, head->data + last->data);
        head = head->next;
        last = last->prev;
    }
    return 0;
}
*/