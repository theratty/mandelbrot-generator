#pragma once

#include <cstdint>

#pragma pack(push, 1)

struct BitmapInfoHeader
{
    const int32_t headerSize{40};
    int32_t width;
    int32_t height;
    const int16_t planes{1};
    const int16_t bitsPerPixel{24};
    const int32_t compression{0};
    int32_t dataSize{0};
    const int32_t horizontalResolution{2400};
    const int32_t verticalResolution{2400};
    int32_t colors{0};
    int32_t importantColors{0};
};

#pragma pack(pop)
