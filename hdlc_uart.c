#include <linux/module.h>
#include <linux/init.h>

static int __init my_init(void) {
    printk("hello - Hello Kernel!\n");
    return 0;
}

static void __exit my_exit(void) {
    printk("hello - Goodye Kernel!\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Yevhen Vydolob");
MODULE_DESCRIPTION("Simle HDLC over UART driver");
