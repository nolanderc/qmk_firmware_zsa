#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
    ST_MACRO_0 = ML_SAFE_RANGE,
    ST_MACRO_1,
    KC_ARING,
    KC_ADOTS,
    KC_ODOTS,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_LEFT_GUI,    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_DELETE,
    KC_TAB,         KC_QUOTE,       KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           LGUI(LCTL(KC_LEFT)),                            LGUI(LCTL(KC_RIGHT)),KC_F,      KC_G,           KC_C,           KC_R,           KC_L,           KC_SLASH,
    KC_ESCAPE,      KC_A,           KC_O,           KC_E,           KC_U,           KC_I,           LCTL(LSFT(KC_TAB)),                             LCTL(KC_TAB),   KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           KC_MINUS,
    KC_LEFT_CTRL,   KC_SCLN,        KC_Q,           KC_J,           KC_K,           KC_X,                                                                           KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           KC_BSLS,
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_SHIFT,  ST_MACRO_0,                                                                     ST_MACRO_1,     KC_SPACE,       MO(3),          KC_RIGHT_ALT,   KC_TRANSPARENT, KC_RIGHT_CTRL,
                                                                    MO(2),          LGUI(LCTL(KC_LEFT)),TG(4),                                      RGB_VAI,        LGUI(LCTL(KC_RIGHT)),KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_LEFT,                                        KC_RIGHT,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_DELETE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TG(2),                                          TG(2),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    KC_BSPC,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_HYPR,                                        KC_MEH,         KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        MT(MOD_LGUI, KC_QUOTE),
    KC_LEFT_SHIFT,  MT(MOD_LCTL, KC_Z),KC_X,        KC_C,           KC_V,           KC_B,                                                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RCTL, KC_SLASH),KC_RIGHT_SHIFT,
    LT(2, KC_GRAVE),CW_TOGG,        KC_TRANSPARENT, KC_LEFT,        KC_RIGHT,       MT(MOD_LALT, KC_APPLICATION),                                                   MT(MOD_LCTL, KC_ESCAPE),KC_UP,  KC_DOWN,        KC_LBRC,        KC_RBRC,        MO(2),
                                                                    KC_SPACE,       KC_BSPC,        KC_LEFT_GUI,                                    KC_LEFT_ALT,    KC_TAB,         KC_ENTER
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_DELETE,
    KC_TRANSPARENT, KC_GRAVE,       KC_LABK,        KC_RABK,        KC_CIRC,        KC_CIRC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PIPE,        KC_AMPR,        KC_LBRC,        KC_RBRC,        KC_PERC,        KC_TILD,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_ASTR,        KC_EQUAL,       KC_LPRN,        KC_RPRN,        LSFT(KC_S),     KC_MINUS,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,                                                                       KC_PLUS,        KC_PLUS,        KC_LCBR,        KC_RCBR,        KC_DLR,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_ENTER,       KC_BSPC
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_ARING,       KC_PGDN,        KC_UP,          KC_PAGE_UP,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PGDN,        KC_PAGE_UP,     KC_RIGHT,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_ADOTS,       KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_ODOTS,       KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,                                                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
// clang-format on

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

bool rgb_matrix_indicators_user(void) {
    rgb_matrix_set_color_all(100, 20, 0);
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    int mods = get_mods();
    switch (keycode) {
        case ST_MACRO_0:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_TAP(X_INSERT)) SS_DELAY(100) SS_LCTL(SS_LSFT(SS_TAP(X_C))));
            }
            break;
        case ST_MACRO_1:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_V))) SS_DELAY(100) SS_LSFT(SS_TAP(X_INSERT)));
            }
            break;

        case KC_ARING: {
            if (record->event.pressed) {
                clear_mods();
                if (mods & MOD_MASK_SHIFT) {
                    send_unicode_string("Å");
                } else {
                    send_unicode_string("å");
                }
                set_mods(mods);
                return false;
            }
            break;
        }
        case KC_ADOTS: {
            if (record->event.pressed) {
                clear_mods();
                if (mods & MOD_MASK_SHIFT) {
                    send_unicode_string("Ä");
                } else {
                    send_unicode_string("ä");
                }
                set_mods(mods);
                return false;
            }
            break;
        }
        case KC_ODOTS: {
            if (record->event.pressed) {
                clear_mods();
                if (mods & MOD_MASK_SHIFT) {
                    send_unicode_string("Ö");
                } else {
                    send_unicode_string("ö");
                }
                set_mods(mods);
                return false;
            }
            break;
        }

        case KC_1:
            if (record->event.pressed) {
                if (mods & MOD_MASK_ALT) {
                    clear_mods();
                    SEND_STRING(SS_LGUI(SS_LCTL(SS_TAP(X_LEFT))));
                    set_mods(mods);
                    return false;
                }
            }
            break;
        case KC_2:
            if (record->event.pressed) {
                if (mods & MOD_MASK_ALT) {
                    clear_mods();
                    SEND_STRING(SS_LGUI(SS_LCTL(SS_TAP(X_RIGHT))));
                    set_mods(mods);
                    return false;
                }
            }
            break;

        default:
            break;
    }
    return true;
}
