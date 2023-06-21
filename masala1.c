#include <stdio.h>

int main(){

   int a=10;
   int b;
   int c;
   for(int b=1;b<=a ; b++){
     for(int c=1; c<=b; c++){
        printf("*");
     }
     printf("\n");
   }
}
