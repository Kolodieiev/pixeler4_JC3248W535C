#include "context/resources/ch32_pins_def.h"
#include "pixeler/src/Pixeler.h"
#include "pixeler/src/manager/CoprocessorManager.h"
#include "pixeler/setup/input_setup.h"
using namespace pixeler;

void setup()
{
  // Запустити виконання Pixeler.
  Pixeler::begin(80);
}

void loop()
{
  vTaskDelete(NULL);
}
