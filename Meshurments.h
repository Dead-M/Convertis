#pragma once


void Meshurments_Convertis();

class Meshure{
double Metric = 0;
double Imperial = 0;
double Sum = 0;
void setMetric(int x);
double getMetric();
double getImperial();
void setImperial(int y);
void setSum(int z);
double getSum();
};

void Metric_Function();

/*

 in function `Metric_Function()':
/home/montazuma/Desktop/C++/Meshurments.cpp:33: multiple definition of `
Metric_Function()'; /tmp/ccVmwrf3.o:/home/montazuma/Desktop/C++/
Meshurments.h:18: first defined here

/usr/bin/ld: /tmp/cc8XG2r2.o: in function `Metric_Function()':
/home/montazuma/Desktop/C++/Meshurments.h:18: multiple definition of 
`Metric_Function()'; /tmp/ccVmwrf3.o:/home/montazuma/Desktop/C++/
Meshurments.h:18: first defined here

*/