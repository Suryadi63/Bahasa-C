/*
 * =====================================================================================
 *
 *       Filename:  operator-bagi.c
 *
 *    Description:  Operator pembagian dalam bahasa C
 *
 *        Version:  1.0
 *        Created:  09/19/2021 09:21:11 AM
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

    // Mendeklarasikan variable a, b, dan c.
    int a = 10, b = 3, c;

    // Mendeklarasikan variable x, y, dan z.
    double x = 10.0, y = 3.0, z;

    // Melakukan pembagian pada bilangan bulat.
    c = a / b;

    // Melakukan pembagian pada bilangan rill(koma).
    z = x / y;

    // Menampilkan nilai hasil pembagian
    printf("Bilangan bulat \t\t= %d\n", c);
    printf("Bilangan rill(koma) \t= %f\n", z);

    return 0;

}
