#include<stdio.h>
#include<string.h>
#define ch 255
void PrintArray(int pInt[], int size);
void CountingSort(int *array, int size);


int main(){

    printf("Anish Bhattacharya\t170111037\n");
    int size, i, array[100];
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements : ");
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    printf("\n==Before Sorting==\n");
    PrintArray(array, size);
    CountingSort(array,size);
    printf("\n==After Sorting==\n");
    PrintArray(array, size);
    return 1;
}

void PrintArray(int pInt[100], int size) {
    for (int i = 0; i < size; i++)
        printf("%d  ", pInt[i]);
}

void CountingSort(int *array, int size){
    char op[size+1];
    int count[ch+1],i;
    memset(count, 0, sizeof(count));
    for(i = 0; i<size; ++i)
        ++count[array[i]];
    for (i = 0; i <= ch; ++i)
        count[i] += count[i-1];
    for (i = sizeof(array); i>=0; --i)
    {
        op[count[array[i]]-1] = array[i];
        --count[array[i]];
    }

    for (i = 0; array[i]; ++i)
        array[i] = op[i];
}
