/*
 * =====================================================================================
 *
 *       Filename:  operatoror.c
 *
 *    Description:  operator or akan menghasilkan nilai salah apabila semua operandnya 
 *                  bernilai salah, selain itu operasi tsb juga akan menghasilkan nilai benar.
 *
 *                  x       y       x||y
 *                  1       1       1
 *                  1       0       1
 *                  0       1       1
 *                  0       0       0
 *
 *
 *        Version:  1.0
 *        Created:  09/19/2021 01:05:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Suryadi (mn), imampwsp@gmail.com
 *        Company:  -
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void) {

    printf("1 || 1 = %d\n", (1 || 1));
    printf("1 || 0 = %d\n", (1 || 0));
    printf("0 || 1 = %d\n", (0 || 1));
    printf("0 || 0 = %d\n", (0 || 0));

    return 0;

}

