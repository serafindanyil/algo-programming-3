// Обчисліть кількість від’ємних чисел в масиві. Розмір масиву 5 на 4. Діапазон випадкових чисел від –50.50 до 20.50.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  const int rows = 5, cols = 4;
  float arr[rows][cols];
  int negativeCount = 0;

  srand(static_cast<unsigned>(time(0)));

  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      arr[i][j] = -50.50 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (20.50 + 50.50)));
      cout << arr[i][j] << "\t"; // Виводимо масив на екран
      if (arr[i][j] < 0)
      {
        negativeCount++; // Підрахунок від'ємних чисел
      }
    }
    cout << endl;
  }

  cout << "Number of negative elements: " << negativeCount << endl;

  return 0;
}
