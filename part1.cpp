// Обчисліть добуток елементів в діапазоні від 1 до 5 в стовбцях. Розмір масиву 4 на 5.

#include <iostream>
using namespace std;

int main()
{
  const int rows = 4, cols = 5;
  int arr[rows][cols] = {
      {1, 6, 2, 5, 3},
      {4, 2, 3, 1, 5},
      {1, 4, 1, 3, 2},
      {5, 3, 2, 4, 1}};

  for (int col = 0; col < cols; ++col)
  {
    int product = 1;
    bool found = false;

    for (int row = 0; row < rows; ++row)
    {
      if (arr[row][col] >= 1 && arr[row][col] < 5)
      {
        product *= arr[row][col];
        found = true;
      }
    }

    if (found)
    {
      cout << "Product of elements in column " << col + 1 << ": " << product << endl;
    }
    else
    {
      cout << "No elements in the range 1 to 5 in column " << col + 1 << endl;
    }
  }

  return 0;
}
