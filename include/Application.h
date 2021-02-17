#pragma once

#include <IApplication.h>
#include <BitmapFileHeader.h>
#include <BitmapInfoHeader.h>

class Application: public IApplication
{
public:
    Application(const int argc, const char** argv);
    void Run() override;
    ~Application() override;
    
private:
    const int m_argc;
    const char** m_argv;
};
