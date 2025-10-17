#ifndef __console_telnet_console_h
#define __console_telnet_console_h

#ifdef __cplusplus
extern "C" {
#endif

void telnet_console_init();
void telnet_console_tx_print(const char *buf, int bc);
void telnet_console_close();

extern int recv_len;
extern unsigned char recv_buf[512];

#ifdef __cplusplus
};
#endif

#endif
