#include <iostream>

int main()
{
  int a = 0;

  for (size_t i = 0;; ++i)
  {
    std::cin >> a;

    if (a == 0)
    {
      break;
    }

    std::cout << a << "\n";
  }

}
