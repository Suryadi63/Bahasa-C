/*
 * =====================================================================================
 *
 *       Filename:  operator-.c
 *
 *    Description:  Operator pengurangan di bahasa C
 *
 *        Version:  1.0
 *        Created:  09/19/2021 09:08:10 AM
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
    int a = 25, b = 12;

    // Mendeklarasikan c sebagai variable penampung hasil pengurangan
    int c;

    // operasi pengurangan 
    c = a - b;

    // Menampilkan hasil pengurangan
    printf("%d", c);

    return 0;

}
