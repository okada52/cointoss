#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
  
  int countH=0,countT =0;
  printf("Tossing a coin...\n");
  srand((unsigned)time(NULL));
    for(int i=0;i<3;i++){
    int c;
    c = rand() % 2 + 1;
    if(c==1){
       printf("Round %d: Heads\n",i+1);
      countH++;
    }else{
       printf("Round %d: Tails\n",i+1);
      countT++;
    }
      
  }
  printf("Heads: %d, Tails: %d\n",countH, countT);
  return 0;
  }