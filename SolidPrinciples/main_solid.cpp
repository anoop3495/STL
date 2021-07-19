#include "DependencyPrin.h"
#include "OpenClosed.h"
#include "Likovskis.h"
#include "InverSionPrin.h"
#include "SingleResp.h"

int main()
{
  callSRP();
  openclosed();
  callLikovskis();
  callInversionPrin();
  callDependency();
}