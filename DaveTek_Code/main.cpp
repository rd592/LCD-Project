#include "mbed.h"
#include "SCENE.h"


 // reset, enable, d4-d7 REMEMBER TO UPDATE IF PINS CHANGE!!!!!!!!!!!

Scene scene1(0);

// main() runs in its own thread in the OS
int main()
{
    LCD1602 lcd(A1, A0, D4, D5, D6, D7);
    scene1.NewText("Test Text", 0, 0);

}


