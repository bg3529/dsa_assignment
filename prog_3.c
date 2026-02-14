#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *head = NULL;

void addNode(int data) {
    struct node *new_item = (struct node*)malloc(sizeof(struct node));
    new_item->value = data;
    new_item->next = NULL;

    if (head == NULL) {
        head = new_item;
    } else {
        struct node *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_item;
    }
}

void showBackwards(struct node *current) {
    if (current == NULL) {
        return;
    }
    
    showBackwards(current->next);
    printf("%d ", current->value);
}

void showForward() {
    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

int main() {
    addNode(100);
    addNode(250);
    addNode(475);
    addNode(600);
    addNode(825);

    printf("Normal order list:\n");
    showForward();

    

    printf("Reverse order list:\n");
    showBackwards(head);
    printf("\n");

    return 0;
}