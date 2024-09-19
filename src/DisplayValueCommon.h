#ifndef DisplayValueCommon_h
#define DisplayValueCommon_h

#include <Arduino.h>

class DisplayValueCommon {
public:
    virtual ~DisplayValueCommon() {}
    virtual void init() = 0;
    virtual void clear() = 0;
    virtual void setLabel(const String& label) = 0;
    virtual void updateValue(const String& value) = 0;
};

#endif
