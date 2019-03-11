#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main() {
    int a[3];
    int i=0,j=0;
//printf("%d",strlen(a));
for (; i < 3; i++) {
  scanf("%d",&a[i]);
    if (i==0) continue;
  else {
    if(a[i]<a[i-1])
    {
      printf("Pls insert higher nr for array:\n");
      scanf("%d\n",&a[i]);

    }
  }
}
return 0;
}
    /*
    if (a[i]<=*(a+(i-1))){
        printf("Pls insert higher nr for array:\n");
        scanf("%d\n",&a[i]);
      };
    };
}
  for (; j < 3 ; j++){
    printf("%d ",a[j]);
}
  return 0;
}
*/
