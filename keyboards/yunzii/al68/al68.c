// Modified from https://github.com/yunziikeyboard/qmk_firmware
#include "quantum.h"
#include "uart.h"

void keyboard_pre_init_kb(void) {
    AFIO->MAPR = (AFIO->MAPR & ~AFIO_MAPR_SWJ_CFG_Msk);
    AFIO->MAPR |= AFIO_MAPR_SWJ_CFG_DISABLE;

    gpio_set_pin_output(A8);
    gpio_write_pin_high(A8);
}
