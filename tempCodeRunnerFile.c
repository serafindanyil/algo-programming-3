#include <stdio.h>
#include <stdlib.h>

int main() {
    puts("My first program\n"); // виведення повідомлення
    puts("Serafin Danyil\n");
    short f;
    printf("short f = %u size of short=%ld \n", f, sizeof(f));
    double d;
    printf("double %lf size of double=%ld \n", d, sizeof(d));
    long l;
    printf("long %ld size of long=%ld \n", l, sizeof(l));
    char s = 'D'; 
    printf("Symbol %c =(%d)10S =(%#o) 8S ", s, s, s);
    printf("=(%#x)16S size char=%ld bait\n", s, sizeof(s));
    int a = 78; 
    printf("a=%d size int=%ld bait\n", a, sizeof(a));
    float b = 56.23;
    printf("b=%f=%e size float=%ld bait\n", b, b, sizeof(b));
    puts("\nPress Enter to continue...\n");
    getchar();
    return 0;
}
