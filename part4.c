// Обчисліть суму введених 15 дійсних чисел та суму і кількість тільки від’ємних чисел. При введенні числа –100 цикл завершується (оператор break).


#include <stdio.h>

int main() {
    float number;
    float totalSum = 0;
    float negativeSum = 0;
    int negativeCount = 0;
    int count = 0;

    // Цикл для введення 15 чисел або завершення при введенні -100
    while (count < 15) {
        printf("Введіть число #%d: ", count + 1);
        scanf("%f", &number);

        // Перевірка на введення числа -100 для завершення циклу
        if (number == -100) {
            printf("Введено число -100. Цикл завершено.\n");
            break;
        }

        // Додавання числа до загальної суми
        totalSum += number;

        // Перевірка на від'ємне число
        if (number < 0) {
            negativeSum += number;
            negativeCount++;
        }

        count++;
    }

    // Виведення результатів
    printf("Загальна сума введених чисел: %.2f\n", totalSum);
    printf("Сума від'ємних чисел: %.2f\n", negativeSum);
    printf("Кількість від'ємних чисел: %d\n", negativeCount);

    return 0;
}
