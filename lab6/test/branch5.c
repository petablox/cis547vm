#include <stdio.h>

void f() {
  int in = fgetc(stdin);
  unsigned int a = 10;
  unsigned int b = 2;

  if(in > 0){
	b = in + b; 
  }else if(in == 0){
	b = 0;
  }else{
	b = in - b;
  }

  int out = a / b;
}
