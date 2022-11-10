//
//  options.h
//  assignment5_35L
//
//  Created by Evan Li on 2022-11-08.
//

#ifndef options_h
#define options_h
#include <stdbool.h>



struct options {
    /* Check arguments.  */
    bool valid; //whether the input is valid
    long long nbytes; // #of bytes to output
    char* r_src; // string that holds file path if necessary
    int block_size; // outputted buffer size in kB
};

int check_args (int argc, char **argv, long long* nbytes, bool* valid);

#endif /* options_h */
