#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H

#include "device.h"
#include "mouse.h"
#include "display.h"
#include "touchpad.h"

class MyDeviceUI {

public:
    MyDeviceUI();
    ~MyDeviceUI();
    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchPadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();

private:

    DeviceMouse *objectDeviceMouse;
    DeviceTouchPad *objectDeviceTouchPad;
    DeviceDisplay *objectDeviceDisplay;

};

#endif
