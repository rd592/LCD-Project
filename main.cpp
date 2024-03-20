#include "mbed.h"
#include "SCENE.h"
#include "LCD1602.h"

LCD1602 lcd(A1, A0, A2, A3, D4, D5, D6, D7);

Scene scene1 = Scene(0);
Scene scene2 = Scene(1);

DigitalIn button(BUTTON1);

int main(){
    lcd.init();

    scene1.NewButton(lcd, 1, "Button!!!", 0, 0);
    scene2.NewText(lcd, "Hello!!", 0, 0 );

    scene1.DisplayScene(lcd);

    while(true){

        if(!button){
            scene2.DisplayScene(lcd);
        }
        thread_sleep_for(10);
    }


}

