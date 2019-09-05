#include<stdio.h>
void PrintArray(int pInt[], int size);
int Missing(int *a, int lower, int upper);


int main(){

    printf("Anish Bhattacharya\t170111037\n");
    int size, i, a[100],x;
    printf("Enter size of first array : ");
    scanf("%d", &size);
    printf("Enter elements : ");
    for (i = 0; i < size-1; i++)
        scanf("%d", &a[i]);
    x = Missing(a,0,size-1);
    printf("Missing element is : %d",x);



    return 0;
}

int* Missing(int *a, int lower, int upper){
    if(lower==upper)
        return a[lower];
    int mid = lower+(upper-lower)/2;
    int *x = Missing(a,mid-1,upper);
    int *y = Missing(a,lower,mid);

}
