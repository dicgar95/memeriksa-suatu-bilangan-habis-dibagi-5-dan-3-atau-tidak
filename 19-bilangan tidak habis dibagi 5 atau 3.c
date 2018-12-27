#include <stdio.h>
void main(/* arguments */) {
  /* code */int x;
  printf("Memeriksa suatu bilangan habis dibagi 5 dan 3 atau tidak\n");
  printf("Masukan suatu bilangan :");
  scanf("%i",&x );

  if (x%3==0 && x%5==0){
    /* code */printf("merupakan bilanga habis dibagi 5 dan 3\n");
  } else {
    /* code */printf("tidak habis dibagi 5 dan 3\n");
  }
}
