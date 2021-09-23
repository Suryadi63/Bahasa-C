/*
 * =====================================================================================
 *
 *       Filename:  switch-karakter.c
 *
 *    Description:  Contoh program yang akan menentukan nilai dari suatu operasi aritmatika.
 *
 *        Version:  1.0
 *        Created:  09/20/2021 11:06:16 AM
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
    int operand1, operand2;
    char optr;      // Variable untuk menampung operator yang akan digunakan.

    printf("Masukan operator yang diinginkan \t: ");
    scanf("%c", &optr);

    printf("Masukan nilai untuk operand ke-1 \t:");
    scanf("%d", &operand1);

    printf("Masukan nilai untuk operand ke-2 \t:");
    scanf("%d", &operand2);

    switch (optr) {
        case '+':           //Penjumlahan.
            {
                printf("%d + %d = %d", operand1 + operand2, (operand1 + operand2));
                break;
            }
        case '-':           //Pengurangan.
            { 
                printf("%d - %d = %d", operand1 - operand2, (operand1 - operand2));
                break;
            }
        case '/':           //Pembagian.
            {
                printf("%d / %d = %d", operand1 / operand2, (operand1 / operand2));
                break;
            }
        case '*':           //Perkalian.
            {
                printf("%d * %d = %d", operand1 * operand2 (operand1 * operand2));
                break;
            }
        case '%':           //Hasil dari sisa bagi.
            {
                printf("%d % %d = %d", operand1 % operand2, (operand1 % operand2));
                break;
            }
    }       // Akhir switch.

    return 0;

}
