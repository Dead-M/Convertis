#include"Menu.h"
#include<iostream>
#define NEXT std::cout << std::endl;
#define NEXT2 NEXT; NEXT;

class Meshure{
double Metric = 0;
double Imperial = 0;
double Sum = 0;

  public:

   void setMetric(int x){
     Metric = x;
    }
   double getMetric(){
     return Metric;
    }
    double getImperial(){
      return Imperial;
    }
   void setImperial(int y){
     Imperial = y;
    }
   void setSum(int z){
     Sum = z;
    }
   double getSum(){
     return Sum;
    }   
};

double Metric_Convertis(double x,double y){//sounds like casting a spell
return 
} 

void Metric_Function(){
Meshure meshure;
int x;
int y;
int Sum;

std::cout << "~~~\t Enter You're Metric # : \t~~~\n";
std::cin >> x;
meshure.setMetric(x);
NEXT2;
std::cout << x << " in Metric is " << y << " in Imperial Meshurements \n";
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