#include <iostream>

void* hello(void* p) {
	  printf("%s\n", p);
	  return NULL;
  }

int main() {
  pthread_t howdy[10];
  char msg[] = "Hello ITCSsomething!";
  for (int i=0; i<10; i++) {
	  pthread_create(&howdy[i], NULL, hello, msg);
  }
  for (int i=0; i<10; i++) {
	  pthread_join(howdy[i], NULL);
  }
  return 0;

}