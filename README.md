# hdlc_uart

Is simple [HDLC](https://en.wikipedia.org/wiki/High-Level_Data_Link_Control) over UART Linux driver


# Build

```bash
make
```

Load kernel module:
```bash
sudo insmod hdlc_uart.ko
```

Unload kernel module:
```bash
sudo rmmod hdlc_uart
``` 

Read kernel logs:
```bash
sudo dmesg -w
``` 
