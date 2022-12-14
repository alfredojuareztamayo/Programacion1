#include <iostream>
#include <cmath>

using namespace std;

int NumPar(int a)
{
  int n = 0;

  for (int i = 0; i == a; i++)
  {
    if (i % 2 == 0)
    {
      n++;
      cout << i << endl;
    }
  }
}

int main()
{
  int b = NumPar(10);
  return 0;
  cout << b << endl;
}
