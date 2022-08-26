#include "../Mcal/Port/Inc/Port.h"
#include "../Mcal/Gpio/Inc/Gpio.h"
#include "../Mcal/Nvic/Inc/IntCtrl.h"
#include "../Mcal/Sys_Tick/Inc/SysTick.h"
void sysTickISR(void);
int main() {
  IntCrtl_Init();
  Port_Init();
  SysTick_SetISRCallBack(sysTickISR);
  SysTick_SetDuration(10, 10);
  SysTick_Init();
  while (1) {
  }
}

void sysTickISR(void) {
  static uint32 isrCount = 0;
  static uint32 currentLedState = 0;
  isrCount++;
  if (isrCount > numberOfOverFlows) {
    if (currentLedState == 1) {
      currentLedState = 0;
      Gpio_WriteChannel(GPIO_Channel_A0, GPIO_LEVEL_LOW);
      numberOfOverFlows = offNumberOfOverFlows;
    } else {
      currentLedState = 1;
      Gpio_WriteChannel(GPIO_Channel_A0, GPIO_LEVEL_HIGH);
      numberOfOverFlows = onNumberOfOverFlows;
    }
    isrCount = 0;
  }
}
