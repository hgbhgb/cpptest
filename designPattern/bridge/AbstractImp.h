#pragma once
#include "Abstract.h"
#include "Implement.h"

class CAbstractImp : public IAbstract
{
public:
    CAbstractImp(IImplement *impl);
    ~CAbstractImp();
    virtual void func();
protected:
private:
};

