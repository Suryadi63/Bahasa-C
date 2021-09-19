/*
 * =====================================================================================
 *
 *       Filename:  operator-kali.c
 *
 *    Description:  Operator perkalian dalam bahasa C
 *
 *        Version:  1.0
 *        Created:  09/19/2021 09:16:35 AM
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

    // Mendeklarasikan variable a dan b 
    int a = 12, b = 3;

    // Mendeklarasikan variable c sebangai variable penampung hasil perkalian
    int c;

    // Operator perkalian
    c = a * b;

    // Menampilkan hasil perkalian
    printf("%d", c);

    return 0;

}
