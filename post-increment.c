/*
 * =====================================================================================
 *
 *       Filename:  post-increment.c
 *
 *    Description:  Menaikan nilai yang terdapat pada sebuah variable setelah nilai variable 
 *                  dari variable tsb di proses dalam program.
 *
 *        Version:  1.0
 *        Created:  09/18/2021 08:55:31 PM
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
    int x = 10;

    printf("Nilai x awal\t=%d\n", x);
    printf("Nilai x++ \t=%d\n", x++);
    printf("Nilai x akhir \t=%d\n", x);

    return 0;
}

