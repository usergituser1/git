#include<stdio.h>
#define MAX 8
int arr[MAX]={1,54,46,87,9,1,5,45};
void swap(int *n1,int *n2);

void swap(int *n1,int *n2){
  int tmp;
  tmp = *n1;
  *n1=  *n2;
  *n2= tmp;
};
void bubble(int a[], int n);
void bubble(int a[], int n){
        int i,j;
        for (i=0;i<n-1;i++){
            for (j=0;j<n-i-1;j++){
              if (arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);};};};};

int main() {
      int i;


        printf("The un-ordered arr is : [ ");
      for (i=0;i<MAX;i++){
        printf("%d ",arr[i]);}
        printf(" ] \n");


        bubble(arr,MAX);


          printf("The ordered arr is : [ ");
        for (i=0;i<MAX;i++){
          printf("%d ",arr[i]);}
          printf(" ] \n");

  return 0;}
