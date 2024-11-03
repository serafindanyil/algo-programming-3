// Створіть динамічний масив для змінних типу double з вико- ристанням операції new. Масив заповніть випадковими числами у діапазоні від –15.000 до 15.000.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
  std::srand(static_cast<unsigned int>(std::time(0)));

  int size;
  std::cout << "Введіть розмір масиву: ";
  std::cin >> size;

  double *array = new double[size];

  for (int i = 0; i < size; ++i)
  {
    array[i] = -15000.0 + static_cast<double>(std::rand()) / (static_cast<double>(RAND_MAX) / 30000.0);
  }

  std::cout << "Масив: \n";
  for (int i = 0; i < size; ++i)
  {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;

  delete[] array;

  return 0;
}