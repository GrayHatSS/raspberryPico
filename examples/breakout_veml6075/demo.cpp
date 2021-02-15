#include "pico/stdlib.h"

#include "breakout_veml6075.hpp"

using namespace pimoroni;

VEML6075 veml6075;

int main() {
  gpio_init(PICO_DEFAULT_LED_PIN);
  gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);

  veml6075.init();   

  while(true) {
    gpio_put(PICO_DEFAULT_LED_PIN, true);
    sleep_ms(1000);
    gpio_put(PICO_DEFAULT_LED_PIN, false);
    sleep_ms(1000);
  }

  return 0;
}