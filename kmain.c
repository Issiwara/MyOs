/* The C function */

#include "frame_buffer.h"
#include "serial_port.h"


    
    int main(){

           char ptr2[] = "Hello Issiwara Kavinda ";
   
    
    serial_write(0x3F8, ptr2, 14);
    fb_write(ptr2, 14);
    
    }
