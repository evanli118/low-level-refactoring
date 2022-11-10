//
//  output.c
//  assignment5_35L
//
//  Created by Evan Li on 2022-11-08.
//

#include "output.h"
#include <stdio.h>
#include <limits.h>

bool writebytes (unsigned long long x, int nbytes)
{
  do
    {
        if (putchar (x) < 0){
            return false;
        }
      x >>= CHAR_BIT; //shift right by how ever big a char is 
      nbytes--;
    }
  while (0 < nbytes);

  return true;
}
