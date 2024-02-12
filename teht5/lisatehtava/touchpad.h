#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H
#include "device.h"

class DeviceTouchPad : public DeviceBaseClass {

public:
    DeviceTouchPad();
    void setTouchPadSensitivity();
    short getTouchPadSensitivity();

private:
    short touchPadSensitivity;
};

#endif
