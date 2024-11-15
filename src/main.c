/*
 * Copyright (c) 2024
 * Regis Rousseau
 * Univ Lyon, INSA Lyon, Inria, CITI, EA3720
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/device.h>

int8_t main(void)
{
	printk("Hello World! %s\n", CONFIG_BOARD);
	return 0;
}