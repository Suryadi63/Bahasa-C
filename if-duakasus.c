/*
 * =====================================================================================
 *
 *       Filename:  if-duakasus.c
 *
 *    Description:  Contoh program untuk if dua kasus, Merupakan bentuk perluasan dari 
 *                  bentuk pertama.
 *
 *        Version:  1.0
 *        Created:  10/22/2021 12:46:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Suryadi (mn), imampwsp@gmail.com
 *        Company:  -
 *
 * =====================================================================================
 */

#include <stdio.h>

int main (void) {
    // Mendeklarasikan variable untuk menampung nilai yang akan diperiksa
    int x;

    // Menampilkan teks sebagai informasi bagi user
    printf("Masukkan nilai bilangan yang akan diperiksa : ");

    // Meminta user untuk memasukan nilai ke variable x
    scanf("%d", &x);

    // Melakukan pemeriksaan terhadap nilai yang dimasukan ke variable x
    if (x % 2 == 0)
        printf("%d merupakan bilangan GENAP", x);
    else 
        printf("%d Merupakan bilangan GANJIL", x);

    return 0;
}
