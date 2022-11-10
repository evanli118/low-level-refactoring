//
//  options.c
//  assignment5_35L
//
//  Created by Evan Li on 2022-11-08.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "options.h"
#include <errno.h>
#include <getopt.h>
#include <string.h>
#include <ctype.h>

int check_args (int argc, char **argv, long long* nbytes, bool* valid)
{
    /* Check arguments.  */
    if (argc == 2)
    {
        char *endptr;
        errno = 0;
        *nbytes = strtoll (argv[1], &endptr, 10);
    if (errno)
        perror (argv[1]);
    else
        *valid = !*endptr && 0 <= *nbytes;
    }
    if (!*valid)
    {
        fprintf (stderr, "%s: usage: %s NBYTES\n", argv[0], argv[0]);
        return 1;
    }

    /* If there's no work to do, don't worry about which library to use.  */
    nbytes == 0 ;
    return 0;
}
