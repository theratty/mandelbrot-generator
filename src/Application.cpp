#include <iostream>

#include <Application.h>

Application::Application(const int argc, const char** argv)
    : m_argc(argc), m_argv(argv)
{

}

void Application::Run()
{
    std::cout << "Hello from Application!" << std::endl;
}

Application::~Application()
{
}