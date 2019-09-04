#include <cstdio>

void BubbleSort(int *pInt, int n);

void PrintArray(int pInt[100], int size);

int main() {

    int size, i, a[100];
    printf("Enter size of the array : ");
    scanf_s("%d", &size);
    for (i = 0; i < size; i++)
        scanf_s("%d", &a[i]);
    printf("\n==Before Sorting==\n");
    PrintArray(a, size);
    BubbleSort(a, size);
    printf("\n==After Sorting==\n");
    PrintArray(a, size);
    return 0;
}

void PrintArray(int pInt[100], int size) {
    for (int i = 0; i < size; i++)
        printf("%d  ", pInt[i]);
}

void BubbleSort(int *pInt, int n) {
    int key;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++)
            if (pInt[i] > pInt[j]) {
                key = pInt[j];
                pInt[j] = pInt[i];
                pInt[i] = key;
            }
    }
}
