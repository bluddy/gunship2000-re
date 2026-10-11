/* GS.GS2 10bf:2a30 - reads byte from I/O port */
#include <dos.h>
unsigned char _far FUN_10bf_2a30(unsigned short port)
{
    return _inportb(port);
}