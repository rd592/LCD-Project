#include "LCDData.h"
#include "mbed.h"

//global variable.
PinName pins[] = {A1, A0, D4, D5, D6, D7};

LCD1602 lcd(A1, A0, D4, D5, D6, D7);