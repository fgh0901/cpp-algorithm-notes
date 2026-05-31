#include<iostream>
int multiply(int num)
{
    if(num==1)return 1;
    return num*multiply(num-1);
}