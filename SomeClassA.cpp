#include "SomeClassA.h"

SomeClassA::SomeClassA()
{
    _pData = new int(10);
}

SomeClassA::~SomeClassA()
{
    delete _pData;
}

void SomeClassA::printData()
{
    std::cout << std::endl;
    std::cout << *_pData << std::endl;
    std::cout << std::endl;
}