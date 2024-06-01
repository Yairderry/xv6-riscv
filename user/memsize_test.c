#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main()
{
  int size = memsize();
  printf("Memory size in bytes: %d\n", size); 

  void *ptr = malloc(20000);

  size = memsize();
  printf("Memory size in bytes: %d\n", size); 

  free(ptr);

  size = memsize();
  printf("Memory size in bytes: %d\n", size); 

  exit(0, "");
}
