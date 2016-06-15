#include "fglsys.h"
#include "fglapi.h"
#include "fgifunc.h"

int c_sum(int args) {

  int result = 0;
  
  fgl_start("case3.exe");
    fgl_call(fgl_function_sum,2);
  fgl_end;
  
  popint(&result);
  result = result * result;
  
  retint(result);
  return(1);
}

cfunc_t usrcfuncs[] = {
  {"c_sum", c_sum, 2},
  { 0, 0, 0 },
};


