/*
 * =====================================================================================
 *
 *       Filename:  inialisasi-for.c
 *
 *    Description:  Melakukan beberapa inialisasi dalam struktur for
 *
 *        Version:  1.0
 *        Created:  09/25/2021 12:18:37 AM
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
    int b=0;
    for (int a=0, a < 5; a++) {
        printf ("Baris ke-%d : a = %d,  b = %2d\n", a+1, a, b);
        b += 5;
    } return 0;
}
