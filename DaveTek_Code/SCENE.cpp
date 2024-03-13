#include "mbed.h"
#include "SCENEITEMS.h"
//#include "LCD1602.h"
#include "LCDData.h"



//contains the elements of a screen
class Scene{

    int _sceneID;

    public:
    int buttonNum = 0;//number of buttons

    
    //create a new scene. SceneID must be unique
    Scene(int sceneID){
        _sceneID = sceneID;

    }

    //create new menu, sceneID is which scene it is attached to
    void NewMenu(int sceneID){
        Menu newMenu = Menu(sceneID);
    }

    //used to make a button in the menu. make sure text is shorter than 16 letters
    void NewButton(int sceneID, int nextScene, char* buttonText, int column, int row){

        //checks button attributes to make sure they are within range of the LCD display
        int i = 0;
        while(buttonText){
            i++;
        }
        
        // if column is offset, prevents button being displayed offscreen.
        if((i+column)<=15){
                Button newButton = Button(sceneID, nextScene, buttonText, column, row);//instantiate new button
                _buttonArray[buttonNum] = newButton;
                buttonNum ++;
            
        }          
    }


    //used to write text at a given point on the screen
    void NewText(const char *text, int column, int row){
        lcd.setCursor(column, row);
        lcd.write(text);
    }


    Button _buttonArray[];//tracks all the buttons made. 32 is an arbitrary number
};