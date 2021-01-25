#include <iostream>
#include "AbstractImp.h"

CAbstract::CAbstract(IImplement *impl)
{
    m_impl = impl;
}

CAbstract::~CAbstract()
{
    
}
void CAbstract::func()
{
    std::cout << "CAbstract::func" << std::endl;
    m_impl->funcImpl();
}

