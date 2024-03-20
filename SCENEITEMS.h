#pragma once

#include "mbed.h"
#include "LCD1602.h"



//used for text and buttons. different constructors for each
class Button{

    int _sceneID;
    int _nextScene; //each new scene will be given a unique int value. This is the scene the button will change to


    public:
    const char *_buttonText; //text displayed by button.
    int _columnLoc; //button location
    int _rowLoc;

    Button();
    Button(LCD1602, const char* buttonText, int columnLoc, int rowLoc);
    Button(LCD1602 lcd, int nextScene, const char* buttonText, int columnLoc, int rowLoc);
    const char *GetText();

};