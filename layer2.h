// the function/arrow/nav-cluster layer, aka L2.
// this is shared among several layouts.

int layer2[44] = {
    /* Layer 2, row 0, left side. */
    KEY_INSERT, KEY_HOME, KEY_UP, KEY_END, KEY_PAGE_UP, KEY_0,
    /* Layer 2, row 0, right side. */
    KEY_UP, KEY_F7, KEY_F8, KEY_F9, KEY_F10,

    /* Layer 2, row 1, left side. */
    KEY_DELETE, KEY_LEFT, KEY_DOWN, KEY_RIGHT, KEY_PAGE_DOWN, KEY_0,
    /* Layer 2, row 1, right side. */
    KEY_DOWN, KEY_F4, KEY_F5, KEY_F6, KEY_F11,

    /* Layer 2, row 2, left side. */
    0, 0, 0, 0, 0, KEYBOARD_LEFT_ALT,
    /* Layer 2, row 2, right side. */
    0, KEY_F1, KEY_F2, KEY_F3, KEY_F12,

    /* Layer 2, row 3, left side. */
    0, KEY_TAB, KEYBOARD_LEFT_GUI, KEYBOARD_LEFT_SHIFT, KEY_BACKSPACE, KEYBOARD_RIGHT_CTRL,
    /* Layer 2, row 3, right side. */
    KEY_SPACE, PRE_FUNCTION(1), 0, FUNCTION(0), KEY_ENTER
};
