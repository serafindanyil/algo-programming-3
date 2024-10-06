// Пошук найбільшого числа та перевірка на більше або не більше за 500

#include <stdio.h>

int max(int array[], int size) {
    int maxValue = array[0];
    
    for (int i = 1; i < size; i++) {
        if (array[i] > maxValue) {
            maxValue = array[i];
        }
    }
    
    return maxValue;
}

int main() {
    float num1, num2, num3, num4;
    printf("Введіть чотири дійсних числа: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    int array[4] = {(int)num1, (int)num2, (int)num3, (int)num4};

    int maxValue = max(array, 4);

    printf("Найбільше число: %d\n", maxValue);

    if (maxValue > 500) {
        printf("Число більше за 500.\n");
    } else {
        printf("Число не більше за 500.\n");
    }  

    return 0;
}


