#include "SingleResp.h"

int AreaRec::calculate()
{
  return (a*b);
}

float PreRec::calculate()
{
  return 2 * (a + b);
}

template<typename T> void print(T ans)
{
  std::cout << ans;
}
void callSRP()
{
  AreaRec mathArea(4, 5);
  int total = mathArea.calculate();
  print(total);

  PreRec mathPri(7,8);
  int totalPri = mathPri.calculate();
  print(totalPri);
}