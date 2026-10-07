#include <iostream>

int IncSeq(int a, int a0)
{
  if (a > a0)
  {
    return 1;
  }
  return 0;
}

int CntMax(int a, int am, int resCM)
{
  if (am < a && a != 0)
  {
    return 1;
  }

  if (am == a)
  {
    return ++resCM;
  }

  return resCM;
}

int main()
{
  int a = 0;
  int a0 = 0;
  int am = 0;
  int resIC = 0;
  int resCM = 1;

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

  am = a;

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
    resCM = CntMax(a, am, resCM);

    am = a;
  }
  std::cout << resIC << "\n";
  std::cout << resCM << "\n";
}
