#include <stdlib.h>

#define BLD_IMPLEMENTATION
#include "bld.h"

int main(int argc, char **argv) {
  rebuild(argc, argv);
  cmd("tectonic main.tex");
  return 0;
}
