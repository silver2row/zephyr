#include <zephyr/kernel.h>
#define SLEEP_TIME_MS 100U

void main(void) {
  printk("Ya-Ya-Ya...\n");
  while (1) {
    k_msleep(SLEEP_TIME_MS);
  }
}
