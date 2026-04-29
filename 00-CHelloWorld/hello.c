/* hello.c
 * Programa que imprime Hello, World! en stdout
 * con la version del estandar C utilizado.
 * Anderson Benjamin Ramirez Delgado
 * 2026
 */

#include <stdio.h>

int main(void) {
    #if defined(__STDC_VERSION__)
        printf("Hello, World! (C standard: %ldL)\n", __STDC_VERSION__);
    #else
        printf("Hello, World!\n");
    #endif
    return 0;
}