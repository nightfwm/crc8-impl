#include <assert.h>
#include <stdio.h>

#include "crc8.h"

int main(void) {
    uint8 crc;

    const uint8 data1[] = {0x00, 0x00, 0x00, 0x00};
    crc = CRC8Compute(data1, 4, 0xFF);
    crc ^= 0xFF;
    printf("CRC = 0x%02x\n", crc);
    assert (crc == 0x59);

    return 0;
}