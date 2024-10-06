// Програма в залежності від введеної цифри виво- дить назву дня тижня.

#include <stdio.h>

int main() {
    int month;
    
    // Запитуємо користувача ввести номер місяця
    printf("Введіть номер місяця (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 2:
        case 3:
            printf("Це 1 квартал.\n");
            break;
        case 4:
        case 5:
        case 6:
            printf("Це 2 квартал\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Це 3 квартал.\n");
            break;
        case 10:
        case 11:
        case 12:
            printf("Це 4 квартал\n");
            break;
        default:
            printf("Введіть номер місяця від 1 до 12\n");
            break;
    }

    return 0;
}


