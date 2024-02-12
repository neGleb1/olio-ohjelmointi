#include "device.h"

DeviceBaseClass::DeviceBaseClass(){}

void DeviceBaseClass::setDeviceID() {

    cout<<"Set Device ID "<<endl;
    cin>>deviceID;
}

short DeviceBaseClass::getDeviceID() {

    return deviceID;
}
