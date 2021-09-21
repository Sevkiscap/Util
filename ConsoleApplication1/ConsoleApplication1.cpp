// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int intArray[] = { 1,2,3,4,5,6 };
float floatArray[] = { 1.0,2.0,3.0,4.0,5.0,6.0 };
double doubleArray[] = { 1.0,2.0,3.0,4.0,5.0,6.0 };
std::string stringArray[] = { "1", "2","3","4","5","6" };


int main()
{
    for (int x = sizeof(intArray) / 2; x < sizeof(intArray); x+=4) {
        intArray[x / 4] = NULL;
    }
    for (int x = sizeof(intArray) / 2; x < sizeof(intArray); x += 4) {
        intArray[x / 4] = NULL;
    }
    
}


