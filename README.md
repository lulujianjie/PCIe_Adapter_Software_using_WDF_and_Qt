## PCIe_Adapter_Software_using_WDF_and_Qt
This code is for a PCIe Adapter Card.
Driver is implemented based on WDF using C language.
Application is implemented based on Qt using C++.
Communication between driver and application is implemented on Win32 API.

This is an old version that could only support registering I/O instead of DMA.

You may repair some memory base address to apply the driver in your hardware.

We developed a new PCIe driver that supports DMA (Altera DMA controller).
For more detailed information on PCIe WDF driver, you may read my [blog](http://www.cnblogs.com/jacklu/tag/Windows%E9%A9%B1%E5%8A%A8%E5%BC%80%E5%8F%91/) if you can understand Chinese.


### Please cite the following paper if you think it is useful for your project:
Meng Shenwei, Lu Jianjie. Design of a PCIe Interface Card Control Software Based on WDF. Fifth International Conference on Instrumentation and Measurement, Computer, Communication and Control. IEEE, 2016:767-770.
