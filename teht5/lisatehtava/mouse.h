#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H
#include "device.h"

class DeviceMouse : public DeviceBaseClass {

public:
    DeviceMouse();
    void setPrimaryButton();
    short getPrimaryButton();

private:
    short primaryButton;
};

#endif
