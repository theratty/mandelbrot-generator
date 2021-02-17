#pragma once

#include <iostream>

#include <IApplication.h>

class Application: IApplication
{
public:
    Application(const int argc, const char** argv);
    void Run() override;
    
private:
    const int m_argc;
    const char** m_argv;
};
