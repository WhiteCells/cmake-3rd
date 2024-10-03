#include "../include/func.h"
#include <iostream>

void sh::func()
{
    std::cout << "shared " << __func__ << std::endl;
}