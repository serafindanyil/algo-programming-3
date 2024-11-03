#include <iostream>
#include <cstdlib>
#include <ctime>

void fillMatrix(int **matrix, int size)
{
  for (int i = 0; i < size; ++i)
  {
    for (int j = 0; j < size; ++j)
    {
      matrix[i][j] = -10 + (std::rand() % 21); // Заповнюємо числами від -10 до 10
    }
  }
}

void rowSums(int **matrix, int size, int *rowSumArray)
{
  for (int i = 0; i < size; ++i)
  {
    rowSumArray[i] = 0;
    for (int j = 0; j < size; ++j)
    {
      rowSumArray[i] += matrix[i][j];
    }
  }
}

void rowProducts(int **matrix, int size, int *rowProductArray)
{
  for (int i = 0; i < size; ++i)
  {
    rowProductArray[i] = 1;
    for (int j = 0; j < size; ++j)
    {
      rowProductArray[i] *= matrix[i][j];
    }
  }
}

void printMatrix(int **matrix, int size)
{
  for (int i = 0; i < size; ++i)
  {
    for (int j = 0; j < size; ++j)
    {
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

void printArray(int *array, int size, const char *name)
{
  std::cout << name << ": ";
  for (int i = 0; i < size; ++i)
  {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
}

int main()
{
  std::srand(static_cast<unsigned int>(std::time(0)));

  int size;
  std::cout << "Введіть розмір квадратної матриці: ";
  std::cin >> size;

  int **matrix = new int *[size];
  for (int i = 0; i < size; ++i)
  {
    matrix[i] = new int[size];
  }

  fillMatrix(matrix, size);

  int *rowSumArray = new int[size];
  int *rowProductArray = new int[size];

  rowSums(matrix, size, rowSumArray);
  rowProducts(matrix, size, rowProductArray);

  std::cout << "\nПочаткова матриця:\n";
  printMatrix(matrix, size);

  printArray(rowSumArray, size, "Суми рядків");
  printArray(rowProductArray, size, "Добутки рядків");

  for (int i = 0; i < size; ++i)
  {
    delete[] matrix[i];
  }
  delete[] matrix;
  delete[] rowSumArray;
  delete[] rowProductArray;

  return 0;
}
