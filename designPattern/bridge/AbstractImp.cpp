#include "AbstractImp.h"

CAbstractImp::CAbstractImp(IImplement *impl)
{
    m_impl = impl;
}

CAbstractImp::~CAbstractImp()
{
    
}
void CAbstractImp::func()
{
    std::cout << "CAbstractImp::func" << std::endl;
    m_impl->funcImpl();
}

