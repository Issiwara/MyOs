#include "log.h"
#include "frame_buffer.h"
#include "common.h"
#include "serial_port.h"



char message[] = "Hello Issiwara";

void print_screen(s8int buffer[]) { fb_write(buffer, strlen(buffer)); }

void print_serial(s8int buffer[]) {
  serial_write(buffer, strlen(buffer));
}

void print_screen_ch(s8int ch) { fb_write(&ch, 1); }

void print_serial_ch(s8int ch) { serial_write(&ch, 1); }

void clear_screen() { fb_clear(); }

/** init_display:
 *  Reset screen and display splash screen
 */
void init_display() {
  fb_clear();
  fb_write(message, 20);
}
