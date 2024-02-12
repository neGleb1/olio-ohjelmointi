#include "touchpad.h"

DeviceTouchPad::DeviceTouchPad(){
    cout << "Touchpad created"<< endl;
}

void DeviceTouchPad::setTouchPadSensitivity() {

   cout<<"Enter Touchpad sensitivity "<<endl;
   cin>>touchPadSensitivity;
}

short DeviceTouchPad::getTouchPadSensitivity() {
    return touchPadSensitivity;
}
