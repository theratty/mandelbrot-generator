#include <iostream>
#include <memory>
#include <Application.h>

int main(const int argc, const char* argv[])
{
    std::unique_ptr<IApplication> ptrApp = std::make_unique<Application>(argc, argv);
    ptrApp->Run();
}
