#include<stdio.h>
int main(int n,char* args[]) {
  int numbers=0;
  int prime=3;
  if (n==2){
    numbers = atoi(args[1]);
  }
  printf("Calcul des %d premiers nombres premiers\n" ,numbers);
  while(numbers>0){
    int c;
    for(c=2;c<=prime-1;c++){
      if(prime%c==0){
        break;
      }
    }
    if(c==prime){
      numbers--;
      //printf(".");
    }
    prime++;
  }
  printf("\n");
  return 0;
}