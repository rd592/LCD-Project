Current problems: :(

-LCD1602 doesnt seem to like being declared as a global varaible. There is very possibly something obvious I've missed.

To write to the display, both main and Scene.cpp need access to the same LCD object
I have tried a few different methods to solve this, and currently I'm trying to use a global variable which is declared in LCDData. 
At the moment I keep getting this error message on compiling:
L6218E: Undefined symbol LCD1602::LCD1602(PinName, PinName, PinName, PinName, PinName, PinName) (referred from ../../build/LCDData.NUCLEO_G071RB.o).

Probably some issue with the Linker, but I dont really understand what. I think Ive pretty clearly defined LCD1602 so I dont get the problem.
If theres a solution to this or an easier way to do this please let me know, I've been stuck on this for a bit so I feel like I cant make much progress
