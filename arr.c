#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN  3

int scan_int(int val);  //sscan for element
int scan_int(int val){
      scanf("%d\n",&val);

  return val;
};

int main() {
    int a[LEN];
    printf("%d\n",strlen(a) );
    int i=0 , j=0 ,sval=0; //scan val to assign val in arr
//printf("%d",strlen(a));
for (; i < LEN; i++) {
  a[i]=scan_int(sval); //assignment of val in arr
    if (i==0) || (a[i]<=*(a+(i-1))){
        printf("Pls insert higher nr for array:\n");
        a[i]=scan_int(sval);
      };
    };
  }

  for (; j < LEN; j++){
    printf("%d ", a[j]);
}
  return 0;
}
