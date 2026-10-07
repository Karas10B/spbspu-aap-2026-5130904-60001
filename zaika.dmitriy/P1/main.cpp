#include <iostream>

int IncSeq(int a);

int main()
{
  int a = 0;
  int a0 = 0;

  std::cin >> a;
  if (a == 0)
  {
    return 2;
  }

  for (size_t i = 1; i > 0; ++i)
  {
    a0 = a;

    std::cin >> a;

    if (a == 0)
    {
      i = -1;
    }

    std::cout << a << " " << a0 << "\n";
  }

}
