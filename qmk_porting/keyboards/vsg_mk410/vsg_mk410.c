#include QMK_KEYBOARD_H

#ifdef RGB_MATRIX_ENABLE
/* clang-format off */
led_config_t g_led_config = {
    {
        { 0,  1,  2,  3,  4,  5,      6,      7,  8,  9,  10, 11 },
        { 23, 22, 21, 20, 19, 18,     17,     16, 15, 14, 13, 12 },
        { 24, 25, 26, 27, 28, 29,     30,     31, 32, 33, 34, 35 },
        { 45, 44, 43, 42, 41, NO_LED, NO_LED, 40, 39, 38, 37, 36 },
    }, {
        {0,0},{20,0},{40,0},{60,0},{80,0},{100,0},{120,0},{140,0},{160,0},{180,0},{200,0},{224,0},
        {224,21},{200,21},{180,21},{160,21},{140,21},{120,21},{100,21},{80,21},{60,21},{40,21},{20,21},{0,21},
        {0,42},{20,42},{40,42},{60,42},{80,42},{100,42},{120,42},{140,42},{160,42},{180,42},{200,42},{224,42},
        {224,64},{200,64},{180,64},{150,64},{120,64},{100,64},{70,64},{40,64},{20,64},{0,64}
    }, {
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4
    }
};
/* clang-format on */
#endif

int main() {
    extern void protocol_setup();
    extern void protocol_pre_init();
    extern void protocol_post_init();
    extern void platform_run();

    platform_setup();
    protocol_setup();
#if !defined ESB_ENABLE || ESB_ENABLE != 2
    keyboard_setup();
#endif
    protocol_pre_init();
    keyboard_init();
    protocol_post_init();

    for (;;) {
        platform_run();
    }
}
