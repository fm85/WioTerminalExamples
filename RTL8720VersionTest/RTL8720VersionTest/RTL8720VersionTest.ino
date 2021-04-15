/*
  RTL8720VersionTest.ino
  Copyright (C) 2021 by GBS St. Gallen, Inc. All rights reserved.
  Released under the therms of the GNU General Public License version 3
  or later.
*/

#include "arduino.h"
#include "rpcWiFi.h"
#include "TFT_eSPI.h"
TFT_eSPI tft;
 
void setup() {
    String rpcSystemVersion = String(rpc_system_version());
    String msgHello = String("Willkommen am GBS");
    String msgVersion = String("RTL8720 Firmware Version: " + rpcSystemVersion);
    String msgUpdateYesOrNo;

    tft.begin();
    tft.setRotation(3);
    tft.fillScreen(TFT_BLACK); //Black background
   
    if(rpcSystemVersion == "2.1.2"){
        msgUpdateYesOrNo = "Die RTL8720 Firmware ist aktuell.";
    }else{
        msgUpdateYesOrNo = "Firmware bitte updaten...";
    }
    tft.drawString(msgHello,10,10);
    tft.drawString(msgVersion,10,30);
    tft.drawString(msgUpdateYesOrNo,10,50);
}
 
void loop() {
}
