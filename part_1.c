#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    puts("My first program\n"); // виведення повідомлення
    short f;
    printf("short %u size of short=%d \n", f, sizeof(f));
    double d;
    printf("double %lf size of double=%d \n", d, sizeof(d));
    long l;
    printf("long %1d size of long=%d \n", l, sizeof(l));
    char s = 'A'; // визначення символу
    printf("Symbol %c =(%d)10S =(%#o) 8S ", s, s, s);
    printf("=(%#x)16S size char=%d bait\n", s, sizeof(s));
    int a = 78; // визначення цілої змінної
    printf("a=%d size int=%d bait\n", a, sizeof(a));
    float b = 56.23; // визначення дійсної змінної
    printf("b=%f=%e size float=%d bait\n", b, b, sizeof(b));
    puts("\nPress any key and Enter...\n");
    getchar();
    return 0;
}