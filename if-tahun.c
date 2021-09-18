/*
 * =====================================================================================
 *
 *       Filename:  if-tahun.c
 *
 *    Description:  Contoh program if untuk menentukan tahun
 *
 *        Version:  1.0
 *        Created:  08/20/2021 03:46:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Suryadi (mn), imampwsp@gmail.com
 *        Company:  -
 *
 * =====================================================================================
 */

#include<stdio.h>

int main() {
    long tahun;
    printf("Masukan tahun yang akan diperiksa :");
scanf("%ld", &tahun);
/* Mengecek tahun kabisat */
if ((tahun % 4 == 0 ) &&
        ((tahun % 100 != 0) || (tahun % 400 = 0)))
    printf("\n%d merupakan tahun kabisat", tahun);
return 0;
}
