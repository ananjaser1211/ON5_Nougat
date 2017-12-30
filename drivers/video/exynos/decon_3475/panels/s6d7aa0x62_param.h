#ifndef __S6D7AA0X62_PARAM_H__
#define ___S6D7AA0X62_PARAM_H__

#include <linux/types.h>
#include <linux/kernel.h>


struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

#define POWER_IS_ON(pwr)			(pwr <= FB_BLANK_NORMAL)
#define UNDER_MINUS_20(temperature)	(temperature <= -20)

#define NORMAL_TEMPERATURE			25	/* 25 degrees Celsius */
#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS 	255
#define UI_MIN_BRIGHTNESS 	0
#define UI_DEFAULT_BRIGHTNESS 134

#define S6D7AA0X62_ID_REG				0xD8
#define S6D7AA0X62_ID_LEN				3


static const unsigned char SEQ_BR_OPEN[] = {
	0x53,
	0x2C,
};

static const unsigned char SEQ_BR_DEF[] = {
	0x51,
	0xB7,
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
	0x00,
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
	0x00, 0x00
};

static const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00, 0x00
};

static const unsigned char SEQ_TEST_KEY_ON_F0[] = {
	0xF0,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_OFF_F0[] = {
	0xF0,
	0xA5, 0xA5,
};

static const unsigned char SEQ_TEST_KEY_ON_F1[] = {
	0xF1,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_OFF_F1[] = {
	0xF1,
	0xA5, 0xA5,
};

static const unsigned char SEQ_TEST_KEY_ON_FC[] = {
	0xFC,
	0xA5, 0xA5,
};

static const unsigned char SEQ_TEST_KEY_OFF_FC[] = {
	0xFC,
	0x5A, 0x5A,
};

/* Commands for SEC S6D7AA0X62 */

static const unsigned char SEQ_GAMMA_FA[] = {
	0xFA,
	0x08, 0x3F, 0x0A, 0x0C, 0x00, 0x02, 0x06, 0x03, 0x04, 0x0C,
	0x11, 0x16, 0x19, 0x1A, 0x1E, 0x25, 0x2F
};

static const unsigned char SEQ_GAMMA_FB[] = {
	0xFB,
	0x08, 0x3F, 0x0A, 0x0C, 0x00, 0x01, 0x05, 0x03, 0x03, 0x0B,
	0x11, 0x16, 0x18, 0x1A, 0x1E, 0x25, 0x2E
};

static const unsigned char SEQ_S6D7AA0X62_INIT_1[] = {
	0xD0,
	0x00, 0x10,
};

static const unsigned char SEQ_S6D7AA0X62_INIT_2[] = {
	0xB1,
	0x12
};

static const unsigned char SEQ_S6D7AA0X62_INIT_3[] = {
	0xB2,
	0x14, 0x22, 0x2F, 0x18
};

static const unsigned char SEQ_S6D7AA0X62_INIT_4[] = {
	0xB3,
	0x11
};

static const unsigned char SEQ_S6D7AA0X62_INIT_5[] = {
	0xBA,
	0x03, 0x19, 0x19, 0x11, 0x03, 0x05, 0x18, 0x18, 0x77
};

static const unsigned char SEQ_S6D7AA0X62_INIT_6[] = {
	0xBC,
	0x00, 0x4E, 0x0B
};

static const unsigned char SEQ_S6D7AA0X62_INIT_7[] = {
	0xC0,
	0x80, 0x80, 0x30
};

static const unsigned char SEQ_S6D7AA0X62_INIT_8[] = {
	0xC1,
	0x01
};

static const unsigned char SEQ_S6D7AA0X62_INIT_9[] = {
	0xC2,
	0x00
};

static const unsigned char SEQ_S6D7AA0X62_INIT_10[] = {
	0xC3,
	0x40, 0x00, 0x28
};

static const unsigned char SEQ_S6D7AA0X62_INIT_11[] = {
	0xE1,
	0x03, 0x10, 0x1C, 0xA0, 0x10
};

static const unsigned char SEQ_S6D7AA0X62_INIT_12[] = {
	0xEE,
	0xA5, 0x00, 0x98, 0x00, 0xA5, 0x00, 0x98, 0x00
};

static const unsigned char SEQ_S6D7AA0X62_INIT_13[] = {
	0xF2,
	0x02, 0x10, 0x10, 0x8c, 0x60
	/* 0x02 VBP(VBP+VS) VFP HBP(HBP+HS) HFP */
};

static const unsigned char SEQ_S6D7AA0X62_INIT_14[] = {
	0xF3,
	0x01, 0x93, 0x20, 0x22, 0x80, 0x05, 0x25, 0x3C, 0x26, 0x00
};

static const unsigned char SEQ_S6D7AA0X62_INIT_15[] = {
	0xF4,
	0x02, 0x02, 0x10, 0x26, 0x10, 0x02, 0x03, 0x03, 0x03, 0x10, 0x16, 0x03, 0x00, 0x0C, 0x0C,
	0x03, 0x04, 0x05, 0x13, 0x1E, 0x09, 0x0A, 0x05, 0x05, 0x01, 0x04, 0x02, 0x61, 0x74, 0x75,
	0x72, 0x83, 0x80, 0x80, 0x00, 0x00, 0x01, 0x01, 0x28, 0x04, 0x03, 0x28, 0x01, 0xD1, 0x32
};

static const unsigned char SEQ_S6D7AA0X62_INIT_16[] = {
	0xF7,
	0x01, 0x1B, 0x08, 0x0C, 0x09, 0x0D, 0x01, 0x01, 0x01, 0x04, 0x06, 0x01, 0x01, 0x00, 0x00,
	0x1A, 0x01, 0x1B, 0x0A, 0x0E, 0x0B, 0x0F, 0x01, 0x01, 0x01, 0x05, 0x07, 0x01, 0x01, 0x00,
	0x00, 0x1A
};

static const unsigned char SEQ_S6D7AA0X62_INIT_17[] = {
	0xF6,
	0x60, 0x25, 0x05, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_S6D7AA0X62_INIT_18[] = {
	0xFD,
	0x16, 0x10, 0x11, 0x23, 0x09
};

static const unsigned char SEQ_S6D7AA0X62_INIT_19[] = {
	0xFE,
	0x00, 0x02, 0x03, 0x21, 0x80, 0x78
};

static const unsigned char SEQ_S6D7AA0X62_INIT_20[] = {
	0xEF,
	0x34, 0x12, 0x98, 0xBA, 0x10, 0x80, 0x24, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x44,	0xA0,
	0x82, 0x00
};

static const unsigned char SEQ_S6D7AA0X62_INIT_21[] = {
	0xCD,
	0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E,
};

static const unsigned char SEQ_S6D7AA0X62_INIT_22[] = {
	0xCE,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char SEQ_S6D7AA0X62_INIT_23[] = {
	0x55,
	0x01
};
#if defined(CONFIG_SEC_FACTORY)
static const unsigned char SEQ_S6D7AA0X62_REVERSE[] = {
	0x36,
	0x10
};
#endif
#endif /* ___S6D7AA0X62_PARAM_H__ */
