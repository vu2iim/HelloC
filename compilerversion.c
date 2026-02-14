
#include <stdio.h>

int main() {

    printf("%ld\n", __STDC_VERSION__);

    #if defined(__STDC_VERSION__)
        if (__STDC_VERSION__ == 202311L) printf("C Standard: C23 (ISO/IEC 9899:2024)\n");
        else if (__STDC_VERSION__ == 201710L) printf("C Standard: C17 (ISO/IEC 9899:2018)\n");
        else if (__STDC_VERSION__ == 201112L) printf("C Standard: C11 (ISO/IEC 9899:2011)\n");
        else if (__STDC_VERSION__ == 199901L) printf("C Standard: C99 (ISO/IEC 9899:1999)\n");
        else if (__STDC_VERSION__ == 199409L) printf("C Standard: C95 (ISO/IEC 9899/AMD1:1995)\n");
        else printf("C Standard: Unknown newer standard, value: %ld\n", __STDC_VERSION__);
    #elif defined(__STDC__)
        printf("C Standard: C90 (ANSI C89 / ISO C90) (Macro __STDC__ is defined but __STDC_VERSION__ is not)\n");
    #else
        printf("C Standard: Pre-standard C (K&R C or similar) (No standard macros defined)\n");
    #endif
    return 0;
}
