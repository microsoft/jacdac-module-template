// default pin-mapping from reference designs
#define PIN_AN PA_5
#define PIN_RST PA_0
#define PIN_RX_CS PA_3
#define PIN_SCK PA_1 // SPI1
#define PIN_MISO PA_6
#define PIN_TX_MOSI PA_2
#define PIN_CS PIN_RX_CS
#define PIN_ASCK PIN_SCK
#define PIN_AMOSI PIN_TX_MOSI
#define PIN_AMISO PIN_MISO
#define PIN_PWM PA_4 // TIM14
#define PIN_INT PC_15
#define PIN_SCL PA_9  // I2C2
#define PIN_SDA PA_10 // I2C2

// use PA9/PA10 not PA11/PA12 in TSSOP-20 pkg
#define BOARD_STARTUP_CODE LL_SYSCFG_EnablePinRemap(LL_SYSCFG_PIN_RMP_PA11 | LL_SYSCFG_PIN_RMP_PA12)

// use I2C1
#define I2C_AF LL_GPIO_AF_6
#define I2C_IDX 1

// use UART1 for Jacdac Single Wire Serial
#define UART_PIN PB_6
#define UART_PIN_AF LL_GPIO_AF_0
#define USART_IDX 1

// PIN_LED is monochrome LED
#define PIN_LED NO_PIN

// uncomment next line when the GND is common for the RGB channels
// without this line, the anode (VCC) is common
// #define LED_RGB_COMMON_CATHODE 1
#define PIN_LED_R PB_0
#define PIN_LED_G PA_7
#define PIN_LED_B PB_8

// calibrated to ~50lux per channel
#define LED_R_MULT 250
#define LED_G_MULT 76
#define LED_B_MULT 221
#define RGB_LED_PERIOD 600

// best don't change
#define PIN_BL_LED PIN_LED_B
#define PIN_BL_PERIOD 300
