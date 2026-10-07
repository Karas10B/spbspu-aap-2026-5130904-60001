#include <iostream>

int IncSeq(int a, int a0)
{
    if (a > a0)
    {
      return 1;
    }
  return 0;
}

int main()
{
  int a = 0;
  int a0 = 0;
  int resIC = 0;

  std::cin >> a;

  if (!std::cin)
  {
    std::cerr << "Wrong sequence\n";
    return 1;
  }

  if (a == 0)
  {
    std::cerr << "Not enough data\n";
    return 2;
  }

  for (size_t i = 1; i > 0; ++i)
  {
    a0 = a;

    std::cin >> a;

    if (!std::cin)
    {
      std::cerr << "Wrong sequence\n";
      return 1;
    }

    if (a == 0)
    {
      a0 = 0;
      i = -1;
    }

    resIC += IncSeq(a, a0);

  }
  std::cout << resIC << "\n";
}
