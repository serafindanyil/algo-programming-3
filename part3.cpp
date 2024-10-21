// Визначте масив з 3-х покажчиків на рядки з назвами книги, глави та параграфа. У другому рядку підрахуйте кількість букв 'с'.

#include <iostream>
#include <cstring>

int countCharInString(const char *str, char ch)
{
  int count = 0;
  while (*str != '\0')
  {
    if (*str == ch)
    {
      count++;
    }
    str++;
  }
  return count;
}

int main()
{
  const char *bookInfo[3] = {
      "Назва книги: Вступ до програмування",
      "Глава: Основи C++",
      "Параграф: Створення функцій"};

  std::cout << "Рядки:\n";
  for (int i = 0; i < 3; ++i)
  {
    std::cout << bookInfo[i] << " (Розмір: " << strlen(bookInfo[i]) << " символів)\n";
  }

  std::cout << "\nРозмір масиву покажчиків: " << sizeof(bookInfo) << " байт\n";

  int count = countCharInString(bookInfo[1], 'с');
  std::cout << "\nКількість букв 'с' у другому рядку: " << count << std::endl;

  return 0;
}
