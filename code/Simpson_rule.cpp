#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
double fk(double x);
double simpson(double a, double b, int n)
{
  double sum_even = 0, sum_odd = 0;
  double h = (b - a) / n; // finding h base length

  // summation of all sums
  for (int i = 1; i < n; i+=2) { sum_odd += 4*fk(i*h); }
  for (int i = 2; i < n; i+=2) { sum_even += 2*fk(i*h); }

  // counting of integral
  double result = h / 3 * (fk(a) + sum_odd + sum_even + fk(b));
  return result;
}
double fk(double x)
{
  return x * x;
}

int main()
{
  // Database

  double a, b, f;
  int n;
  
  printf("a = ");
  scanf("%lf", &a);
  printf("b = ");
  scanf("%lf", &b);
  printf("n = ");
  scanf("%d", &n);

  f = simpson(a,b,n); // Integral

  // Result
  printf("Integral = %3.3f \n", f);

  return 0;
}

