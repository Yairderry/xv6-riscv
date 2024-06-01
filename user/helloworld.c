#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main()
{
  char *str = "Hello World xv6";

  // Can be done using write system call
  // write(1, str, strlen(str));

  printf(str);
  
  exit(0, "");
}
