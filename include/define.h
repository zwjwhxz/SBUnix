#ifndef _DEFINE_H
#define _DEFINE_H
//Pagging
#define NUMBER_OF_PAGES 32768
#define PAGE_SIZE 4096
#define PAGE_SIZE_HEX 0x1000
#define BIT_SIZE 8
#define AVAILABLE 0
#define VIRTUAL_KERNEL_BASE 0xFFFFFFFF80200000
#define VIRTUAL_VIDEO_MEM_START 0xFFFFFFFF800B8000
#define VIDEO_MEM_START 0xB8000
#define VIDEO_MEM_END 0xB89000
#define FLAGS_SUP_OFF 0x003
#define FLAGS_SUP_ON 0x003
#define PAGE_ALIGN_BITS 0xFFFFFFF0 //Important Required because of problem wih 7 byte offset
#define PAGE_ALIGN 0xFFFFFFFFFFFFF000
#define NOT_AVAILABLE 0x0
#endif
