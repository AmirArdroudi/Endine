#include <iostream>
#include <stdlib.h> //standard C library

#include "core/Object.h"

using namespace Core;

int main()
{

    int* a = new int; // int pointer on heap

    *a = 2;
    std::cout << a <<std::endl;

    Core::Object* obj = new Core::Object();


    Core::Vector2 point {2, 2};
    obj->Move(point);

//    auto pos = obj->GetPosition();
    std::cout << point.X << std::endl;

    return 0;
}


