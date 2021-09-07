#include QMK_KEYBOARD_H

enum layer_names {
    _EMOJI,
    _FUNC,
    _RGB,
    _LAYER3
};

enum unicode_names {
    SWEAT,
    STAREYE,
    CUTETEAR,
    OOPSY,
    HUNDRED,
    SMILETEAR
};

const uint32_t PROGMEM unicode_map[] = {
    [SWEAT]  = 0x1F605,  // 😅
    [STAREYE] = 0x1F929,  // 🤩
    [CUTETEAR]  = 0x1F97A, // 🥺
    [OOPSY]  = 0x1F633,  // 😳
    [HUNDRED] = 0x1F4AF,  // 💯
    [SMILETEAR]  = 0x1F972 // 🥲
};

// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_EMOJI] = LAYOUT(
    X(HUNDRED),    X(STAREYE),
    X(SWEAT),    X(SMILETEAR),
    X(OOPSY),    X(CUTETEAR),
    CALTDEL, CALTDEL
),

[_FUNC] = LAYOUT(
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS
),

/* Layer 2
 * ,-------------.
 * |      |      |
 * |------+------|
 * |      |      |
 * |------+------|
 * |      |      |
 * |------+------|
 * |      |      |
 * `-------------'
 */
[_RGB] = LAYOUT(
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS
),

/* Layer 3
 * ,-------------.
 * |      |      |
 * |------+------|
 * |      |      |
 * |------+------|
 * |      |      |
 * |------+------|
 * |      |      |
 * `-------------'
 */
[_LAYER3] = LAYOUT(
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS
)

};
