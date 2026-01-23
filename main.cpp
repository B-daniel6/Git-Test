#include <iostream>

int sum(int n);
int product(int n);

int main() {
  std::cout << "Enter a number: " << endl;
  return 0;
  int n;
  std::cin >> n;
  std::cout << sum(n) << endl;
  std::cout << product(n) << endl;
}
sum(int n)
{
  return ((n)*(n+1))/2;
}

product(int n)
{
  int product = 1;
  for(int i = 1; i <= n; i++)
  {
    product = product * i;
  }
  return product;
}