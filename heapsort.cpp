#include<stdio.h>
void Printarrayay(int pInt[], int size);
void HeapSort(int *array, int size);
void Heapify(int *array, int size, int i);
int tmp;

int main(){

    printf("Anish Bhattacharya\t170111037\n");
    int size, i, array[100];
    printf("Enter size of the arrayay : ");
    scanf("%d", &size);
    printf("Enter elements : ");
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    printf("\n==Before Sorting==\n");
    Printarrayay(array, size);
    HeapSort(array,size);
    printf("\n==After Sorting==\n");
    Printarrayay(array, size);
    return 0;
}

void Printarrayay(int pInt[100], int size) {
    for (int i = 0; i < size; i++)
        printf("%d  ", pInt[i]);
}

void HeapSort(int *array, int size){

    for (int i = (size / 2) - 1; i >= 0; i--)
        Heapify(array, size, i);

    for (int i=size-1; i>=0; i--)
    {
        tmp=array[0];
        array[0]=array[i];
        array[i]=tmp;
        Heapify(array, i, 0);
    }
}

void Heapify(int *array, int size, int i){
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < size && array[l] > array[largest])
        largest = l;

    if (r < size && array[r] > array[largest])
        largest = r;

    if (largest != i)
    {
        tmp=array[i];
        array[i]=array[largest];
        array[largest] = tmp;
        Heapify(array, size, largest);
    }
}
