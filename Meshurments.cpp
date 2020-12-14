#include"Menu.h"
#include"Meshurments.h"
#include<iostream>
#include<stdlib.h>
#define NEXT std::cout << std::endl;
#define NEXT5 NEXT; NEXT; NEXT; NEXT;

void Metric_Function() {

}

struct Meshure {
private:
    double Metric = 0;
    double Imperial = 0;
    double Sum = 0;


public:

    int Inch = 1;
    double mmInchs = 0.03937;
    double cmInchs = 0.3937;
    double Feet = Inch * 12;    
    double mm = 0.3048 ;
    double YardMeter = 0.9144;
    double Yards = 1.0936;
    double Miles = 0.6214;
    double CinM = 2.54;
    double Kilos = 1.6093;
  
};

void Imperial_Slection_Function() {
    
    std::cout << "~~~\t 1. Inches to Centimeters \t~~~\n";
    std::cout << "~~~\t 2. Feet to Meters   \t~~~\n";
    std::cout << "~~~\t 3.Yards to Meters \t~~~\n";
    std::cout << "~~~\t 4.Miles to Kilometers \t~~~\n";
    NEXT5;
    int MS_M;
    double Operand;
    double OperandSum;
    Meshure meshure;
    std::cin >> MS_M;
    NEXT;
    switch (MS_M) {//SWITCH
    case 1:
        std::cout << "Enter Inches to Convert to Centimeters : ";
        std::cin >> Operand;
        OperandSum = Operand * meshure.CinM;
        std::cout << Operand << " Inches to Centimeters is : " << OperandSum;
        NEXT5;
        break;
    case 2:
        std::cout << "Enter Feet to Convert to Meters : ";
        std::cin >> Operand;
        OperandSum = Operand * meshure.mm;
        std::cout << Operand << " Feet to Meters is : " << OperandSum;
        NEXT5;
        break;
    case 3:
        std::cout << "Enter Yarrrds to Convert to Meters : ";
        std::cin >> Operand;
        OperandSum = Operand * meshure.YardMeter;
        std::cout << Operand << " Yards to Meter's is : " << OperandSum;
        NEXT5;
        break;
    case 4:
        std::cout << "Enter Miles to Convert to Kilometers : ";
        std::cin >> Operand;
        OperandSum = Operand * meshure.Kilos;
        std::cout << Operand << "Miles To Kilo Meters is : " << OperandSum;
        NEXT5;
        break;
    }//END SWITCH
}



void Meshur_Slection_Menu() {

    NEXT5;
    std::cout << "~~~\t 1. Millimeter to Inches\" \t~~~\n";
    std::cout << "~~~\t 2. Centimeter to Inches   \t~~~\n";
    std::cout << "~~~\t 3. Meters to Yard's \t~~~\n";
    std::cout << "~~~\t 4. Kilometers to Miles \t~~~\n";
    std::cout << "~~~\t 0. Main Menu \t ~~~\n";
    NEXT5;
    int MS_M;
    double Operand;
    double OperandSum;
    Meshure meshure;
    std::cin >> MS_M;
    NEXT;
    switch (MS_M) {//SWITCH
    case 1:
        std::cout << "Enter Milimeter's to convert to inches : ";
        std::cin >> Operand;
        OperandSum = Operand * meshure.mmInchs;
        std::cout << Operand <<" MiliMeters to Inches is : " << OperandSum;
        NEXT5;
        break;
    case 2:
        std::cout << "Enter Centimeter's to convert to inches : ";
        std::cin >> Operand;
        OperandSum = Operand * meshure.cmInchs;
        std::cout << Operand << " Centimeters to Inches is : " << OperandSum;
        NEXT5;
        break;
    case 3:
        std::cout << "Enter Meter's to convert to Yard's : ";
        std::cin >> Operand;
        OperandSum = Operand * meshure.Yards;
        std::cout << Operand << " Meters to Yard's is : " << OperandSum;
        NEXT5;
        break;
    case 4:
        std::cout << "Enter Kilometer's to convert to Miles : ";
        std::cin >> Operand;
        OperandSum = Operand * meshure.Miles;
        std::cout << Operand << " Kilometers to Miles is : " << OperandSum;
        NEXT5;
        break;
     }//END SWITCH
}

void Meshurments_Convertis() {
    NEXT5;
    int MMM_Slection = 0;
    Meshur_Menu();

    std::cin >> MMM_Slection;
    NEXT;
    switch (MMM_Slection) {//SWITCH
    case 1:
        Meshur_Slection_Menu();
        break;
    case 2:
        Imperial_Slection_Function();
        break;
    }//END SWITCH
}
