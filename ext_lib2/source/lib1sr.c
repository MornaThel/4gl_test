#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <process.h>
#include <direct.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "fglsys.h"
#include "fglapi.h"
#include "fgifunc.h"


int f_c_system(int nparms) {
  char x_komm[512];
  int  i;

  popint(&i);
  popquote(x_komm,511);
  
  x_komm[i]='\0';
  retint(system(x_komm));
  retint(i);
  
  return(1);
}

cfunc_t usrcfuncs[] = {
  {"f_c_system", f_c_system, 2},
  { 0, 0, 0 },
};


