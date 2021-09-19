/*
 * =====================================================================================
 *
 *       Filename:  operator%.c
 *
 *    Description:  Operator sisa bagi dalam bahasa C
 *
 *        Version:  1.0
 *        Created:  09/19/2021 09:30:58 AM
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
    printf("%2d %s %d \t = %d\n", 10, "%", 3, (10 % 3));
    printf("%d2 %s %d \t = %d\n", 8, "%", 3, (8 % 3));
    printf("%d2 %s %d \t = %d\n", 15, "%", 4, (15 % 4));
return 0;

}
