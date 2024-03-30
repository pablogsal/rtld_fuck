#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int evil() {
  printf("Hello world!\n");
  return 0;
}
