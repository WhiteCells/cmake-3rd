#include "../include/func.h"
#include <iostream>

void st::func()
{
    std::cout << "static " << __func__ << std::endl;
}