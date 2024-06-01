#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main()
{
  set_affinity_mask(5);
  while (1)
  {
  }
  
  exit(0, "");
}
