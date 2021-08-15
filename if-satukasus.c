/*
 * =====================================================================================
 *
 *       Filename:  if-satukasus.c
 *
 *    Description:  Contoh program if satu kasus
 *
 *        Version:  1.0
 *        Created:  08/15/2021 12:07:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Suryadi (mn), imampwsp@gmail.com
 *        Company:  -
 *
 * =====================================================================================
 */

#include <stdio.h>

int main () {
    int x;

    /* Meminta masukan nilai yang akan ditampung kedalam variable X */
    printf("Masukan sebuah bilangan bulat : ");
    scanf("%d", &x);

    /* Melakukan pengecekan terhadap nilai x yang telah dimasukan */
    if (x > 0)
        printf("\n%d adalah bilangan positif\n", x);

    printf ("Statemen diluar blok control pengecekan");

    return 0;
}
