#include <DisplayValueCommon.h>

class SimpleDisplay : public DisplayValueCommon {
public:
    void init() override {
        Serial.begin(9600);
    }
    
    void clear() override {
        Serial.println("Clearing display");
    }
    
    void setLabel(const String& label) override {
        Serial.print("Label: ");
        Serial.println(label);
    }
    
    void updateValue(const String& value) override {
        Serial.print("Value: ");
        Serial.println(value);
    }
};

SimpleDisplay display;

void setup() {
    display.init();
    display.setLabel("Temperature");
}

void loop() {
    display.updateValue("25°C");
    delay(2000);  // Update every 2 seconds
}