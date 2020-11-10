#include"Menu.h"
#include<iostream>
#define NEXT std::cout << std::endl;
#define NEXT2 NEXT; NEXT;

void Metric_Function(){

}

void Meshurments_Convertis(){
    std::cout << "Meshurments have been called\n";
  NEXT2;
  int MMM_Slection = 0;
    Meshur_Menu();

    std::cin >> MMM_Slection;
        NEXT;
        switch(MMM_Slection){//SWITCH
            case 1:
            Metric_Function();
            break;
            case 2:
            
            break;
        }//END SWITCH
}