#include "mbed.h"
#pragma once

class LCD1602 {
    DigitalOut _rs, _enable, _backlight, _contrastOff; //contrast is on when input is 0
    BusOut _dataPins;

    int _ccolumn; //cursors column position
    int _crow; //cursors row position

    int _column;
    int _row;



    int address(int column, int row);
    void character(int column, int row, int c);
    void writeByte(int value);
    void writeCommand(int command);
    void writeData(int data);

    void handleNewline();
    void incrementColumn();
    void incrementRow();
    void checkRowOverflow();
    
public:
    LCD1602(PinName rs, PinName e, PinName d4, PinName d5, PinName d6, PinName d7);
    LCD1602(PinName rs, PinName e, PinName bl, PinName cr, PinName d4, PinName d5, PinName d6, PinName d7);

    void clear();
    void init();
    void write(const char* string);
    void setCursor(int column, int row);
    double getCursor(); //returns double of cursor position. first 4 bytes are column, last 4 are row
    void writeChar(int data);
    void loadCustomChar(int index, const int* pattern);
    void writeCustomChar(int index);
};