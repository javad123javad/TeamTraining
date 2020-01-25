// Session_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Personnel.h"
#include "Staff.h"

int main()
{
    Staff S1("Javad", "Rahimi"), S2("Hamed","Rahimi");
    std::cout << "S1: " << S1.returnInfo() << std::endl;
    std::cout << "S2: " << S2.returnInfo() << std::endl;
    //S2 = S1;
    std::swap(S2, S1);
    std::cout << "S2: " << S2.returnInfo() << std::endl;
    Staff S3(std::move(S2));
    std::cout << "S2: " << S2.returnInfo() << std::endl;
    /*****************/
    Personnel P1;
    P1.addStaff(&S1);

    Personnel P2(std::move(P1));
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
