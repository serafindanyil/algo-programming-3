// Перевірка чи ділиться число на 5

#include <stdio.h>

int main() {
    int num;
    printf("Введіть число: ");
    scanf("%d", &num);

    if (num % 5 == 0) {
        printf("Число %d ділиться на 5.\n", num);
    } else {
        printf("Число %d не ділиться на 5.\n", num);
    }

    return 0;
}
