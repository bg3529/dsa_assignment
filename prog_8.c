#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int comp = 0;
int swp = 0;

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comp++; // Count comparison
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swp++; // Count swap
            }
        }
    }
}

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            comp++; // Count comparison
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
        swp++;
    }
}

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Move elements that are greater than key
        while (j >= 0 && arr[j] > key) {
            comp++;
            arr[j + 1] = arr[j];
            j--;
            swp++;
        }
        arr[j + 1] = key;
        if (j >= 0) comp++;
    }
}

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];
    
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        comp++;
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void merge_sort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        merge_sort(arr, l, m); // Sort first half
        merge_sort(arr, m + 1, r); // Sort second half
        merge(arr, l, m, r); // Merge them
    }
}

int main() {
    int n, choice;
    printf("Enter number of elements (N): ");
    scanf("%d", &n);
    
    int arr[n];
    srand(time(0)); // Initialize random seed
    
    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % 1000) + 1;
    }

    printf("\nOriginal array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    printf("\n\nSelect Sorting Algorithm:\n1. Bubble\n2. Selection\n3. Insertion\n4. Merge\nChoice: ");
    scanf("%d", &choice);

    if (choice == 1) bubble_sort(arr, n);
    else if (choice == 2) selection_sort(arr, n);
    else if (choice == 3) insertion_sort(arr, n);
    else if (choice == 4) merge_sort(arr, 0, n - 1);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    printf("\n\nTotal Comparisons: %d", comp);
    printf("\nTotal Swaps/Shifts: %d\n", swp);

    return 0;
}