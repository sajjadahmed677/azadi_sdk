#include "uart.h"

int main()
{    
    char *str = "Hello, World!";
    uart_init(9600, 16000000);
    uart_send_str(str);
    return 0;
}
