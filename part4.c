// Заповніть масив цілих чисел випадковими числами від -50 до 50 та відсортуйте за убуванням масив чисел методом прямого упорядкування.

#include <stdio.h>
#include <stdlib.h>  // Для функцій rand() і srand()
#include <time.h>    // Для ініціалізації генератора випадкових чисел

#define SIZE 10  // Розмір масиву

// Функція для сортування масиву методом прямого упорядкування (вибору) за спаданням
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;  // Знаходимо індекс максимального елемента
            }
        }
        // Обмінюємо місцями найбільший елемент з поточним
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

// Функція для виведення масиву
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[SIZE];

    // Ініціалізація генератора випадкових чисел
    srand(time(0));

    // Заповнення масиву випадковими числами від -50 до 50
    for (int i = 0; i < SIZE; i++) {
        arr[i] = (rand() % 101) - 50;  // Генеруємо числа від -50 до 50
    }

    // Виведення масиву до сортування
    printf("Масив до сортування:\n");
    printArray(arr, SIZE);

    // Сортування масиву методом прямого упорядкування за спаданням
    selectionSort(arr, SIZE);

    // Виведення масиву після сортування
    printf("Масив після сортування:\n");
    printArray(arr, SIZE);

    return 0;
}
