/*
 * =====================================================================================
 *
 *       Filename:  unary.c
 *
 *    Description:  Operator unary adalah operator yang digunakan untuk melakukan operasi matematika
 *                  yang hanya melibatkan satu operand.
 *                 +            Membuat nilai positif       +10
 *                 -            Membuat nilai negatif       -10
 *                 ++           Increment                   x++
 *                 --           Decrement                   ++x
 *
 *
 *        Version:  1.0
 *        Created:  09/18/2021 07:17:20 AM
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
    int x, y;

    /* Menjadikan nilai positif pada bilangan 5 dan memasukannya ke dalam variable x */
    x = +5;         // Sama artinya dengan x = 5;

    /* Menjadikan nilai negatif padan bilangan 10 dan memasukannya ke variable y */
    y = -10;

    printf("%d x (%d) = %d", x, y, x*y);
    
    return 0;

}



