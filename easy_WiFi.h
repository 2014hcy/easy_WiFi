#ifndef EASY_WIFI_H
#define EASY_WIFI_H

enum Country {
  ZH,
  UK,
  US
};

void connect(const char* ssid, const char* password);
void init_time(Country country);
void write_time();

#endif
