
#include <stdio.h>

int heap[100], n = 0;

void insert(int value) {
    int i = ++n;
    heap[i] = value;

    while (i > 1 && heap[i] > heap[i / 2]) {
        int temp = heap[i];
        heap[i] = heap[i / 2];
        heap[i / 2] = temp;
        i = i / 2;
    }
}

void display() {
    for (int i = 1; i <= n; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

int main() {
    int a[] = {45, 72, 30, 90, 65, 50, 85};

    printf("Max Heap after each insertion:\n");

    for (int i = 0; i < 7; i++) {
        insert(a[i]);
        printf("After inserting %d: ", a[i]);
        display();
    }

    printf("Highest priority patient: %d\n", heap[1]);
    return 0;
}
