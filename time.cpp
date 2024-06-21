#include "clock.h"
#include <iostream>

using namespace std;

int main(){
Clock c1(45, 33, 14, 5);
Clock c2(35, 10);
Clock c3(4);
Clock c4;
Clock c5;
cout << "This is the time according to Clock 1 " << c1 << " and this is the time according to Clock 2 " << c2 << endl;
c4 = c1 + c2;
cout << c1 << " + " << c2 << " = " << c4 << endl;

//greater than
if(c1 > c2){
    cout << "Clock 1 is greater than clock 2" << endl;
}
else{
    cout << "Clock 1 is not greater than clock 2" << endl;
}

//less than
if(c1 < c2){
    cout << "Clock 1 is less than clock 2" << endl;

}
else{
    cout << "Clock 1 is not less than clock 2" << endl;
}
c5 = -c4;
cout << "Clock 5 is the negated version of clock 4: " << c5 << endl;

c5.reset();

cout << "Clock 5 has been reset to: " << c5 << endl;
c5 = c4 - c1; 
cout << c4 << " - " << c1 << " = " << c5 << endl;;


c4.reset();
cout << "Clock 4 has been reset. Clock 4 is now as follows: " << c4 << endl;
c4.set_Seconds(45);
c4.set_Minutes(33);
c4.set_Hours(14);
c4.set_Days(5);

cout << "Clock 4 has just been set. Clock 4 is now as follows: " << c4 << endl;

cout << "We are now going to compare 2 clocks, first we will compare Clock 1 " << c1 << " and Clock 4 " << c4 << endl;
if(c1 == c4){
    cout << "These two clock are equivalent" << endl;
}
else{
    cout << "These two clocks are not equivalent" << endl;
}

cout << "Now we will compare 2 different clocks. Those clocks are Clock 2 " << c2 << " and Clock 5 "  << c5 << endl;
if(c2 == c5){
    cout << "These two clock are equivalent" << endl;
}
else{
    cout << "These two clocks are not equivalent" << endl;
}

}