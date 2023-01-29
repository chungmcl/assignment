#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

#define   DRV_DESCRIPTION   "a very cool module"
#define   DRV_VERSION       "1.0.0"

MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_AUTHOR("chungmcl <chungmcl@cs.washington.edu>");
MODULE_VERSION(DRV_VERSION);
MODULE_LICENSE("Dual BSD/GPL");

static int __init cool_module_init(void)
{
  printk(KERN_INFO "Hello World");
  return 0;
}

static void __exit cool_module_exit(void)
{
  printk(KERN_INFO "Goodbye!");
  return;
}

module_init(cool_module_init);
module_exit(cool_module_exit);

