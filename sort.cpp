#include<stdio.h>
#include<ctype.h>
int a[100];
int l=0;

void print_array(){
    printf("\n\nArray : \n");
    for(int i=0;i<=l;i++)
        printf("%d   ",a[i]);

}

void insertion_sort(int b){
  //  print_array();
    int k = b;
    int i = l-1;
while(a[i]>k){

    a[i+1]=a[i];
    if(i==0){
        a[i]=k;
        print_array();
        return;
    }
    i--;
}
a[i+1]=k;
print_array();
}

int main(){
char x;
int c;
while(1){
printf("\nInsert element : ");
scanf("%d",&c);
insertion_sort(c);
l++;
printf("\nPress 1 to continue : ");
scanf("%d",&c);
if(c!=1){
    printf("==EXITING!==");
    return 0;
}
}

return 0;
}
