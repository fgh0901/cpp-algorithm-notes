#include "calculator.h"

void myclass:: printself(myclass mc)
{
    std::cout<<mc.mul(1,2)<<std::endl;
}

int myclass::mul(int x,int y)
{
    return x*y;
}

void myclass::pt()
{
    std::cout<<"你好"<<std::endl;
}