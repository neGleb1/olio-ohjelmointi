#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H
#include "device.h"

class DeviceDisplay : public DeviceBaseClass {

public:
    DeviceDisplay();
    void setDisplayResolution();
    short getDisplayResolution();

private:
    short displayResolution;
};

#endif
