// Визначте масив з 3-х покажчиків на рядки з назвами книги, глави та параграфа. У другому рядку підрахуйте кількість букв 'с'.
#include <iostream>
#include <cstring>

int main()
{

  const char *strings[3];
  strings[0] = "Algoritms and data structure";
  strings[1] = "Search aglo";
  strings[2] = "Algo binary search";

  std::cout << "Рядки:\n";
  for (int i = 0; i < 3; ++i)
  {
    std::cout << strings[i] << std::endl;
  }

  std::cout << "\nРозмір масиву покажчиків: " << sizeof(strings) << " байт\n";
  for (int i = 0; i < 3; ++i)
  {
    std::cout << "Розмір рядка " << i + 1 << ": " << strlen(strings[i]) << " символів\n";
  }

  int count_c = 0;
  for (int i = 0; strings[1][i] != '\0'; ++i)
  {
    if (strings[1][i] == 'c')
    {
      count_c++;
    }
  }

  // Виведення кількості букв 'с' у другому рядку
  std::cout << "\nКількість букв 'c' у другому рядку: " << count_c << std::endl;

  return 0;
}
