#include <zephyr/kernel.h>
#include <zephyr/usb/usb_device.h>
#include <zephyr/net/net_if.h>
#include <zephyr/shell/shell.h>
#include <stdio.h>

#define USB_IP_ADDRESS "2.2.2.2"
#define USB_IP_NETMASK "255.255.255.0"

int set_usb_ip_and_mask()
{
	struct in_addr addr;
	struct in_addr netmask;
	struct net_if *usb_iface;

	usb_iface = net_if_get_default();
	if (!usb_iface) {
		printk("Could not get the default interface\n");
		return -1;
	}


	if (net_addr_pton(AF_INET, USB_IP_ADDRESS, &addr)) {
		printk("Invalid address: %s\n", USB_IP_ADDRESS);
		return -1;
	}

	if (net_addr_pton(AF_INET, USB_IP_NETMASK, &netmask)) {
		printk("Invalid netmask: %s\n", USB_IP_NETMASK);
		return -1;
	}

	if (net_if_ipv4_addr_add(usb_iface, &addr, NET_ADDR_MANUAL, 0) == NULL) {
		printk("unable to set IP address for USB interface\n");
		return -1;
	}

	if (!net_if_ipv4_set_netmask_by_addr(usb_iface, &addr, &netmask)) {
		printk("Unable to set netmask for USB interface: %s\n", USB_IP_NETMASK);
		return -1;
	}
	
	return 0;
}

int main(void) {
    int err = usb_enable(NULL);
	if (err != 0) {
		printk("Cannot enable USB (%d)", err);
		return 0;
	}

	err = set_usb_ip_and_mask();
	if (err != 0) {
		printk("Cannot set USB ip and mask\n");
		return 0;
	}
}