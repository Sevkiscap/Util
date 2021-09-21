// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
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
    for (int x = sizeof(floatArray) / 2; x < sizeof(floatArray); x += 4) {
        floatArray[x / 4] = NULL;
    }
    for (int x = sizeof(doubleArray) / 2; x < sizeof(doubleArray); x += 4) {
        doubleArray[x / 4] = NULL;
    }
    for (int x = sizeof(stringArray) / 2; x < sizeof(stringArray); x+=4) {
        stringArray[x / 4] = "";
    }
    size_t length = sizeof(intArray) / sizeof(intArray[0]);

    for (size_t x = 0; x < length; x++) {
        std::cout << intArray[x];
    }
}

//sources used: https://www.techiedelight.com/print-contents-array-cpp/

