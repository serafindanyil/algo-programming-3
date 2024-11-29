#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define STR1 "Today we are"
#define STR2 "learning how to "
#define STR3 "\"Programm on C++\""
#define STR4 "Алгоритми та структури даних Сиротюк"

int main()
{
    printf("|%s|\n", STR1);
    printf("|%70.12s|\n", STR2);
    printf("|%70.24s|\n", STR3);
    printf("|%20.5s|\n", STR1);
    printf("|%20.8s|\n", STR2);
    printf("|%-20.9s|\n", STR3);
    printf("|%s|\n", STR4);
    printf("|%-87.53s|\n", STR4);
    printf("|%70.18s|\n", STR4);

    system("pause");
    return 0;
}
