#include "easy_WiFi.h"

void setup() {
  connect("1206", "13867627688", 0x3C);
  init_time(ZH);
}

void loop() {
  write_time();
}
