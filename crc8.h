#ifndef CRC8_IMPL_LIBRARY_H
#define CRC8_IMPL_LIBRARY_H

typedef unsigned char uint8;
typedef unsigned long uint32;

uint8 CRC8Compute(const uint8 *data, uint32 len, uint8 initVal);

#endif //CRC8_IMPL_LIBRARY_H