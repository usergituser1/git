#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int sn(int* x);
int sn(int* x){
  int aa[3];
  int i=0;
  for (; i < 3; i++) {
    scanf("%d",&aa[i]);
      if (i==0) continue;
    else {
      if (aa[i]<=*(aa+(i-1))){
          printf("Pls insert higher nr for array:\n");
          scanf("%d\n",&aa[i]);
        return *(aa+i);};
      };
  }


};

int main() {
    int arr[3];
    int j=0;
//printf("%d",strlen(a));
  &arr[0]=sn(&arr);
  for (; j < 3 ; j++){
    printf("%d ",sn(*arr));
}
  return 0;
}
