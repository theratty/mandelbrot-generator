#pragma once

class IApplication
{
public:
    virtual void Run() = 0;
    virtual ~IApplication() {}
};
