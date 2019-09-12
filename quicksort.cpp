#include<stdio.h>
void PrintArray(int pInt[], int size);
int Partition(int *arr, int lower, int upper, int size);
int Partition2(int *arr, int lower, int upper, int size);
void Swap(int *arr, int x1, int x2);


int main(){
    printf("Anish Bhattacharya\t170111037\n");
    int size, i, a[100],b[100];
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements : ");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    printf("\n==Before Sorting==\n");
    PrintArray(a, size);
    QuickSort(a,0,size-1,size);
    printf("\n==After Sorting==\n");
    PrintArray(a, size);
    return 1;
}

void PrintArray(int pInt[100], int size) {
    for (int i = 0; i < size; i++)
        printf("%d  ", pInt[i]);
}

void QuickSort(int *arr, int lower, int upper, int size){
        if(lower<upper){
            int mid=Partition2(arr,lower,upper,size);
            QuickSort(arr,lower,mid-1,size);
            QuickSort(arr,mid,upper,size);
        }
}

//My algo; 2nd QS call should be mid+1
int Partition(int *arr, int lower, int upper, int size){
    int pivot = arr[lower];
    int tmp;
    int i=lower+1;
    int j=lower+1;
    while(j<=upper){
        if(arr[j]<pivot){
            Swap(arr,i,j);
            i++;
        }
        j++;
    }
    Swap(arr,i-1,lower);
    return i-1;
}

//Algo in class; 2nd QS call should be mid
int Partition2(int *arr, int lower, int upper, int size){
    int pivot = arr[lower];
    int tmp;
    int i=lower+1;
    int j=upper;
    while(i<=j){
        while(arr[i]<pivot && i<=upper)
            i++;
        while(arr[j]>=pivot && j>lower)
            j--;
        if(i<j){
            Swap(arr,i,j);
        }
    }
    Swap(arr,j,lower);

}
void Swap(int *arr, int x1, int x2){
    int tmp = arr[x1];
    arr[x1]=arr[x2];
    arr[x2]=tmp;
}
