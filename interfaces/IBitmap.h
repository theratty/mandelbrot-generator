#pragma once

#include <string>
#include <cstdint>

class IBitmap
{
public:
    virtual bool Write(std::string fileName) const = 0;
    virtual void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) = 0;
    virtual ~IBitmap() {}
};
