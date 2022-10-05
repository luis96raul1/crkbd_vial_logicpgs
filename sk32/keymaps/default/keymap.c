#include QMK_KEYBOARD_H
#include <stdio.h>

//SK32 HAS 6 LAYERS AVAILABLE
//MORE LAYERS CAN BE ADDED 
//KEYS CAN BE CONFIGURED HERE OR USING VIAL

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_CAPSLOCK,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, KC_SPC,  MO(1),     MO(2), KC_ENT  , KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     MO(3), XXXXXXX  , KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, XXXXXXX,  MO(3),     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX,  XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  )

};

//OLED DISPLAY CONFIGURATION
#ifdef OLED_ENABLE

//ORIENTATION FOR OLED DISPLAY
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  //FLIPS THE DISPLAY 180°
  }
  return rotation;
}

void oled_render_master(void) {
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("DEFAULT [0]\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("LOWER [1]\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("RAISE [2]\n"), false);
            break; 
        case 3:
            oled_write_P(PSTR("ADJUST [3]\n"), false);
            break;
        case 4:
            oled_write_P(PSTR("ADD1 [4]\n"), false);
            break;
        case 5:
          oled_write_P(PSTR("ADD2 [5]\n"), false);
          break;
    }

    oled_set_cursor(0, 1);
    oled_write("Model: SK32\n", false);
    oled_set_cursor(0, 2);
    oled_write("Profile: USER_01", false);
    oled_set_cursor(0, 3); 
    oled_write("Master: Left", false);

}

void oled_render_slave(void) {
    static const char PROGMEM my_logo[] = {
      //LogicPGS LOGO - 128x32 px
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00,
    0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0, 0xc0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x03, 0xff, 0xff, 0xff, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xf0, 0xf0,
    0x78, 0x38, 0x78, 0xf0, 0xf0, 0xe0, 0x00, 0x00, 0xe0, 0xf0, 0xf0, 0x78, 0x38, 0x30, 0x70, 0xf0,
    0xf8, 0xf8, 0x78, 0x30, 0x00, 0x00, 0x70, 0x71, 0xf3, 0xf3, 0xf1, 0x00, 0x00, 0x00, 0x80, 0xe0,
    0xf0, 0xf0, 0x38, 0x38, 0x70, 0xf8, 0x78, 0x78, 0x00, 0x00, 0x03, 0x07, 0xff, 0xff, 0xff, 0xc3,
    0xe7, 0xff, 0xff, 0x7e, 0x00, 0x00, 0x00, 0xf8, 0xfe, 0xff, 0x1f, 0x07, 0x03, 0x03, 0x83, 0x87,
    0x8f, 0x8f, 0x8f, 0x80, 0x00, 0x00, 0x00, 0x1f, 0x3f, 0x7f, 0x7f, 0xf3, 0xe3, 0xe7, 0xc7, 0x87,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x38, 0x3f, 0x3f, 0x3f, 0x38, 0x38, 0x38, 0x3e, 0x3f, 0x3f, 0x00, 0x03, 0x0f, 0x1f, 0x3f,
    0x3c, 0x38, 0x38, 0x3e, 0x1f, 0x0f, 0x01, 0x00, 0x0f, 0x1f, 0x1f, 0xbc, 0x38, 0x18, 0x9c, 0xff,
    0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x30, 0x38, 0x3f, 0x3f, 0x3f, 0x18, 0x10, 0x00, 0x03, 0x0f,
    0x1f, 0x1f, 0x3c, 0x38, 0x3c, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x18, 0x38, 0x3f, 0x3f, 0x3f, 0x38,
    0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0f, 0x1f, 0x3f, 0x3c, 0x38, 0x38, 0x39, 0x3d,
    0x1f, 0x1f, 0x3f, 0x1f, 0x18, 0x00, 0x00, 0x3e, 0x3e, 0x1e, 0x1c, 0x38, 0x38, 0x3f, 0x1f, 0x1f,
    0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x07, 0x07, 0x07, 0x03,
    0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
    oled_write_raw_P(my_logo, sizeof(my_logo));
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_master();
    } else {
      oled_render_slave();
      oled_scroll_left();
    }
    return false;
}

#endif // OLED_ENABLE


//RGB MATRIX CUSTOM LAYER LIGHTING
#ifdef RGB_MATRIX_ENABLE

//THIS ALLOWS TO CHANGE RGB COLOR OF WHOLE KEYBOARD DEPENDING ON WHICH LAYER YOU ARE
//ISSUE: DEFINED BRIGHTNESS IS NOT TAKEN INTO ACCOUNT AND MAX BRIGHTNESS (255) IS USED INSTEAD
//CONVERSION BETWEEN HSV AND RGB IS NEEDED
//THIS CODE REDUCES POWER CONSUMPTION (LESS CURRENT)

void rgb_matrix_indicators_user(void){

    //COLORS HSV
    //HSV_AZURE, HSV_BLACK/HSV_OFF, HSV_BLUE, HSV_CHARTREUSE, HSV_CORAL, HSV_CYAN
    //HSV_GOLD, HSV_GOLDENROD, HSV_GREEN, HSV_MAGENTA, HSV_ORANGE, HSV_PINK
    //HSV_PURPLE, HSV_RED, HSV_SPRINGGREEN, HSV_TEAL, HSV_TURQUOISE, HSV_WHITE, HSV_YELLOW

    //COLOR FOR LAYERS
    HSV layer1_color = {HSV_BLUE};
    HSV layer2_color = {HSV_SPRINGGREEN};
    HSV layer3_color = {HSV_TEAL};
    HSV layer4_color = {HSV_PURPLE};
    HSV layer5_color = {HSV_GOLDENROD};
    HSV capslock_color = {HSV_YELLOW};

    //HSV CONVERTED INTO RGB
     RGB  rgb_con;

    switch(get_highest_layer(layer_state)){
      case 1: 
      if (layer1_color.v > rgb_matrix_get_val()){
        layer1_color.v = rgb_matrix_get_val();
      }
        rgb_con = hsv_to_rgb(layer1_color);
        for(int i = 0; i<= DRIVER_LED_TOTAL; i++){
            rgb_matrix_set_color(i, rgb_con.r, rgb_con.g, rgb_con.b);
        }
        break;
      case 2:
      if (layer2_color.v > rgb_matrix_get_val()){
        layer2_color.v = rgb_matrix_get_val();
      }
        rgb_con = hsv_to_rgb(layer2_color);
        for(int i = 0; i<= DRIVER_LED_TOTAL; i++){
            rgb_matrix_set_color(i, rgb_con.r, rgb_con.g, rgb_con.b);
        }
        break;
      case 3:
      if (layer3_color.v > rgb_matrix_get_val()){
        layer3_color.v = rgb_matrix_get_val();
      }
        rgb_con = hsv_to_rgb(layer3_color);
        for(int i = 0; i<= DRIVER_LED_TOTAL; i++){
            rgb_matrix_set_color(i, rgb_con.r, rgb_con.g, rgb_con.b);
        }
        break;
      case 4:
      if (layer4_color.v > rgb_matrix_get_val()){
        layer4_color.v = rgb_matrix_get_val();
      }
        rgb_con = hsv_to_rgb(layer4_color);
        for(int i = 0; i<= DRIVER_LED_TOTAL; i++){
            rgb_matrix_set_color(i, rgb_con.r, rgb_con.g, rgb_con.b);
        }
        break;
      case 5:
      if (layer5_color.v > rgb_matrix_get_val()){
        layer5_color.v = rgb_matrix_get_val();
      }
        rgb_con = hsv_to_rgb(layer5_color);
        for(int i = 0; i<= DRIVER_LED_TOTAL; i++){
            rgb_matrix_set_color(i, rgb_con.r, rgb_con.g, rgb_con.b);
        }
        break;
      default:
        if(host_keyboard_led_state().caps_lock){
           if (capslock_color.v > rgb_matrix_get_val()){
                capslock_color.v = rgb_matrix_get_val();
            }
            rgb_con = hsv_to_rgb(capslock_color);
            for(int i = 0; i<= DRIVER_LED_TOTAL; i++){
                rgb_matrix_set_color(i, rgb_con.r, rgb_con.g, rgb_con.b);
            } 
        }
        break;
    }
}

#endif
