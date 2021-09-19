/*
 * =====================================================================================
 *
 *       Filename:  operator-relasional.c
 *
 *    Description:  Operator yang digunakan untuk menggunakan relasi atau hubungan dari dua 
 *                  dari dua buah nilai atau operand.
 *
 *        Version:  1.0
 *        Created:  09/19/2021 01:16:15 PM
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
    int x;
    
    printf("Masukan sebuah nilai bilangan bulat : "); 
    scanf("%d", &x);

    // Menggunakan operator relasional ==
    if (x % 2 == 0) { 
        printf("%d adalah bilangan genap", x);
    } else {
        printf("%d adalah bilangan ganjil", x);
    }
    return 0;
}
