/* Copyright 2021 Gizmo Engineering
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layers {
  _QWERTY,
  _EXTRA,
  _FUNCTION
};


//  Unicode keymap
enum unicode_names
{
  A_GRAVE_LOWER,
  A_ACUTE_LOWER,
  E_GRAVE_LOWER,
  E_ACUTE_LOWER,
  I_GRAVE_LOWER,
  I_ACUTE_LOWER,
  O_GRAVE_LOWER,
  O_ACUTE_LOWER,
  U_GRAVE_LOWER,
  U_ACUTE_LOWER,
  A_GRAVE_UPPER,
  A_ACUTE_UPPER,
  E_GRAVE_UPPER,
  E_ACUTE_UPPER,
  I_GRAVE_UPPER,
  I_ACUTE_UPPER,
  O_GRAVE_UPPER,
  O_ACUTE_UPPER,
  U_GRAVE_UPPER,
  U_ACUTE_UPPER,
  TILDE,
  DEGREE,
  EURO,
  PILCROW,
  NOTEQUALTO
};

const uint32_t PROGMEM unicode_map[] = {
  [A_GRAVE_LOWER] = 0xE0,           //  à
  [A_ACUTE_LOWER] = 0xE1,	        	//  
  [E_GRAVE_LOWER] = 0xE8,	        	//  
  [E_ACUTE_LOWER] = 0xE9,           //  é
  [I_GRAVE_LOWER] = 0xEC,           //  ì
  [I_ACUTE_LOWER] = 0xED,	        	//  
  [O_GRAVE_LOWER] = 0xF2,           //  ò
  [O_ACUTE_LOWER] = 0xF3,		        //  
  [U_GRAVE_LOWER] = 0xF9,           //  ù
  [U_ACUTE_LOWER] = 0xFA,	        	//  
  [A_GRAVE_UPPER] = 0xC0,           //  À
  [A_ACUTE_UPPER] = 0xC1,		        //  
  [E_GRAVE_UPPER] = 0xC8,		        //  
  [E_ACUTE_UPPER] = 0xC9,           //  É
  [I_GRAVE_UPPER] = 0xCC,           //  Ì
  [I_ACUTE_UPPER] = 0xCD,		        //  
  [O_GRAVE_UPPER] = 0xD2,           //  Ò
  [O_ACUTE_UPPER] = 0xD3,	        	//  
  [U_GRAVE_UPPER] = 0xD9,           //  Ù
  [U_ACUTE_UPPER] = 0xDA,	        	//  
  [TILDE] = 0x7E,                   //  ~
  [DEGREE] = 0xB0,                  //  °
  [EURO] = 0x20AC,                  //  €
  [PILCROW] = 0xB6,                 //  ¶
  [NOTEQUALTO] = 0x2260,            //  ≠
};


//  Custom Key
#define UC_AGRV UP(0,10)            // à, À
#define UC_EACU UP(3,13)            // é, É            
#define UC_IGRV UP(4,14)            // ì, Ì
#define UC_OGRV UP(6,16)            // ò, Ò
#define UC_UGRV UP(8,18)            // ù, Ù
#define UC_TLDE UM(20)              // ~
#define UC_DEGR UM(21)              // °
#define UC_EURO UM(22)              // €
#define UC_PCRW UM(23)              // ¶
#define UC_NEQT UM(24)              // ≠



#define LR_FUNL OSL(_FUNCTION)
#define LR_EXTL OSL(_EXTRA)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
      ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
      │ Esc    │ 1      │ 2      │ 3      │ 4      │ 5      │ 6      │ 7      │ 8      │ 9      │ 0      │ BackSp │
      ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      │ CapsL  │ Q      │ W      │ E      │ R      │ T      │ Y      │ U      │ I      │ O      │ P      │ Canc   │
      ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      │ Tab    │ A      │ S      │ D      │ F      │ G      │ H      │ J      │ K      │ L      │ ;      │ '      │
      ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      │ 1SShft │ Z      │ X      │ C      │ V      │ B      │ N      │ M      │ ,      │ .      │ Up     │ Enter  │
      ├────────┼────────┼────────┼────────┼────────┼────────┴────────┼────────┼────────┼────────┼────────┼────────┤
      │ Ctrl   │ Win    │ Alt    │ \      │ FuncL  │ Space           │ ExtrL  │ /      │ Left   │ Down   │ Right  │
      └────────┴────────┴────────┴────────┴────────┴─────────────────┴────────┴────────┴────────┴────────┴────────┘
    */
    [_QWERTY] = LAYOUT_gk6_1x2u(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_CAPS, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        OS_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_BSLS, LR_FUNL, KC_SPC,           LR_EXTL, KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
    ),



    /*
      ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
      │ ...    │ ~      │ °      │ €      │ ¶      │        │        │        │ ≠      │ -      │ =      │ ...    │
      ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      │        │        │        │        │        │        │        │        │        │ [      │ ]      │ ...    │
      ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      │ ...    │        │        │        │        │        │        │        │        │        │ ò      │ à      │
      ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      │ ...    │        │        │        │        │        │        │        │ é      │ ì      │ PageUp │ ...    │
      ├────────┼────────┼────────┼────────┼────────┼────────┴────────┼────────┼────────┼────────┼────────┼────────┤
      │ ...    │ ...    │ ...    │        │ ...    │                 │ ...    │ ù      │ Home   │ PageDn │ End    │
      └────────┴────────┴────────┴────────┴────────┴─────────────────┴────────┴────────┴────────┴────────┴────────┘
    */
    [_EXTRA] = LAYOUT_gk6_1x2u(
        _______, UC_TLDE, UC_DEGR, UC_EURO, UC_PCRW, XXXXXXX, XXXXXXX, XXXXXXX, UC_NEQT, KC_MINS, KC_EQL,  _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, UC_OGRV, UC_AGRV,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, UC_EACU, UC_IGRV, KC_PGUP, _______,
        _______, _______, _______, XXXXXXX, _______, XXXXXXX,          _______, UC_UGRV, KC_HOME, KC_PGDN, KC_END
    ),



    /*
      ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
      │ ...    │ F1     │ F2     │ F3     │ F4     │ F5     │ F6     │ F7     │ F8     │ F9     │ F10    │ ...    │
      ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      │ BootL  │ F11    │ F12    │        │        │        │        │        │ Insert │        │        │ ...    │
      ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      │ ...    │        │ PrScr  │        │        │        │        │        │        │        │        │        │
      ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      │ CapsW  │        │        │        │        │        │        │        │        │        │ Vol+   │ ...    │
      ├────────┼────────┼────────┼────────┼────────┼────────┴────────┼────────┼────────┼────────┼────────┼────────┤
      │ ...    │ ...    │ ...    │        │        │                 │        │ Play/P │ PrevTr │ Vol-   │ NextTr │
      └────────┴────────┴────────┴────────┴────────┴─────────────────┴────────┴────────┴────────┴────────┴────────┘
    */
    [_FUNCTION] = LAYOUT_gk6_1x2u(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
        QK_BOOT, KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_INS,  XXXXXXX, XXXXXXX, _______,
        _______, XXXXXXX, KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
        CW_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLU, _______,
        _______, _______, _______, XXXXXXX, _______, XXXXXXX,          _______, KC_MPLY, KC_MPRV, KC_VOLD, KC_MNXT
    )



};



// Define caps word "breaking" keys
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        case KC_RIGHT:
        case KC_LEFT:
        case KC_DOWN:
        case KC_UP:
        case KC_LCTL:
        case KC_LSFT:
        case KC_LALT:
        case KC_LGUI:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
};