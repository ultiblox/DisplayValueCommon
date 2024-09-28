#include <SensorAnalog.h>
#include <DisplayValueLCD.h>

#define SENSOR_PIN A0

// Set up sensor and display
SensorAnalog sensor(SENSOR_PIN);
DisplayValueLCD display(0x27, 16, 2);

void setup() {
  Serial.begin(115200);
  sensor.setInterval(1000);
  sensor.onDataReceived(handleDataReceived);
  display.init();
  display.setLabel("Sensor Value");
}

void loop() {
  sensor.loop();
}

void handleDataReceived(int value) {
  display.updateValue(String(value) + "%");
  Serial.println("Sensor Value: " + String(value));
}