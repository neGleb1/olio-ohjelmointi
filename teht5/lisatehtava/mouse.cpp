#include "mouse.h"

DeviceMouse::DeviceMouse() {
    cout << "Mouse created"<< endl;
}

void DeviceMouse::setPrimaryButton() {

   cout<<"Enter Mouse Primary Button value "<<endl;
   cin>>primaryButton;
}

short DeviceMouse::getPrimaryButton() {
    return primaryButton;
}
