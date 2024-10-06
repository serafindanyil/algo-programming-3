// Введіть рядок з назвою книги і прізвищем автора та повідомте, що така книга з’явилася в бібліотеці.

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 256  // Максимальний розмір рядків

int main() {
    char inputString[MAX_SIZE];
    char message[] = " — така книга з'явилася в бібліотеці.";
    char fullMessage[MAX_SIZE * 2];  // Для зберігання результату після з'єднання
    int inputLength, messageLength, totalLength;

    // Введення рядка з клавіатури
    printf("Введіть рядок (назва книги та прізвище автора): ");
    fgets(inputString, MAX_SIZE, stdin);

    // Видалення символа нового рядка, який додається fgets
    inputString[strcspn(inputString, "\n")] = 0;

    // Підрахунок кількості символів у введеному рядку
    inputLength = strlen(inputString);
    printf("Кількість символів у введеному рядку: %d\n", inputLength);

    // Підрахунок кількості символів у заданому повідомленні
    messageLength = strlen(message);
    printf("Кількість символів у повідомленні: %d\n", messageLength);

    // Додавання повідомлення до першого рядка
    strcpy(fullMessage, inputString);  // Копіюємо перший рядок
    strcat(fullMessage, message);      // Додаємо повідомлення

    // Підрахунок кількості символів у сумарному рядку
    totalLength = strlen(fullMessage);

    // Виведення результату
    printf("Сумарний рядок: %s\n", fullMessage);
    printf("Кількість символів у сумарному рядку: %d\n", totalLength);

    return 0;
}
