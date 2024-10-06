// Використання оператора switch для виводу назв дерев

#include <stdio.h>
#include <ctype.h> 

int main() {
    char letter;
    printf("Введіть першу букву назви дерева: ");
    scanf(" %c", &letter);

    // Приводимо введену букву до нижнього регістру
    letter = tolower(letter);

    switch (letter) {
        case 'd':
            printf("Дуб\n");
            break;
        case 'b':
            printf("Береза\n");
            break;
        case 's':
            printf("Сосна\n");
            break;
        case 'k':
            printf("Клен\n");
            break;
        case 't':
            printf("Тополя\n");
            break;
        default:
            printf("Невідоме дерево.\n");
            break;
    }

    return 0;
}
