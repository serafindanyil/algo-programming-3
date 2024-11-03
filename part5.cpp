// Першу матрицю заповніть випадковими числами від -100 до +100. В третю матрицю занесіть суму абсолютних значень елементів перших двох матриць.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

int main()
{
  std::srand(static_cast<unsigned int>(std::time(0)));

  int rows, cols;
  std::cout << "Введіть кількість рядків: ";
  std::cin >> rows;
  std::cout << "Введіть кількість стовпців: ";
  std::cin >> cols;

  int **matrix1 = new int *[rows];
  int **matrix2 = new int *[rows];
  int **resultMatrix = new int *[rows];

  for (int i = 0; i < rows; ++i)
  {
    matrix1[i] = new int[cols];
    matrix2[i] = new int[cols];
    resultMatrix[i] = new int[cols];
  }

  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      matrix1[i][j] = -100 + (std::rand() % 201);
      matrix2[i][j] = -100 + (std::rand() % 201);
    }
  }

  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      resultMatrix[i][j] = std::abs(matrix1[i][j]) + std::abs(matrix2[i][j]);
    }
  }

  std::cout << "\nПерша матриця:\n";
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      std::cout << matrix1[i][j] << " ";
    }
    std::cout << std::endl;
  }

  // Виведення другої матриці
  std::cout << "\nДруга матриця:\n";
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      std::cout << matrix2[i][j] << " ";
    }
    std::cout << std::endl;
  }

  std::cout << "\nТретя матриця (сума абсолютних значень елементів):\n";
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      std::cout << resultMatrix[i][j] << " ";
    }
    std::cout << std::endl;
  }

  for (int i = 0; i < rows; ++i)
  {
    delete[] matrix1[i];
    delete[] matrix2[i];
    delete[] resultMatrix[i];
  }
  delete[] matrix1;
  delete[] matrix2;
  delete[] resultMatrix;

  return 0;
}
