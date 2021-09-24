/*
 * =====================================================================================
 *
 *       Filename:  for-char.c
 *
 *    Description:  Menggunakan variable char
 *
 *        Version:  1.0
 *        Created:  09/25/2021 12:13:47 AM
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
    for (char j='A'; j<='A'; j++) {
    printf("%c = %d\n", j, j);
}
return 0;

}
