#include QMK_KEYBOARD_H

enum layer_number {
  _BASE = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
  _COILMAK,
  _MATRIX
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BASE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |   '  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LSFT |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  | RSFT |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * | LCTL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LGUI |LOWER | LALT | / SPC   /       \Enter \  | BSPC |RAISE |COILMA|
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_BASE] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, KC_SCLN,
  KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
                        KC_LGUI, MO(_LOWER), KC_LALT, KC_SPC, KC_ENT, KC_BSPC, MO(_RAISE), TT(_COILMAK)
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | F11  |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   ~  |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   \  |   |  |   `  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|   _  |   -  |   +  |   =  |      |      |
 * |------+------+------+------+------+------|   (   |    |    )  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LGUI |LOWER | LALT | / SPC   /       \Enter \  | BSPC |RAISE |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_LOWER] = LAYOUT(
  KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12,
  _______, _______, _______, _______, _______, _______,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_BSLS, KC_PIPE, KC_GRV,
  _______, _______, _______, _______, _______, _______,                   KC_UNDS, KC_MINS, KC_PLUS, KC_EQL,  XXXXXXX, _______,
  _______, _______, _______, _______, _______, _______, KC_LPRN, KC_RPRN, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______, _______, KC_DEL,  _______, _______
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      | VOLD | VOLU | MUTE |      |      |                    |      |      | PREV | PLAY | NEXT | PSCR |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  F5  |  F6  |  F7  |  F8  |      |-------.    ,-------| Left | Down |  Up  |Right |      |      |
 * |------+------+------+------+------+------|   (   |    |    )  |------+------+------+------+------+------|
 * |      |  F9  |  F10 |  F11 |  F12 |      |-------|    |-------|   +  |   -  |   =  |   [  |   ]  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LGUI |LOWER | LALT | / SPC   /       \Enter \  | BSPC |RAISE |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_RAISE] = LAYOUT(
  KC_ESC,  KC_VOLD, KC_VOLU, KC_MUTE, _______, _______,                     _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_PSCR,
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______,                     _______, _______, _______, _______, _______, _______,
  _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______,                     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,
  _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,  _______, _______,  KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, _______,
                             _______, _______, _______,  _______, _______,  _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |   7  |   8  |   9  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |   4  |   5  |   6  |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |   1  |   2  |   3  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LGUI |LOWER | LALT | / SPC   /       \Enter \  | BSPC |RAISE |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_ADJUST] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, _______, KC_P7,   KC_P8,   KC_P9,   _______,
  _______, _______, _______, _______, _______, _______,                   _______, _______, KC_P4,   KC_P5,   KC_P6,   _______,
  _______, _______, _______, _______, _______, _______, KC_LBRC,  KC_RBRC, _______, _______, KC_P1,   KC_P2,   KC_P3,   _______,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),
[_COILMAK] = LAYOUT(
  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
  _______, KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, KC_BSLS,
  _______, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_SCLN,
  _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______, _______, KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
                             _______, MO(_MATRIX), _______, _______, _______,  _______, _______, _______
),
[_MATRIX] = LAYOUT(
  _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                      _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______, _______, _______, _______, _______
)
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

// SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// ====== layer state ======

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state) {
    case _BASE:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Base");
        break;
    case _LOWER:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lower");
        break;
    case _RAISE:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Raise");
        break;
    case _ADJUST:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
        break;
    case _COILMAK:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Coilmak");
        break;
    case _MATRIX:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Matrix");
        break;
    default:
        snprintf(layer_state_str, sizeof(layer_state_str), "Layer: MO(%01d)", get_highest_layer(layer_state));
  }

  return layer_state_str;
}

// ====== mod state ======

char mod_state_str[24];

#define _SET_MOD_STATE(s) snprintf(mod_state_str, sizeof(mod_state_str), "%s", s)
#define _ADD_MOD_STATE(s) snprintf(mod_state_str, sizeof(mod_state_str), "%s %s", mod_state_str, s)

const char *read_mod_state(void) {
    uint16_t mod_state = get_mods();

    _SET_MOD_STATE("No Mod");
    if (mod_state == 0)
        return mod_state_str;

    _SET_MOD_STATE("Mods:");

    if (mod_state & MOD_MASK_GUI) {
        _ADD_MOD_STATE("Super");
    }
    if (mod_state & MOD_MASK_CTRL) {
        _ADD_MOD_STATE("C");
    }
    if (mod_state & MOD_MASK_ALT) {
        _ADD_MOD_STATE("A");
    }
    if (mod_state & MOD_MASK_SHIFT) {
        _ADD_MOD_STATE("S");
    }

    return mod_state_str;
}

// ====== oled setup ======

void oled_task__master(void) {
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_mod_state(), false);
}

void oled_task__slave(void) {
    // oled_write(read_logo(), false);
}

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    oled_task__master();
  } else {
    oled_task__slave();
  }
  return false;
}
#endif // OLED_ENABLE

// ====== process_record ======

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
  }
  return true;
}

// ====== key overrides ======

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
	&delete_key_override
};
