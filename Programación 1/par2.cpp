#include <iostream>
using namespace std;

int NumPar(int n)
{
  for (int i = 0; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      cout << endl;
      cout << "El número " << i << " es par" << endl;
    }
  }
}
int main()

{
  int b = NumPar(10);

  return 0;
}