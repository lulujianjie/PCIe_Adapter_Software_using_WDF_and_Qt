#ifndef _USER_H
#define _USER_H//һ��Ҫ��������Ȼ�󹤳��������鷳��~~~~
//
// Define an Interface Guid so that app can find the device and talk to it.
//
#include <initguid.h>//������DEFINE_GUID�ͻ��������
// {49FA63A7-C525-4409-8DD5-EFF37A7375F8}
DEFINE_GUID( GUID_DEVINTERFACE_Spw_PCIe,
	0x49fa63a7, 0xc525, 0x4409, 0x8d, 0xd5, 0xef, 0xf3, 0x7a, 0x73, 0x75, 0xf8);
#define Spw_PCIe_IOCTL_IN_BUFFERED CTL_CODE(FILE_DEVICE_UNKNOWN, 0x800, METHOD_BUFFERED, FILE_ANY_ACCESS)//��С��0x800
#define Spw_PCIe_IOCTL_OUT_BUFFERED CTL_CODE(FILE_DEVICE_UNKNOWN, 0x801, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif