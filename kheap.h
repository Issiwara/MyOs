#ifndef INCLUDE_KHEAP_H
#define INCLUDE_KHEAP_H

#pragma once
#include "types.h"
void set_physical_address(u32int kerNelPhysicalStart, u32int kernelPhysicalEnd);
u32int kmalloc_int(u32int size, u32int align, u32int *pAddrPtr);
u32int kmalloc_a(u32int size);
u32int kmalloc_p(u32int sz, u32int *pAddrPtr);
u32int kmalloc_ap(u32int size, u32int *pAddrPtr);


u32int kmalloc(u32int size);

#endif /* INCLUDE_KHEAP_H */
