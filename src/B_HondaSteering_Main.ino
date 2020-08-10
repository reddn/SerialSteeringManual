void setup() {
  Serial.begin(152000); // Setup USB
  EPStoLKAS.begin(9600, SERIAL_8E1);
  LKAStoEPS.begin(9600, SERIAL_8E1);
  pinSetup();
  delay(100);
  setupSettings();
}

void loop() {
  EPS_Serial();
  LKAS_Serial();
  LEDtimer();
  readPB();
  
  if (i > 7) {
    i = 0;
    Serial.println("");
  }
}
