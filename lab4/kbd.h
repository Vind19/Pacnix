#ifndef _LCOM_I8042_KBD
#define _LCOM_I8042_KBD

#define KBD_IRQ 1

#define KBD_OUT_BUF 0x60
#define KBD_IN_BUF 0x60
#define KBC_CMD_REG 0x64

#define BIT(n) (0x01<<(n))
#define BREAK_CODE BIT(7)

#define ESC_break 0x81

#define SET_RESET_CMD 0xED
#define READ_CMD_BYTE 0x20

#define TWO_BYTE_SCAN 0xE0

#define ACK 0xFA
#define RESEND 0xFE
#define ERR 0xFC

#define DELAY_US    20000

// Commands for the mouse

#define MOUSE_IRQ 12

#define DIS_DATA_REP 0XF5   // If it's on stream mode, the host must use this cmd (
#define EN_DATA_REP 0XF4

#define RESET 0XFF
#define RESEND 0XFE

#define SET_DEFAU 0XF6		   //BEWARE because enters on stream mode
#define SET_SAMPLE_RAT 0XF3
#define SET_REMOTE_MOD 0XF0		//Enters in remote mode
#define SER_WRAP_MOD 0XEE		//Enters in wrap mode
#define RESET_WRAP_MOD 0XEC		//Enters in stream mode or remote mode

#define READ_DATA 0XEB			//Only way to read data in remote mode

#define SET_STREAM_MOD 0XEA			//Enters on stream mode
#define STATUS_REQ 0XE9			//Sends the following 3-byte status packet

#define GET_DEVICE_ID 0XF2		//0X00 for standard PS/2 mouse
#define SET_SCALL_2_1 0XE7
#define SET_SCALL_1_1 0XE6
#define SET_RESOL 0XE8


#endif