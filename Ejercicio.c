#include <stdio.h>
#include <stdlib.h>

int  main()
{ 
  int res = 0;
  int i;

  for(i=0; i < 11; i++)
  {
      res = res + i;
  }
  printf("Solucion 1 El numero es: %d\n", res);
  
  
  res = 0;
  for(i = 0; i < 11; i++)
  {
      res = res + i;
  }
  printf("Solucion 2 El numero es: %d\n", res);
  
  
  res = 0;
  for(i =0 ; i < 11; i++)
  {
      res = res + i;
  }
  printf("Solucion 3 El numero es: %d\n", res);
  
  
  res = 0;
  for(i=1; i < 11; i++)
  {
      res = res + i;
  }
  printf("Solucion 4 El numero es: %d\n", res);
  
  return 0;
  
}
  
