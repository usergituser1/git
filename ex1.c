#include<stdio.h>
#include<stdlib.h>


#define SIZE 3


void main(){
  system("clear");
    int arr1[SIZE],arr2[SIZE],t_size,i,,m_num,k,m_arr[SIZE+SIZE];
printf("ENter aray numbers:\n" );
      for (i=0;i<SIZE;i++){
        scanf("%d",&arr1[i]);}
        for (i=0;i<SIZE;i++){
          printf("%d ",arr1[i]);}
          printf("\n");

printf("ENTer 2nd array nrs:\n" );
      for (i=0;i<SIZE;i++){
        scanf("%d",&arr2[i]);}
        printf("Inserted nrs are:\n");
        for (i=0;i<SIZE;i++){
          printf("1: %d ",arr1[i]);
          printf("2: %d ",arr2[i]);
          printf("\n");}
          printf("\n");


              for (i=0;i<SIZE;i++){
                m_arr[i]=arr1[i];}
          t_size=SIZE*2;
          for(i=0, k=SIZE; k<t_size && i<SIZE; i++, k++){
            m_arr[k]=arr2[i];}
 printf("The merged array is: ");
      for (i=0;i<t_size;i++) {
        printf("%d ",m_arr[i] );}
                printf("\n" );    //sorting algo :: to be continued ::
      /*  for (i=0;i<t_size;i++){

            for (k=0;k<t_size;k++) {


            }}*/

  getchar();
}
