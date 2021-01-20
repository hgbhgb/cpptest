#pragma once
#include "Abstract.h"
#include "Implement.h"

class CAbstract : public IAbstract
{
public:
    CAbstract(IImplement *impl);
    ~CAbstract();
    virtual void func();
protected:
private:
};

