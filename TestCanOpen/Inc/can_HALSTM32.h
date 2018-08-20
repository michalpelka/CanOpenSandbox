#ifndef __CAN_HAL__
#define __CAN_HAL__
// Canfestivals includes
#include "can.h"

unsigned char canInit(unsigned int bitrate);
unsigned char canSend(CAN_PORT notused, Message *m);
unsigned char canReceive(Message *m);
unsigned char canChangeBaudRate_driver( CAN_HANDLE fd, char* baud);

#endif
