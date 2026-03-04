#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int n = 10;
  if(argc >= 2)
    n = atoi(argv[1]);

  int r = settickets(n);
  if(r < 0)
    printf(1, "settickets(%d) FAILED\n", n);
  else
    printf(1, "settickets(%d) OK\n", n);

  exit();
}
