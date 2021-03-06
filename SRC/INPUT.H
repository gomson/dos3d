#ifndef INPUT_H
#define INPUT_H

/*
 *  Simple key input processing.
 */

enum kbd_KeyCode
{
    KEY_ESC = 1,
    KEY_1 = 2,
    KEY_2 = 3,
    KEY_3 = 4,
    KEY_4 = 5,
    KEY_5 = 6,
    KEY_6 = 7,
    KEY_7 = 8,
    KEY_8 = 9,
    KEY_9 = 10,
    KEY_0 = 11,
    KEY_Q = 16,
    KEY_W = 17,
    KEY_R = 18,
    KEY_A = 30,
    KEY_S = 31,
    KEY_D = 32,
    KEY_F = 33,
    KEY_G = 34,
    KEY_ENTER = 28,
    KEY_UP    = 72,
    KEY_PGUP  = 73,
    KEY_LEFT  = 75,
    KEY_RIGHT = 77,
    KEY_SPACE = 57,
    KEY_DOWN  = 80,
    KEY_PGDN  = 81
};

#ifdef __cplusplus
extern "C" {
#endif

    // returns an integer array with each bit representing a keypress, mapped to KeyCode enum
    const unsigned short *kbd_getInput();

#ifdef __cplusplus
}
#endif

#endif
