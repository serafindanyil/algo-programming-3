// Перевірка додатності та кратності 5 або умова з -100

#include <stdio.h>

int main() {
    int num;
    printf("Введіть число: ");
    scanf("%d", &num);

    if (num > 0) {
        if (num % 5 == 0) {
            printf("Число %d додатне і кратне 5.\n", num);
        } else {
            printf("Число %d додатне, але не кратне 5.\n", num);
        }
    } else {
        if (num < -100) {
            printf("Число %d менше за -100.\n", num);
        } else {
            printf("Число %d не додатне і не менше за -100.\n", num);
        }
    }

    return 0;
}
