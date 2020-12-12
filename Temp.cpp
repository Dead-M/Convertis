#include<iostream>
#include"Menu.h"
#include"Temp.h"

#define NEXT std::cout << std::endl;
#define NEXT5 NEXT; NEXT; NEXT; NEXT;

class Therma_Stat {
   
    float Temp;                    
    float Cels;
    float Degree;

public:
    float Global_Input;
    float Math_Thing_D5 = 5;
    float Math_Thing_M = 9;
    float Math_Thing_Ad = 32;
    float storage;

    void setTemp(float x) {
        Temp = x;
    }
    float getTemp() {
        return Temp;
    }
    void setCels(float x) {
        Cels = x;
    }
    float getCels() {
        return Cels / 5 * 9 + 32;
    }
    void setDegree(float x) {
        Degree = x;
    }
    float getDegree() {
        return (Degree - 32) * 5 / 9;
    }

};

void Celsci() {
    Therma_Stat Therma;


    std::cout << "Please Enter Your're Temp to Convert to Fahrenheit : ";
    std::cin >> Therma.Global_Input;
    Therma.setCels(Therma.Global_Input);

    NEXT;

    std::cout << "You're Celsius Tempature converted to Fahrenheit is : "; //ADD CONVERT SUM VAR HERE
    std::cout << Therma.getCels();
    NEXT5;
        
}

void Feren() {
    Therma_Stat Therma;

    std::cout << "Please Enter Your're Temp to Convert to Celsius : ";
    std::cin >> Therma.Global_Input;
    Therma.setDegree(Therma.Global_Input);

    NEXT;

    std::cout << "You're Fahrenheit Tempature converted to Celsius is : "; //ADD CONVERT SUM VAR HERE
    std::cout << Therma.getDegree();
    NEXT5;
}

void Temp_Function() {
    int Temp_Slection = 0;
    std::cin >> Temp_Slection;

    switch (Temp_Slection) {
    case 1:
        Celsci();
        break;
        
    case 2:
        Feren();
        break;
    }

}
