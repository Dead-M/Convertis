#include"Menu.h"
#include<cmath>
#include<iostream>
#define NEXT std::cout << std::endl;
#define NEXT5 NEXT; NEXT; NEXT; NEXT;

class Travel{
    int MPH = 0;
    int Destanation = 0; 
    double Sum = 0;
    
    public:
    void setMPH(int x){
        MPH = x;
    }
    void setDestanation(int y){
        Destanation = y;
    }
    void setSum(double x, double y){
        Sum = y / x;
    }
    double getSum(){
       return Sum;
    }
};


void Time_To_Destanation_FromAB(){
int x, y, z = 99;
 
 Travel travel;
std::cout << "Enter MPH : ";
std::cin >> x;
travel.setMPH(x);
NEXT5;
std::cout << "Miles To Destanation : ";
std::cin >> y;
travel.setDestanation(y);
NEXT5;
travel.setSum(x,y);
std::cout << "From You're current Location to you're Destanation \n while going " << x << " Miles PerHour is : " ;
std::cout << travel.getSum() << " Hours" << std::endl;
NEXT5;

}

void Miles_Convertis(){//MILES CONVERTIS FUNCTION
    
    std::cout << "Miles have been called\n";
    
    int MM_Slection = 0;
    Miles_Menu();
    std::cin >> MM_Slection;
    NEXT;
    switch(MM_Slection){//SWITCH
        case 1:
        Time_To_Destanation_FromAB();
        break;
        case 2:
        
        break;
    }//END SWITCH
}//END MILES_CONVERTIS
