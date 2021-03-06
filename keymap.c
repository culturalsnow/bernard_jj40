#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER  1
#define _RAISE  2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | -    |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | CtEnt|   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |  '   |  \   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Sf  (|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Sf)   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Alt  | Win  | Lower|Bksp  |Del/Ct|Enter |Space |Raise |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_ortho_4x12( \
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS, \
  LCTL(KC_ENT),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,   KC_QUOT, KC_BSLS, \
  KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC , \
  LALT(KC_LSFT), KC_LALT, KC_LGUI, MO(_LOWER),  KC_BSPC, LCTL_T(KC_DEL), KC_ENT, KC_SPC, MO(_RAISE), LGUI(KC_L), LCTL(LALT(KC_DEL)), _______ \
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   Tab|   !  |   @  |   #  |   $  |   %  |      |  Home|  Up  |   End|      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  ^   |  &   |  *   |  =   |  [    |   ] | Left |  Down|   Rt|   ;    |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |  CtIns|      |      |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_ortho_4x12( \
  KC_TAB,  KC_EXLM,  KC_AT,  KC_HASH,  KC_DLR,  KC_PERC,  _______,  KC_HOME,  KC_UP,  KC_END,  _______,  _______,\
  _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_EQL,  KC_LBRC, KC_RBRC, KC_LEFT, KC_DOWN, KC_RIGHT, KC_SCLN,  _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, LCTL(KC_INS), _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  1   |   2  |   3  |   4  |   5  |  6   |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_ortho_4x12( \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7, KC_8,  KC_9, KC_0, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
)
};

// Loop
void matrix_scan_user(void) {
  // Empty
};
