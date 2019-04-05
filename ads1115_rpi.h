#ifndef ADS1115_RPI
#define ADS1115_RPI

/*=========================================================================
CONFIG REGISTER
-----------------------------------------------------------------------*/
#define CONFIG_REG_OS_SINGLE    	(0x8000)
#define CONFIG_REG_OS_BUSY      	(0x0000)
#define CONFIG_REG_OS_NOTBUSY   	(0x8000)

#define CONFIG_REG_MUX_MASK     	(0x7000)
#define CONFIG_REG_MUX_DIFF_0_1		(0x0000) // default
#define CONFIG_REG_MUX_DIFF_0_3		(0x1000)
#define CONFIG_REG_MUX_DIFF_1_3		(0x2000)
#define CONFIG_REG_MUX_DIFF_2_3		(0x3000)
#define CONFIG_REG_MUX_CHAN_0 		(0x4000)
#define CONFIG_REG_MUX_CHAN_1 		(0x5000)
#define CONFIG_REG_MUX_CHAN_2 		(0x6000)
#define CONFIG_REG_MUX_CHAN_3 		(0x7000)

#define CONFIG_REG_PGA_6_144V   	(0x0000) // +/-6.144V range
#define CONFIG_REG_PGA_4_096V   	(0x0200) // +/-4.096V range
#define CONFIG_REG_PGA_2_048V   	(0x0400) // +/-2.048V range // default
#define CONFIG_REG_PGA_1_024V   	(0x0600) // +/-1.024V range
#define CONFIG_REG_PGA_0_512V   	(0x0800) // +/-0.512V range
#define CONFIG_REG_PGA_0_256V   	(0x0A00) // +/-0.256V range

#define CONFIG_REG_MODE_CONTIN		(0x0000)
#define CONFIG_REG_MODE_SINGLE		(0x0100) // default

#define CONFIG_REG_DR_8SPS			(0x0000)
#define CONFIG_REG_DR_16SPS			(0x0020)
#define CONFIG_REG_DR_32SPS			(0x0040)
#define CONFIG_REG_DR_64SPS			(0x0060)
#define CONFIG_REG_DR_128SPS		(0x0080) // default
#define CONFIG_REG_DR_250SPS		(0x00A0)
#define CONFIG_REG_DR_475SPS		(0x00C0)
#define CONFIG_REG_DR_860SPS		(0x00E0)

#define CONFIG_REG_CMODE_TRAD		(0x0000) // default
#define CONFIG_REG_CMODE_WINDOW		(0x0010)

#define CONFIG_REG_CPOL_ACTIV_LOW	(0x0000) // default
#define CONFIG_REG_CPOL_ACTIV_HIGH	(0x0080)

#define CONFIG_REG_CLATCH_NONLATCH	(0x0000) // default
#define CONFIG_REG_CLATCH_LATCH		(0x0040)

#define CONFIG_REG_CQUE_1CONV		(0x0000)
#define CONFIG_REG_CQUE_2CONV		(0x0001)
#define CONFIG_REG_CQUE_4CONV		(0x0002)
#define CONFIG_REG_CQUE_NONE		(0x0003) // default

int openI2CBus(char *bus);
int setI2CSlave(unsigned char deviceAddr);
float readVoltage(int channel);

#endif
