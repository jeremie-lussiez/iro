#include <Adafruit_NeoPixel.h>
#include <ESP8266WebServer.h>
#include "./configuration.h"

#ifndef IRO_MODE_H
#define IRO_MODE_H

class IroModesManager;
class IroMode {
  private:
    IroModesManager *manager;
    ESP8266WebServer *server;
  public:
    bool isRunning = false;
    virtual void animate(Adafruit_NeoPixel *pixels) = 0;
    virtual void handleRoute() = 0;
};

#endif

