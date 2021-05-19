

static const uint8_t I2C_ADDR = 0xEC;

static uint16_t CalibData[8];
static uint32_t TempRaw = 0x00;
static uint32_t PresRaw = 0x00;
static int32_t TempUnitData = 0;
static int32_t PresUnitData = 0;

static int ms5607_reset(void);
static int ms5607_start_pressure(void);
static int ms5607_start_temperature(void);
static int ms5607_read_adc_raw(uint32_t *pbuf);
static void ms5607_calculate(int32_t *p, int32_t *t);
static int I2C_ReadPROM(uint8_t offset, uint16_t *pbuf);