#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

//---defining a macro-- still under study---
/*
#define swap(a,b) a=a^b;\
                  b=a^b;\
                  a=b^a;
*/
/*partition for qsort*/
void swap(int n1, int n2);
void swap(int n1, int n2){
      int temp = int arr[n1];
      int arr[n1] = arr[n2];
      int arr[n2] = tmp;};

int partition(int arr[],int low,int high);
int partition(int arr[],int low,int high){
/*
        int pivot=arr[high];

        int i=(low-1), j;

        for (j=low;j<=high-1;j++){
                if (arr[j]<=pivot) {
                    i++;
                    swap(arr[i],arr[j]);};};
                swap(arr[i+1],arr[high]);
                    return(i+1);};*/
            int leftPointer = low -1;
            int rightPointer = high;

            while(true) {
                 while(intArray[++leftPointer] < pivot) {
                 /*do nothi*/}

                       while(rightPointer > 0 && intArray[--rightPointer] > pivot) {
                          /*do nothing*/}

                       if(leftPointer >= rightPointer) {
                          break;} else {
                          printf(" item swapped :%d,%d\n", intArray[leftPointer],intArray[rightPointer]);
                          swap(leftPointer,rightPointer);}}
                          printf(" pivot swapped :%d,%d\n", intArray[leftPointer],intArray[right]);
                          swap(leftPointer,right);
                          printf("Updated Array: ");
                          display();
                          return leftPointer;}

void quicksort(int arr[],int low,int high);
void quicksort(int arr[],int low,int high){
        int pi;
                if (low<high){
                        pi=partition(arr,low,high);
                        quicksort(arr,low,pi-1);
                        quicksort(arr,pi+1,high);}};


int main(int argc, char** argv) {
    int a1[SIZE], a2[SIZE],i,j,m_arr[SIZE*2];

    printf("Insert nrs :\n");
    printf("Insert numbers for first array:\n");
    for(i=0;i<SIZE;i++){
            scanf("%d",&a1[i]);}
        printf("inserted nrs are: ");
        for(i=0;i<SIZE;i++){
        printf("%d ",a1[i]);}
       printf("\n");

    printf("Insert numbers for the second array:\n");
    for(i=0;i<SIZE;i++){
            scanf("%d",&a2[i]);}
        printf("inserted nrs are: ");
        for(i=0;i<SIZE;i++){
        printf("%d ",a2[i]);}
       printf("\n");
/*----creating a new array---- && ----assigning  vals of second array----*/

       for(i=0;i<SIZE;i++){
       m_arr[i]=a1[i];}
       /*adding 2nd array*/

       for (i=0,j=SIZE; j < (SIZE*2) && i < SIZE;j++,i++ ){
        m_arr[j]=a2[i];}

       /*printing array */
       printf("The merged array is : ");
       for (i=0;i<(SIZE*2);i++){
           printf("%d ",m_arr[i]);}
       printf("\n");

       /*quicksort*/
       quicksort(m_arr,0,(SIZE+SIZE));

       printf("SOrted the array : \n");
       for (i=0;i<(SIZE*2);i++){
           printf("%d ",m_arr[i]);}
       printf("\n");





    return (EXIT_SUCCESS);
}
