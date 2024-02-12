#include "ui.h"


MyDeviceUI::MyDeviceUI() : objectDeviceMouse(new DeviceMouse), objectDeviceTouchPad(new DeviceTouchPad), objectDeviceDisplay(new DeviceDisplay) {
        cout << "Ui created"<< endl;
}

MyDeviceUI::~MyDeviceUI() {
   delete objectDeviceMouse;
   objectDeviceMouse = nullptr;
   delete objectDeviceTouchPad;
   objectDeviceTouchPad = nullptr;
   delete objectDeviceDisplay;
   objectDeviceDisplay = nullptr;
   cout << "Ui and devices deleted"<< endl;
}

void MyDeviceUI::uiSetMouseInformation() {
    
    cout << "Set Mouse Information" <<endl;
    cout << "=====================" <<endl;
    objectDeviceMouse->setDeviceID();
    objectDeviceMouse->setPrimaryButton();
}

void MyDeviceUI::uiSetTouchPadInformation() {
    
    cout << "Set Touchpad Information" <<endl;
    cout << "========================" <<endl;
    objectDeviceTouchPad->setDeviceID();
    objectDeviceTouchPad->setTouchPadSensitivity();
}

void MyDeviceUI::uiSetDisplayInformation() {
    
    cout << "Set Display Information" <<endl;
    cout << "=======================" <<endl;
    objectDeviceDisplay->setDeviceID();
    objectDeviceDisplay->setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation() {
    
    cout << "Mouse Information" <<endl;
    cout << "=================" <<endl;
    cout << "ID: " << objectDeviceMouse->getDeviceID() << " Primary button: " << objectDeviceMouse->getPrimaryButton() <<endl;
    
    cout << "Touchpad Information" <<endl;
    cout << "====================" <<endl;
    cout << "ID: " << objectDeviceTouchPad->getDeviceID() << " Sensitivity: " << objectDeviceTouchPad->getTouchPadSensitivity() <<endl;
    
    cout << "Display Information" <<endl;
    cout << "===================" <<endl;
    cout << "ID: " << objectDeviceDisplay->getDeviceID() << " Resolution: " << objectDeviceDisplay->getDisplayResolution() <<endl;
}

void MyDeviceUI::uiShowMenu() {
    short valinta;
    cout << "DEVICE MENU" <<endl;
    cout << "===========" <<endl;
    cout << "1 = Set Mouse Information "<< endl;
    cout << "2 = Set Touchpad Information "<< endl;
    cout << "3 = Set Display Information "<< endl;
    cout << "4 = Show Devices Information "<< endl;
    cout << "5 = Finish "<< endl;

    while(valinta != 5){
        cout << "Choose: "<< endl;
        cin >> valinta;

        cout<< "Valitsit "<<valinta<<endl;
        
        switch(valinta) {
        
            case 1:
                uiSetMouseInformation();
                break;
            case 2:
                uiSetTouchPadInformation();
                break;
            case 3:
                uiSetDisplayInformation();
                break;
            case 4:
                uiShowDeviceInformation();
                break;
            case 5:
                cout << "Exit"<< endl;
                break;
            default:
                cout << "Unsupported operation!"<< endl;
        }
    } 
}
