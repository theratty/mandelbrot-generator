#pragma once

#include <IBitmap.h>

class Bitmap : IBitmap
{
public:
    Bitmap(int width, int height);

    bool Write(std::string fileName) const override;
    void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) override;

    ~Bitmap() override;

private:
    int m_width{0};
    int m_height{0};
    std::unique_ptr<uint8_t[]> m_pPixels{nullptr};
};

