#include <assert.h>
#include <stdio.h>

#include "crc8.h"

int main(void) {
    uint8 crc;

    const uint8 data1[4] = {0x00, 0x00, 0x00, 0x00};
    crc = CRC8Compute(data1, 4, 0xFF);
    printf("CRC = 0x%02x\n", crc);
    assert (crc == 0x59);

    const uint8 data2[3] = {0xF2 , 0x01, 0x83};
    crc = CRC8Compute(data2, 3, 0xFF);
    printf("CRC = 0x%02x\n", crc);
    assert (crc == 0x37);

    const uint8 data3[4] = {0x0F , 0xAA, 0x00, 0x55};
    crc = CRC8Compute(data3, 4, 0xFF);
    printf("CRC = 0x%02x\n", crc);
    assert (crc == 0x79);

    return 0;
}