#ifndef DisplayInterface_h
#define DisplayInterface_h

#include <Arduino.h>

class DisplayInterface {
public:
    virtual ~DisplayInterface() {}
    virtual void init() = 0;
    virtual void clear() = 0;
    virtual void setLabel(const String& label) = 0;
    virtual void updateValue(const String& value) = 0;
};

#endif
