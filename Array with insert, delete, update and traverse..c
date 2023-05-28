#include <stdio.h>

#define MAX_SIZE 100

int arr[MAX_SIZE];
int size = 0;

void insert(int index, int value) {
    if (size == MAX_SIZE) {
        printf("Array is full\n");
        return;
    }

    if (index < 0 || index > size) {
        printf("Invalid index\n");
        return;
    }

    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    size++;
}

void delete(int index) {
    if (size == 0) {
        printf("Array is empty\n");
        return;
    }

    if (index < 0 || index >= size) {
        printf("Invalid index\n");
        return;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;
}

void update(int index, int value) {
    if (index < 0 || index >= size) {
        printf("Invalid index\n");
        return;
    }

    arr[index] = value;
}

void traverse() {
    if (size == 0) {
        printf("Array is empty\n");
        return;
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    insert(0, 1);
    insert(1, 2);
    insert(2, 3);
    traverse();

    update(1, 4);
    traverse();

    delete(2);
    traverse();

    return 0;
}
