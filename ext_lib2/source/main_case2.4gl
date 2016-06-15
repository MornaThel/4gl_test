main
  define i int
  DEFINE out_i, out_system INT
  define c char
  define var_char CHAR(512)
  
  call fgl_getkey()
  LET var_char="dir"
  LET i = LENGTH(var_char)
  display i
  call fgl_getkey()
  
  call f_c_system(var_char, i) RETURNING out_i, out_system
  
  display out_i, out_system
  display "OK" at 2,2
  prompt "" for char c
      
end main
