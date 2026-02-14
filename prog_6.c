#include <stdio.h>

void max_heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        max_heapify(arr, n, largest);
    }
}

void min_heapify(int arr[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest]) {
        smallest = left;
    }

    if (right < n && arr[right] < arr[smallest]) {
        smallest = right;
    }

    if (smallest != i) {
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
        min_heapify(arr, n, smallest);
    }
}

void build_max_heap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        max_heapify(arr, n, i);
    }
}

void build_min_heap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        min_heapify(arr, n, i);
    }
}

void show_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int data_max[] = {15, 20, 7, 9, 30};
    int data_min[] = {15, 20, 7, 9, 30};
    int n = 5;

    printf("Original array:\n15 20 7 9 30\n\n");

    build_max_heap(data_max, n);
    printf("Max heap array:\n");
    show_array(data_max, n);

    build_min_heap(data_min, n);
    printf("\nMin heap array:\n");
    show_array(data_min, n);

    return 0;
}