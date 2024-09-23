#ifndef DisplayValueCommon_h
#define DisplayValueCommon_h

#include <Arduino.h>

class DisplayValueCommon {
public:
    virtual ~DisplayValueCommon() {}
    virtual void init() = 0;
    virtual void clear() = 0;
    virtual void setLabel(const char* value) = 0;
    virtual void setValue(const char* value) = 0;
    virtual void setValue(int value) = 0;
    virtual void setSuffix(const char* value) = 0;
};

#endif
