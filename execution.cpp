#include<stdio.h>
int main(){

    printf("Anish Bhattacharya\t170111037\n");
    int x,n,k,a[10000],pos,j=0,i;
    printf("How many people are present : ");
    scanf("%d",&n);
    x=n;
    printf("Successive persons that are going to die : ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
        a[i]=i+1;
    if(x<=0)
        printf("There are not anyone to kill");
    else{
        while(x!=1){
        j=(j+(k-1))%x;
        pos = j;
        for(i=pos;i<x;i++)
            a[i]=a[i+1];
        x--;    }
    printf("\nYou should really sit at %d, else you die!",a[0]);}
    return 0;
}
