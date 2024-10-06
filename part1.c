// Cума чисел, кратних 5, використовуючи while

#include <stdio.h>

int main() {
    int n, sum = 0, lastTerm = 0;

    printf("Введіть кількість циклів: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Кількість циклів повинна бути позитивною!\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        lastTerm = i * 5;  // Останнє кратне число 5
        sum += lastTerm;   // Додавання до суми
    }

    // Виведення результату
    printf("Сума чисел, кратних 5: %d\n", sum);
    printf("Останнє число: %d\n", lastTerm);
    printf("Кількість циклів: %d\n", n);

    return 0;
}

