// Modified from https://github.com/yunziikeyboard/qmk_firmware
#include "quantum.h"

void keyboard_pre_init_kb(void) {
    // without this, the K key and a few others won't work:
    AFIO->MAPR = (AFIO->MAPR & ~AFIO_MAPR_SWJ_CFG_Msk);
    AFIO->MAPR |= AFIO_MAPR_SWJ_CFG_DISABLE;

    // without this, no keys work:
    gpio_set_pin_output(A8);
}