#include<stdio.h>
int main(void){
int size;
printf("\nEnter the size of the array: ");
scanf("%d",&size);
int *A;
A=(int*)malloc(size*sizeof(int));
printf("\nEnter the values of the array: ");
for(int i=0;i<size;i++)
    scanf("%d",&A[i]);
printf("\nThe values of the array are: ");
for(int i=0;i<size;i++)
    printf("%d\t",A[i]);
}
