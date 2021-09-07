
#include QMK_KEYBOARD_H

enum layer_names {
    _FUNC,
    _EMOJI,
    _RGB,
    _LAYER3
};

enum unicode_names {
    STEETH,
    CRY,
    CUTETEAR,
    EYES,
    FROWN,
    PRAY,
    HEARTS
};

const uint32_t PROGMEM unicode_map[] = {
    [STEETH]  = 0x1F62C,  // 😬
    [CRY] = 0x1F62D,  // 😭
    [CUTETEAR]  = 0x1F97A, // 🥺
    [EYES]  = 0x1F440,  // 👀
    [FROWN] = 0x2639,  // ☹️
    [PRAY]  = 0x1F64F, // 🙏
    [HEARTS] = 0x1F60D //😍
};

// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Layer 0
 * ,------------.---------------.
 * | Task Mgr   |  Leave        |
 * |------------+---------------|
 * | Mute/Unmute|Show/Hide Video|
 * |------------+---------------|
 * | Chat       | Hand Up/Down  |
 * |------------+---------------|
 * |            | Participants  |
 * `------------'---------------'
 */
[_FUNC] = LAYOUT(
    CALTDEL,      A(KC_Q),                //Task Manager, Zoom Leave
    A(KC_A),      A(KC_V),         //Zoom Audio, Zoom Video
    A(KC_H),      A(KC_Y),         //Zoom Chat, Zoom Hand
    MO(2), A(KC_U)                   //Zoom Participants
),

/* Layer 1
 * ,-------------.
 * | 😬  |  👀  |
 * |------+------|
 * | 😍  |  🙏  |
 * |------+------|
 * | 😭  |  🥺  |
 * |------+------|
 * |      |  ☹️ |
 * `-------------'
 */
[_EMOJI] = LAYOUT(
    X(STEETH),    X(EYES),
    X(HEARTS),    X(PRAY),
    X(CRY),    X(CUTETEAR),
    KC_TRNS, X(FROWN)
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
