#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
/*
struct Node {
    char str[80];
    struct Node *next;
};

void addfront(struct Node **head, char newstr[80]) {
    struct Node *new_node = new Node;
    strcpy(new_node->str, newstr);
    new_node->next = *head;
    *head = new_node;
}

void display(struct Node *head) {
    while (head != NULL) {
        printf("%s\n", head->str);
        head = head->next;
    }
}

void deleteNode(struct Node **head, char key[80]) {
    struct Node *temp = *head;
    struct Node *prev = *head;
    if (temp != NULL && temp->str == key) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->str != key) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    free(temp);
}

int main() {
    srand(time(NULL));
    char str[80];
    printf ("Enter your string:\n");
    scanf("%[^\n]s",str);
    printf("Given string: \n");
    printf("%s\n\n", str);

    struct Node *head = NULL;
    char newstr[80] = "";
    size_t length = strlen(str);
    for (int i = 0; i < length; ++i) {
        if (str[i] != ' ') {
            strncat(newstr, &str[i], 1);
        } else {
            addfront(&head, newstr);
            memset(newstr, 0, strlen(newstr));
        }
    }
    addfront(&head, newstr);
    printf("Formed list:\n");
    display(head);
    printf("\n");
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL) {
        if (strlen(temp->str) < 5) {
            ++count;
            if (strlen(temp->str) < 3) {
                deleteNode(&head, temp->str);
            }
        }
        temp = temp->next;
    }
    printf("Amount of words with length < 5: %d\n\n", count);
    printf("End list:\n");
    display(head);
    return 0;
}
*/