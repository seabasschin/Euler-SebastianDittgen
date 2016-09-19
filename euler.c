#include <stdio.h>
#include <stdlib.h>

//Sebastian Dittgen, PD 5
//numero uno

int mult(){
  int i = 3;
  int sum = 0;
  while(i < 1000) {
    if( i % 3 == 0) {
      sum += i;
    }
    if(i % 5 == 0) {
      sum += i;
      }
    i ++;
  }
  return sum;
}

//numero cinco

int smallmult(){
  int count = 1;
  int n = 1;
  while(count <= 20){
    if(n % count == 0){
      count ++;
    }
    else{
      n = n * count;
      count ++;
    }
  }
  return n;
}








int main(){
  printf("problem1: %d\n", mult());
  printf("problem5:%d\n", smallmult());

}