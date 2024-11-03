#include <iostream>
#include <cmath>
#include <iomanip>

// Функція для обчислення точного значення функції y(x)
double exactFunction(double x)
{
  return (pow(x, 2) / 4 + x / 2 + 1) * exp(x);
}

// Функція для обчислення значення функції за розкладом у ряд з заданим n (n = 5)
double seriesWithN(double x)
{
  int n = 5;
  double sum = 1.0 + 2.0 * (x / 2.0);
  for (int i = 2; i <= n; ++i)
  {
    double term = (pow(x / 2.0, i) * (pow(i, 2) + 1)) / tgamma(i + 1);
    sum += term;
  }
  return sum;
}

// Функція для обчислення значення функції з заданою точністю epsilon
double seriesWithPrecision(double x, double epsilon)
{
  double sum = 1.0;
  double term = 2.0 * (x / 2.0);
  sum += term;
  int i = 2;
  while (fabs(term) > epsilon)
  {
    term = (pow(x / 2.0, i) * (pow(i, 2) + 1)) / tgamma(i + 1);
    sum += term;
    i++;
  }
  return sum;
}

int main()
{
  double a = 0.0, b = 1.0;
  int k = 10; // кількість точок
  const double epsilon = 0.0001;

  double step = (b - a) / (k - 1);

  std::cout << std::fixed << std::setprecision(6);
  std::cout << "\n  x       Точне y(x)   Розклад з n     Розклад з точністю" << std::endl;
  std::cout << "-----------------------------------------------------------" << std::endl;

  // Обчислення для кожного значення x від a до b з заданим кроком
  for (int i = 0; i < k; ++i)
  {
    double x = a + i * step;
    double exactY = exactFunction(x);
    double seriesY_N = seriesWithN(x);
    double seriesY_Precision = seriesWithPrecision(x, epsilon);

    std::cout << std::setw(8) << x << "  " << std::setw(12) << exactY
              << "  " << std::setw(12) << seriesY_N
              << "  " << std::setw(12) << seriesY_Precision << std::endl;
  }

  return 0;
}
