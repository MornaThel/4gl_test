MAIN
  DEFINE res_sqrt INT
  
  call fgl_getkey()
  LET res_sqrt = c_sum(2,3)
  DISPLAY res_sqrt AT 2,1
  call fgl_getkey()
  
END MAIN

FUNCTION fgl_function_sum(a1, a2)
  DEFINE a1, a2 INT
  DEFINE res INT
  LET res = a1 + a2
  RETURN res
END FUNCTION