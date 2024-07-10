#include <stdio.h>

enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main()
{
    // Enumerated data type
    enum Day today = Wednesday;

    // Printing value (as integer)
    printf("Enumerated data type:\n");
    printf("Today is day number %d\n", today);

    return 0;
}

