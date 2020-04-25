#ifndef CLASS_H
#define CLASS_H
#include <iostream>

class Tinstrument
{
    public:
    virtual void ring()
    {
        std::cout<<"Instrument!"<<std::endl;
    }
};

class Tskrzypce : public Tinstrument
{
    public:
    void ring() override
    {
        std::cout<<"Skrzypce!"<<std::endl;
    }
};

class Tgitara : public Tinstrument
{
    public:
    void ring() override
    {
        std::cout<<"Gitara!"<<std::endl;
    }
};

#endif