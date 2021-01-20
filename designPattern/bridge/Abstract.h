#pragma once

class IImplement;
class IAbstract
{
public:
    IAbstract();
    ~IAbstract();
    virtual void func() = 0;
protected:
    IImplement *m_impl;
private:
};

