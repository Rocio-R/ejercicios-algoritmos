#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int a = atoi(argv[1]);
  int b = atoi(argv[2]); 
  printf("Random entre %d y %d\n", a, b);
  return 0;
}

