#include "SCENE.h"


    //create a new scene. SceneID must be unique
    Scene::Scene(int sceneID ){
        _sceneID = sceneID;
    }

    Scene :: Scene(){
    }


    //used to make a button in the menu. make sure text is shorter than 16 letters
    void Scene::NewButton(LCD1602 lcd, int nextScene, const char* buttonText, int column, int row){

        //there are no checks in place for how long the text can be. Be careful with text length.
        Button newButton = Button(lcd, nextScene, buttonText, column, row);//instantiate new button
        _buttonArray[buttonNum] = newButton;
        buttonNum ++;
    
         
    }

    //used to write text at a given point on the screen
    void Scene::NewText(LCD1602 lcd, const char *text, int column, int row){
        Button newText = Button(lcd, text, column, row);
        
        printf("%s \n",text);

        _textArray[textNum] = newText;

        printf("%s \n", _textArray[textNum]._buttonText); //prints newText from _textArray
        textNum++;
    }

    void Scene :: DisplayScene(LCD1602 lcd){

        lcd.clear();

        if(buttonNum >0){
            for(int i = 0; i < buttonNum; i++){
            
            Button curButton = _buttonArray[i];
            int curCol = curButton._columnLoc;
            int curRow = curButton._rowLoc;

            lcd.setCursor(curCol, curRow);
            lcd.write(curButton._buttonText);
        
        }
        //Button button = _buttonArray[0];
        //lcd.write(button._buttonText);

        }

        if(textNum > 0){
            for(int i = 0; i < textNum; i++){
            
            Button curButton = _textArray[i];
            int curCol = curButton._columnLoc;
            int curRow = curButton._rowLoc;

            lcd.setCursor(curCol, curRow);
            lcd.write(curButton._buttonText);
        
        }
        //Button button2 = _textArray[0];
        //lcd.write(button2._buttonText);
        }


        //printf(button2._buttonText);

/*

        for(int i = 0; i < buttonNum; i++){
            
            Button curButton = _buttonArray[i];
            int curCol = curButton._columnLoc;
            int curRow = curButton._rowLoc;

            lcd.setCursor(curCol, curRow);
            lcd.write(curButton._buttonText);
        
        }
        for(int i = 0; i < textNum; i++){
            
            Button curButton = _textArray[i];
            int curCol = curButton._columnLoc;
            int curRow = curButton._rowLoc;

            lcd.setCursor(curCol, curRow);
            lcd.write(curButton._buttonText);
        
        }

     */   
    }


/*
    void Scene :: ChangeScene(Button button){
        int scene = button.ReturnScene();
        _manager.SetScene(scene);

    }
*/