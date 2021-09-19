/*
 * =====================================================================================
 *
 *       Filename:  statemen-switch.c
 *
 *    Description:  statemen switch diigunakan untuk melakukan pemilihan terhadap ekspresi
 *                  atau kondisi uang memiliki nilai-nilai konstanta.
 *
 *        Version:  1.0
 *        Created:  09/19/2021 02:02:07 PM
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

    // Mendeklarsikan variable untuk menampung nomor hari
    int nohari;

    // Meminta user untuk memasukan nomor hari 
    printf("Masukan nomer hari (1-7) : ");
    scanf("%d", &nohari);

    switch (nohari) {
        case 1: printf ("Hari ke-%d adalah hari minggu", nohari);
                break;
        case 2: printf ("Hari ke-%d adalah hari senin", nohari);
                break;
        case 3: printf ("Hari ke-%d adalah hari selasa", nohari);
                break;
        case 4: printf ("Hari ke-%d adalah hari rabu", nohari);
                break;
        case 5: printf ("Hari ke-%d adalah hari kamis", nohari);
                break;
        case 6: printf ("Hari ke-%d adalah hari jumat", nohari);
                break;
        case 7: printf ("Hari ke-%d adalah hari sabtu", nohari);
                break;
        default: printf("Nomor hari yang anda masukan salah");
                }
    return 0;
}
