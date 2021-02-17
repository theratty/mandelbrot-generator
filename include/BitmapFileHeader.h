#pragma once

#include <cstdint>

#pragma pack(push, 1)

struct BitmapFileHeader
{
    const char* header = "BM";
    int32_t fileSize;
    int32_t reserved{0};
    int32_t dataOffSet;
};

#pragma pack(pop)
