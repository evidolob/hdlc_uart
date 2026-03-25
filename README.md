# hdlc_uart

Is simple HDLC over UART Linux driver


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
