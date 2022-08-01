#include <stdint.h>

// all https://makecode.com/_FDFFVsKaTUfF

#if 0
// https://makecode.com/_cdKWqYhY6EPr
const uint8_t mkcdLogo[] = {
    32,  32,  116, 143, 3,   152, 9,  152, 33,  152, 1,   1,   145, 1,   4,   145, 1,
    16,  145, 17,  70,  145, 73,  2,  2,   138, 25,  66,  9,   138, 49,  10,  39,  138,
    105, 98,  30,  1,   72,  13,  96, 39,  64,  88,  121, 124, 9,   36,  91,  16,  136,
    17,  91,  37,  125, 39,  49,  27, 79,  200, 12,  91,  1,   125, 79,  50,  27,  64,
    199, 68,  52,  115, 3,   32,  16, 54,  9,   63,  2,   100, 22,  113, 19,  135, 105,
    124, 30,  1,   32,  12,  96,  9,  138, 89,  80,  9,   140, 105, 15,  2,   140, 17,
    68,  147, 1,   16,  147, 1,   4,  147, 1,   1,   147, 33,  154, 9,   154, 3,   138};
#endif

// https://makecode.com/_7VxXm3JMPXfM - file
// https://makecode.com/_LuEUCsPEKUbs - download
const uint8_t fileLogo[] = {
32, 32, 71, 140, 201, 151, 1, 2, 146, 1, 2, 146, 63, 2, 151, 9, 153, 9, 153, 9, 146, 1, 9, 146, 3, 9, 146, 7, 9, 137, 205, 72, 140, 206, 36, 139, 207, 18, 138, 206, 36, 139, 205, 72, 149, 7, 9, 146, 3, 9, 146, 1, 9, 153, 9, 153, 9, 153, 9, 148, 63, 2, 146, 1, 2, 146, 1, 2, 146, 201, 191, 191, 191, 174
};

// https://makecode.com/_9b0RcK5yRa12
const uint8_t pendriveLogo[] = {
32, 32, 59, 137, 215, 137, 1, 143, 1, 8, 146, 203, 149, 3, 8, 146, 3, 8, 146, 115, 8, 146, 115, 8, 146, 3, 8, 146, 3, 8, 146, 115, 8, 146, 115, 8, 146, 3, 8, 146, 3, 8, 146, 203, 149, 1, 8, 146, 1, 8, 146, 1, 120, 211, 191, 191, 191, 191, 191, 191, 191, 135
};

// https://makecode.com/_TTqbj705L4mr
const uint8_t arrowLogo[] = {
32, 32, 54, 137, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 146, 211, 142, 209, 144, 207, 146, 205, 148, 203, 150, 201, 152, 199, 154, 31, 154, 7, 154, 1, 191, 191, 191, 175
};

const uint8_t font8[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x5e, 0x00, 0x00, 0x00, 
0x00, 0x0e, 0x00, 0x0e, 0x00, 0x00, 
0x28, 0xfe, 0x28, 0xfe, 0x28, 0x00, 
0x4c, 0x92, 0xff, 0x92, 0x64, 0x00, 
0x02, 0x65, 0x12, 0x48, 0xa6, 0x40, 
0x6c, 0x92, 0x92, 0x6c, 0xa0, 0x00, 
0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x7c, 0x82, 0x00, 0x00, 
0x00, 0x00, 0x82, 0x7c, 0x00, 0x00, 
0x54, 0x38, 0x10, 0x38, 0x54, 0x00, 
0x10, 0x10, 0x7c, 0x10, 0x10, 0x00, 
0x00, 0x00, 0x90, 0x70, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 
0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 
0x00, 0x60, 0x10, 0x08, 0x06, 0x00, 
0x00, 0x3c, 0x42, 0x42, 0x3c, 0x00, 
0x00, 0x44, 0x7e, 0x40, 0x00, 0x00, 
0x00, 0x44, 0x62, 0x52, 0x4c, 0x00, 
0x00, 0x42, 0x4a, 0x4e, 0x32, 0x00, 
0x30, 0x28, 0x24, 0x7e, 0x20, 0x00, 
0x00, 0x4e, 0x4a, 0x4a, 0x32, 0x00, 
0x00, 0x3c, 0x4a, 0x4a, 0x30, 0x00, 
0x00, 0x02, 0x62, 0x12, 0x0e, 0x00, 
0x00, 0x34, 0x4a, 0x4a, 0x34, 0x00, 
0x00, 0x0c, 0x52, 0x52, 0x3c, 0x00, 
0x00, 0x00, 0x6c, 0x6c, 0x00, 0x00, 
0x00, 0x00, 0x96, 0x76, 0x00, 0x00, 
0x10, 0x28, 0x28, 0x44, 0x44, 0x00, 
0x28, 0x28, 0x28, 0x28, 0x28, 0x00, 
0x44, 0x44, 0x28, 0x28, 0x10, 0x00, 
0x00, 0x02, 0x59, 0x09, 0x06, 0x00, 
0x3c, 0x42, 0x5a, 0x56, 0x08, 0x00, 
0x78, 0x14, 0x12, 0x14, 0x78, 0x00, 
0x7e, 0x4a, 0x4a, 0x4a, 0x34, 0x00, 
0x00, 0x3c, 0x42, 0x42, 0x24, 0x00, 
0x00, 0x7e, 0x42, 0x42, 0x3c, 0x00, 
0x00, 0x7e, 0x4a, 0x4a, 0x42, 0x00, 
0x00, 0x7e, 0x0a, 0x0a, 0x02, 0x00, 
0x00, 0x3c, 0x42, 0x52, 0x34, 0x00, 
0x00, 0x7e, 0x08, 0x08, 0x7e, 0x00, 
0x00, 0x42, 0x7e, 0x42, 0x00, 0x00, 
0x20, 0x40, 0x42, 0x3e, 0x02, 0x00, 
0x00, 0x7e, 0x08, 0x14, 0x62, 0x00, 
0x00, 0x7e, 0x40, 0x40, 0x40, 0x00, 
0x7e, 0x04, 0x18, 0x04, 0x7e, 0x00, 
0x00, 0x7e, 0x04, 0x08, 0x7e, 0x00, 
0x3c, 0x42, 0x42, 0x42, 0x3c, 0x00, 
0x00, 0x7e, 0x12, 0x12, 0x0c, 0x00, 
0x00, 0x3c, 0x52, 0x62, 0xbc, 0x00, 
0x00, 0x7e, 0x12, 0x12, 0x6c, 0x00, 
0x00, 0x24, 0x4a, 0x52, 0x24, 0x00, 
0x02, 0x02, 0x7e, 0x02, 0x02, 0x00, 
0x00, 0x3e, 0x40, 0x40, 0x3e, 0x00, 
0x00, 0x1e, 0x70, 0x70, 0x1e, 0x00, 
0x7e, 0x20, 0x18, 0x20, 0x7e, 0x00, 
0x42, 0x24, 0x18, 0x24, 0x42, 0x00, 
0x06, 0x08, 0x70, 0x08, 0x06, 0x00, 
0x00, 0x62, 0x52, 0x4a, 0x46, 0x00, 
0x00, 0x7e, 0x42, 0x42, 0x00, 0x00, 
0x00, 0x06, 0x08, 0x10, 0x60, 0x00, 
0x00, 0x42, 0x42, 0x7e, 0x00, 0x00, 
0x08, 0x04, 0x02, 0x04, 0x08, 0x00, 
0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 
0x00, 0x00, 0x02, 0x04, 0x00, 0x00, 
0x00, 0x30, 0x48, 0x48, 0x78, 0x00, 
0x00, 0x7e, 0x48, 0x48, 0x30, 0x00, 
0x00, 0x30, 0x48, 0x48, 0x48, 0x00, 
0x00, 0x30, 0x48, 0x48, 0x7e, 0x00, 
0x00, 0x30, 0x68, 0x58, 0x50, 0x00, 
0x00, 0x10, 0x7c, 0x12, 0x04, 0x00, 
0x00, 0x18, 0xa4, 0xa4, 0x78, 0x00, 
0x00, 0x7e, 0x08, 0x08, 0x70, 0x00, 
0x00, 0x48, 0x7a, 0x40, 0x00, 0x00, 
0x00, 0x40, 0x84, 0x7d, 0x00, 0x00, 
0x00, 0x7e, 0x10, 0x28, 0x40, 0x00, 
0x00, 0x42, 0x7e, 0x40, 0x00, 0x00, 
0x78, 0x08, 0x30, 0x08, 0x70, 0x00, 
0x00, 0x78, 0x08, 0x08, 0x70, 0x00, 
0x00, 0x30, 0x48, 0x48, 0x30, 0x00, 
0x00, 0xfc, 0x24, 0x24, 0x18, 0x00, 
0x00, 0x18, 0x24, 0x24, 0xfc, 0x00, 
0x00, 0x78, 0x10, 0x08, 0x10, 0x00, 
0x00, 0x50, 0x58, 0x68, 0x28, 0x00, 
0x00, 0x08, 0x3e, 0x48, 0x20, 0x00, 
0x00, 0x38, 0x40, 0x40, 0x78, 0x00, 
0x00, 0x18, 0x60, 0x60, 0x18, 0x00, 
0x38, 0x40, 0x30, 0x40, 0x38, 0x00, 
0x00, 0x48, 0x30, 0x30, 0x48, 0x00, 
0x00, 0x5c, 0xa0, 0xa0, 0x7c, 0x00, 
0x00, 0x48, 0x68, 0x58, 0x48, 0x00, 
0x00, 0x08, 0x36, 0x41, 0x00, 0x00, 
0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 
0x00, 0x41, 0x36, 0x08, 0x00, 0x00, 
0x00, 0x08, 0x04, 0x08, 0x04, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
