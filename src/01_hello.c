#include <stdio.h>
#include <stdlib.h>

/*
 * Entry point for the foundational C coursework.
 * Demonstrates basic formatted output, standard library streams,
 * and standard process exit codes.
 */
int main(void) {
    const char *course_name = "C Systems & Foundations";
    const int academic_year = 2026;

    printf("==========================================\n");
    printf(" Welcome to %s (%d)\n", course_name, academic_year);
    printf(" Environment: GCC toolchain initialized\n");
    printf("==========================================\n");

    return EXIT_SUCCESS;
}
