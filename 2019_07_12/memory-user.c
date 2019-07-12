#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main (int argc, char** argv) {

  if( argc < 2){
  	printf("no hay argmentos\n");
  	return 1;
  }

int bytes = atoi(argv[1]);

int *array = malloc(bytes*1024*1024*(sizeof(int)));
if(array == NULL){
  printf("memoria no asignada\n");
  exit(-1);
}

int i=0;
for (; 1 < bytes*1024*1024; i++)
  array[i]=i;
  sleep(10);

return 0;
}
