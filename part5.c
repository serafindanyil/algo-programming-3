// Розробіть програму, що виконує обчислення з числами, які вводяться з клавіатури (оператор for) і знаходяться в заданому діапазоні (оператор do…while), та виводить на екран результати обчислень і кількість введених та обчислених чисел. Загальна кількість чисел, що вводяться, не повинна перевищувати 12, інакше програма завершується (оператор return -1;).

#include <stdio.h>
#include <math.h>  

int main() {
    int totalCount = 0;  
    int validCount = 0; 
    float number;
    float atanResult, acotanResult;

    // Константи для обмеження діапазону
    float minRange = 1.0 * M_PI;
    float maxRange = 20.0 * M_PI;

    // Цикл для введення не більше ніж 12 чисел
    for (int i = 0; i < 12; i++) {
        // Введення числа з клавіатури
        printf("Введіть число #%d: ", i + 1);
        scanf("%f", &number);

        totalCount++;  

        // Перевірка на діапазон
        if (number >= minRange && number <= maxRange) {
            validCount++; 

            // Обчислення арктангенсу та арккотангенсу
            atanResult = atan(number);
            acotanResult = atan(1.0 / number);

          
            printf("Число: %.2f, arctan: %.4f, arccotan: %.4f\n", number, atanResult, acotanResult);

  
            if (validCount == 5) {
                break;
            }
        }
    }


    if (totalCount > 12) {
        printf("Кількість введених чисел перевищує 12. Програма завершена.\n");
        return -1;
    }


    printf("Загальна кількість введених чисел: %d\n", totalCount);
    printf("Кількість чисел в діапазоні [1.0π, 20.0π]: %d\n", validCount);

    return 0;
}
