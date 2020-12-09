#pragma once

void Miles_Convertis();
void Time_To_Destanation_FromAB();

class Travel{
    public:
        int MPH;
        int Destanation; 
        int Sum = MPH / Destanation;   
        void setMPH(int x);
        void setDestanation(int y);
        void setSum(int x, int y);
        int getSum();
};
