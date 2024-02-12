#include "display.h"

DeviceDisplay::DeviceDisplay(){
    cout << "Display created"<< endl;
}

void DeviceDisplay::setDisplayResolution() {

   cout<<"Enter Display resolution "<<endl;
   cin>>displayResolution;
}

short DeviceDisplay::getDisplayResolution() {
    return displayResolution;
}
