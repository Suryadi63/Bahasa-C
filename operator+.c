/*
 * =====================================================================================
 *
 *       Filename:  operator+.c
 *
 *    Description:  Oprator penjumlahan dalam bahasa C
 *
 *        Version:  1.0
 *        Created:  09/18/2021 09:07:42 PM
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

    //Mendeklarasikan Variable
    int a = 12, b = 13;

    //Mendeklarasikan Variable C sebagai penampung dari hasil penjumlahan 
    int c;

    //Operator penjumlahan
    c = a + b;

    //Menampilkan nilai hasil penjumlahan 
    printf("%d", c);

    return 0;

}
