#include <stdio.h>

int main(){
  int x = 2 * fgetc(stdin) - 2;
  int w = 9 / (x-10) * 10;
  return 0;
}
