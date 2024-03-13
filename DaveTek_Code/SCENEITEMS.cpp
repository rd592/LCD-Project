#include "mbed.h"


 class Button{

    char* _buttonText; //text displayed by button.
    int _sceneID;
    int _nextScene; //each new scene will be given a unique int value. This is the scene the button will change to

    public:
    int _columnLoc; //button location
    int _rowLoc;

//actual constructor
    Button(int sceneID, int nextScene, char* buttonText, int columnLoc, int rowLoc){

        _columnLoc = columnLoc;
        _rowLoc = rowLoc;
        _nextScene = nextScene;
        _sceneID = sceneID;
    }

    int changeScene(){
        return _nextScene;
    }

    };


    //allows menu objects to be placed in a scene
class Menu{

public:
int _sceneID;

Menu(int sceneID){
    _sceneID = sceneID;
}

};
