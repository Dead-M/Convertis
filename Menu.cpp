#include<iostream> 
#include"Intro.h"
#include"Meshurments.h"
#include"Payment.h"
#include"Miles.h"
#include"Temp.h"
#include"Cail.h"
#include"Weight.h"
#include"Currency.h"

#define NEXT std::cout << std::endl;
#define NEXT5 NEXT; NEXT; NEXT; NEXT;

 struct Input{

     int player_MenuInput = 9;
 };

void setplayer_MenuInput(int x){
    Input input;
    x = input.player_MenuInput;
}
void Slect_MENUS(){//MENUS FUNCTION

Input input;
    int x = 99;
    while(x != 0){//WHILE LOOP
    std::cout << "~~~ \t1. Miles to Destanation to Time \t ~~~\n";
    std::cout << "~~~ \t2. Payment Cailculations \t ~~~\n";
    std::cout << "~~~ \t3. Meshurements \t ~~~\n";
    std::cout << "~~~ \t4. Temp Conversion \t ~~~\n";
    std::cout << "~~~ \t5. Cail-Cuelator \t ~~~\n";
    std::cout << "~~~ \t6. Convert Weight's \t ~~~\n";
    std::cout << "~~~ \t7. Convert Currency \t ~~~\n";
    std::cout << "~~~ \t0. Exit \t ~~~\n";
    NEXT;
    std::cin >> x;
    setplayer_MenuInput(x);
   
    NEXT;

    switch(x){//SWITCH
        case 1:
            Miles_Convertis();             
            break;
        case 2:
            Payments_Convertis();
            break;
        case 3:
            Meshurments_Convertis();
            break;
        case 4:
            Temp_Menu();
            break;
        case 5:
            Cail_Function();
            break;
        case 6:
            Weight_Function();
            break;
        case 7:
            Currency_Function();
            break;
    }//END SWITCH
    }//END WHILE LOOP
}//END Slect_MENUS FUNCTION

void Miles_Menu(){
NEXT5;
std::cout << "~~~\t 1. Miles to time from A to B \t~~~\n";
std::cout << "~~~\t 2. TBA \t~~~\n";
std::cout << "~~~\t 0. Main Menu \t ~~~\n";
std::cout << "You're Slection : ";
}

void Meshur_Menu(){
NEXT5;
std::cout << "~~~\t 1. Metric to Imperial \t~~~\n";
std::cout << "~~~\t 2. Imperial to Metric \t~~~\n";
std::cout << "~~~\t 0. Main Menu \t ~~~\n";
NEXT;
std::cout << "You're Slection : ";

}

void Temp_Menu() {
    NEXT5;
    std::cout << "~~~\t 1. Celsius --> Fahrenheit \t~~~ \n";
    std::cout << "~~~\t 2. Fahrenheit --> Celsius \t~~~ \n";
    std::cout << "~~~\t 0. Main Menu \t ~~~\n";
    NEXT;
    Temp_Function();
}