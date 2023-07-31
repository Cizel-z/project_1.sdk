#include "uart.h"
#include "xscugic.h"
#include "xstatus.h"
#include "xuartps.h"
#include "xparameters.h"


void uart_init(void)
{

    XUartPs_Config *uart_config;
    XUartPs *InstancePtr;

    uart_config = XUartPs_LookupConfig(XPAR_PS7_UART_0_DEVICE_ID);

    XUartPs_CfgInitialize(InstancePtr,
                          uart_config, XPAR_PS7_UART_0_BASEADDR);

    XUartPs_SetBaudRate(InstancePtr, 9600);
}




