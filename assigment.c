/*
 * =====================================================================================
 *
 *       Filename:  assigment.c
 *
 *    Description:  Operator Assigment adalah operator yang digunakan untukk memasukan nilai
 *                  ke dalam suatu variable yang dilambangkan dengan sama dengan (=)
 *
 *        Version:  1.0
 *        Created:  09/18/2021 06:43:05 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Suryadi (mn), imampwsp@gmail.com
 *        Company:  -
 *
 * =====================================================================================
 */

#include<stdio.h>

int main (void) {
    
    /* Mendeklarasikan variable a,b,c dan d ke dalam variable int */
    int a, b, c, d;

    /*Melakukan assigment ke dalam variable a dengan nilai 10 */
    a = 10;

    /* Melakukan assigment ke dalam variable b, dan c dengan nilai 35 */
    b = c = 35;

    /* Melakukan assigment ke dalam variable d dengan nilai yang terdapat di variable a */
    d = a;

    /* Menampilkan nilai yang terdapat di variable a, b, c, dan d */

    printf("Menampilkan nilai dari variable a %d\n", a);
    printf("Menampilkan nilai dari variable b %d\n", b);
    printf("Menampilkan nilai dari variable c %d\n", c);
    printf("Menampilkan nilai dari variable d %d\n", d);

    return 0;
}
