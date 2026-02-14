#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void add_to_end(int data) {
    struct node *new_item = (struct node*)malloc(sizeof(struct node));
    new_item->value = data;
    new_item->next = NULL;
    new_item->prev = NULL;

    if (head == NULL) {
        head = new_item;
    } else {
        struct node *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_item;
        new_item->prev = current;
    }
}

void insert_after(int target, int data) {
    struct node *current = head;
    while (current != NULL && current->value != target) {
        current = current->next;
    }

    if (current != NULL) {
        struct node *new_item = (struct node*)malloc(sizeof(struct node));
        new_item->value = data;
        
        new_item->next = current->next;
        new_item->prev = current;

        if (current->next != NULL) {
            current->next->prev = new_item;
        }
        current->next = new_item;
    }
}

void delete_node(int data) {
    struct node *current = head;
    while (current != NULL && current->value != data) {
        current = current->next;
    }

    if (current != NULL) {
        if (current->prev != NULL) {
            current->prev->next = current->next;
        } else {
            head = current->next;
        }

        if (current->next != NULL) {
            current->next->prev = current->prev;
        }
        free(current);
    }
}

void show_list() {
    struct node *current = head;
    while (current != NULL) {
        printf("%d -", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    add_to_end(10);
    add_to_end(20);
    add_to_end(30);
    printf("Initial list:\n");
    show_list();

    insert_after(20, 25);
    printf("After inserting 25 after 20:\n");
    show_list();

    delete_node(10);
    printf("After deleting 10 (head node):\n");
    show_list();

    return 0;
}