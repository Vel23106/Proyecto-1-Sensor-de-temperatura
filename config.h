/************************ Adafruit IO Config *******************************/

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME  "Vel23106"
#define IO_KEY       'clave'

/******************************* WIFI **************************************/
#define WIFI_SSID "Blossom"
#define WIFI_PASS "contraseña"
// comment out the following lines if you are using fona or ethernet
#include "AdafruitIO_WiFi.h"
AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
