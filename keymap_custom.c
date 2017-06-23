/*
 * Hasu: my personal keymap
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Fn0 Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Fn3   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn1|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    [0] = \
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, \
           TAB ,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
           FN2  ,   A,   S,   D,   F,   G,   H,   J,   K,   L, SCLN, QUOT,ENT, \
           LSFT  ,   Z,   X,   C,   V,   B,   N,   M, COMM, DOT, SLSH, RSFT,FN6, \
                LALT, FN1,           SPC           , RGUI, RALT),

    /* Layer 2: Fn2 Vi mode
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |   |   |   |   |   |   |    Backs|
     * |-----------------------------------------------------------|
     * |Fn3   |   |   |  |BSPC|   |Lef|Dow|Up |Rig|   |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |   |   |   |   |   Shift |    |
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |          Space        |Gui  |Alt|
     *       `-------------------------------------------`
     */
    [1] = \
    KEYMAP(GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0, MINS, EQL, BSLS, GRV, \
           TAB ,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,  P, LBRC, RBRC, BSPC, \
           LCTL ,   A,   S,   D,   F,   G,   H,    J,   K ,  L, SCLN, QUOT, ENT, \
           LSFT  ,   Z,   X,   C,   V,   B,   N,   M, COMM, DOT, SLSH, RSFT,TRNS, \
                LALT, TRNS,           SPC           , RGUI, RALT),

    /* Layer 3: Fn3 Vi mode[Slash]
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |   |   |   |   |   |   |    Backs|
     * |-----------------------------------------------------------|
     * |Fn2   |   |   |  |BSPC|   |Lef|Dow|Up |Rig|   |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |   |   |   |   |   Shift |    |
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |          Space        |Gui  |Alt|
     *       `-------------------------------------------`
     */
    [2] = \
    KEYMAP(ESC, TRNS, TRNS, TRNS, FN19, TRNS, FN20, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, INS, DEL, \
           TAB , TRNS, TRNS, FN17, TRNS, TRNS, TRNS, TRNS, PPLS, TRNS, TRNS, TRNS, TRNS, BSPC, \
           TRNS  , TRNS, TRNS, FN15, FN14, FN16, FN10, FN11,  FN12,  FN13, TRNS, TRNS, FN8, \
           LSFT   , TRNS, TRNS, TRNS,   A , FN18, TRNS, TRNS, TRNS, TRNS, TRNS, RSFT, TRNS, \
                LALT, LGUI,    /*SPC*/ FN9 /*SPC*/    , RGUI, RALT),



    /* Layer 1: Fn1 HHKB mode[HHKB Fn]
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |  +|  -|End|PgD|Dow|Shift |   |
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    [6] = \
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           CAPS,  NO, MPRV, MPLY, MNXT,  NO,  NO,  NO,  NO, NO, NO, UP,  FN4,  BSPC, \
           LCTL,   NO, VOLD, MUTE, VOLU,  NO, PAST, PSLS,HOME, PGUP, LEFT, RGHT, ENT, \
            LSFT,  NO,  NO,  NO,  NO,  NO, PPLS, PMNS, END, PGDN, DOWN, RSFT, FN6, \
                LALT, LGUI,          TRNS,             RGUI, RALT),

#if 0
    /* Layer 3: Fn3 Mouse mode(IJKL)[Semicolon]
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |MwL|MwD|McU|MwU|MwR|Wbk|Wfr|Alt-T|
     * |-----------------------------------------------------------|
     * |Contro|   |   |   |   |   |Mb2|McL|McD|McR|Fn |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |Mb3|Mb2|Mb1|Mb4|Mb5|   |Shift |   |
     * `-----------------------------------------------------------'
     *      |Alt |Gui  |          Mb1          |Fn   |Fn |
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    [3] = \
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           FN8, NO,  NO,  NO,  NO,  NO,  WH_L,WH_D,MS_U,WH_U,WH_R,FN9, FN10,FN8, \
           LCTL,ACL0,ACL1,ACL2,ACL2,NO,  NO,  MS_L,MS_D,MS_R,FN3, NO,  ENT, \
           LSFT,NO,  NO,  NO,  NO,  BTN3,BTN2,BTN1,FN9, FN10,NO,  RSFT,TRNS, \
                LALT,LGUI,          BTN1,               TRNS,TRNS),

    /* Layer 4: Fn4 Mouse mode(IJKL)[Space]
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |MwL|MwD|McU|MwU|MwR|Wbk|Wfr|Alt-T|
     * |-----------------------------------------------------------|
     * |Contro|   |   |   |   |   |Mb2|McL|McD|McR|Mb1|   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |Mb3|Mb2|Mb1|Mb4|Mb5|   |Shift |   |
     * `-----------------------------------------------------------'
     *      |Alt |Gui  |          Mb1          |Fn   |Fn |
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    [4] = \
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           FN8, NO,  NO,  NO,  NO,  NO,  WH_L,WH_D,MS_U,WH_U,WH_R,BTN4,BTN5,FN8, \
           LCTL,VOLD,VOLU,MUTE,NO,  NO,  NO,  MS_L,MS_D,MS_R,BTN1,NO,  ENT, \
           LSFT,NO,  NO,  NO,  NO,  BTN3,BTN2,BTN1,FN9, FN10,NO,  RSFT,TRNS, \
                LALT,LGUI,          TRNS,               TRNS,TRNS),
#endif
#if 0
    /* Layer 3: Mouse mode(HJKL)[Semicolon]
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |MwL|MwD|MwU|MwR|   |   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |   |   |   |   |McL|McD|McU|McR|Fn0|   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |Mb3|Mb2|Mb1|Mb4|Mb5|   |Shift |   |
     * `-----------------------------------------------------------'
     *      |Alt |Gui  |          Mb1          |Gui  |Fn0|
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           TAB, NO,  NO,  NO,  NO,  NO,  NO,  WH_D,WH_U,RGHT,NO,  NO,  NO,  BSPC, \
           LCTL,NO,  ACL0,ACL1,ACL2,NO,  MS_L,MS_D,MS_U,MS_R,TRNS,QUOT,ENT, \
           LSFT,NO,  NO,  NO,  NO,  BTN3,BTN2,BTN1,FN9, FN10,SLSH,RSFT,NO, \
                LALT,LGUI,          BTN1,               RGUI,TRNS),

    /* Layer4: Mouse mode(HJKL)[Space]
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |MwL|MwD|MwU|MwR|   |Wbk|Wfr|Alt-T|
     * |-----------------------------------------------------------|
     * |Contro|   |   |   |   |   |McL|McD|McU|McR|Fn0|   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |Mb3|Mb2|Mb1|Mb4|Mb5|   |Shift |   |
     * `-----------------------------------------------------------'
     *      |Alt |Gui  |          Fn0          |Gui  |Fn0|
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           FN8, NO,  NO,  NO,  NO,  NO,  NO,  WH_D,WH_U,RGHT,NO,  FN9, FN10,FN8, \
           LCTL,NO,  ACL0,ACL1,ACL2,NO,  MS_L,MS_D,MS_U,MS_R,BTN1,NO,  ENT, \
           LSFT,NO,  NO,  NO,  NO,  BTN3,BTN2,BTN1,FN9, FN10,NO,  RSFT,NO, \
                LALT,LGUI,          TRNS,               RGUI,RALT),
#endif
#if 0
    /* Layer x: Matias half-qwerty keyboard style[Space]
     * ,-----------------------------------------------------------.
     * |  -|  0|  9|  8|  7|  6|  5|  4|  3|  2|  1|   |   |   |Esc|
     * |-----------------------------------------------------------|
     * |Backs|  P|  O|  I|  U|  Y|  T|  R|  E|  W|  Q|   |   |Tab  |
     * |-----------------------------------------------------------|
     * |Contro|  ;|  L|  K|  J|  H|  G|  F|  D|  S|  A|Con|Control |
     * |-----------------------------------------------------------|
     * |Shift   |  /|  .|  ,|  M|  N|  B|  V|  C|  X|  Z|Shift |   |
     * `-----------------------------------------------------------'
     *      |Alt |Gui  |          Fn0          |Gui  |Alt|
     *      `--------------------------------------------'
     */
    KEYMAP(MINS,0,   9,   8,   7,   6,   5,   4,   3,   2,   1,   NO,  NO,  NO,  ESC, \
           BSPC,P,   O,   I,   U,   Y,   T,   R,   E,   W,   Q,   NO,  NO,  TAB, \
           LCTL,SCLN,L,   K,   J,   H,   G,   F,   D,   S,   A,   RCTL,RCTL, \
           LSFT,SLSH,DOT, COMM,M,   N,   B,   V,   C,   X,   Z,   RSFT,NO, \
                LALT,LGUI,          TRNS,               RGUI,RALT),
#endif
};



/* id for user defined functions */
enum function_id {
    SPACE,
    ENTER,

    UP,
    DOWN,
    LEFT,
    RIGHT,

    BCKSPC,
    DEL_WORD,
    FWD_DEL,

    END_WORD,
    BEGIN_WORD,
    END_LINE,
    BEGIN_LINE,
    // LSHIFT_LPAREN,
};

enum macro_id {
    HELLO,
    VOLUP,
    ALT_TAB,
    ALT_TILDE,
};


/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0]  = ACTION_DEFAULT_LAYER_SET(0),                // Default layer(not used)
    [1]  = ACTION_LAYER_MODS(1, MOD_LGUI),             // Cursor layer with Slash* /*KC_SLASH*/
    [2]  = ACTION_LAYER_MODS(2, MOD_LCTL),             // Cursor layer with Slash* /*KC_SLASH*/
    // [2]  = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC)
    // [3] = ACTION_LAYER_MOMENTARY(2),
    [6]  = ACTION_LAYER_MOMENTARY(6),                 // HHKB layer
    // [4] = ACTION_MACRO(ALT_TILDE),                    // Macro: CMD + Tilde

    [8]  = ACTION_FUNCTION(ENTER),
    [9]  = ACTION_FUNCTION(SPACE),
    [10] = ACTION_FUNCTION(LEFT),
    [11] = ACTION_FUNCTION(DOWN),
    [12] = ACTION_FUNCTION(UP),
    [13] = ACTION_FUNCTION(RIGHT),

    [14] = ACTION_FUNCTION(BCKSPC),
    [15] = ACTION_FUNCTION(DEL_WORD),
    [16] = ACTION_FUNCTION(FWD_DEL),

    [17] = ACTION_FUNCTION(END_WORD),
    [18] = ACTION_FUNCTION(BEGIN_WORD),
    [19] = ACTION_FUNCTION(END_LINE),
    [20] = ACTION_FUNCTION(BEGIN_LINE)

    // [3] = ACTION_LAYER_TAP_KEY(3, KC_SCLN),           // Mousekey layer with Semicolon*
    // [4] = ACTION_LAYER_TAP_KEY(4, KC_SPC),            // Mousekey layer with Space
   //  [5] = ACTION_LAYER_MOMENTARY(4),                  // Mousekey layer(IJKL)
   //  [6] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT),      // RControl with tap Enter
   //  [7] = ACTION_MODS_ONESHOT(MOD_LSFT),              // Oneshot Shift
   //  [8] = ACTION_MACRO(ALT_TAB),                      // Application switching
   //  [9] = ACTION_MODS_KEY(MOD_LALT, KC_LEFT),
   // [10] = ACTION_MODS_KEY(MOD_LALT, KC_RIGHT),

//  [x] = ACTION_LMOD_TAP_KEY(KC_LCTL, KC_BSPC),        // LControl with tap Backspace
//  [x] = ACTION_LMOD_TAP_KEY(KC_LCTL, KC_ESC),         // LControl with tap Esc
//  [x] = ACTION_FUNCTION_TAP(LSHIFT_LPAREN),           // Function: LShift with tap '('
 // [x] = ACTION_MACRO(HELLO),                          // Macro: say hello
//  [x] = ACTION_MACRO(VOLUP),                          // Macro: media key
};


/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case HELLO:
            return (record->event.pressed ?
                    MACRO( I(0), T(H), T(E), T(L), T(L), W(255), T(O), END ) :
                    MACRO_NONE );
        case VOLUP:
            return (record->event.pressed ?
                    MACRO( D(VOLU), U(VOLU), END ) :
                    MACRO_NONE );
        case ALT_TAB:
            return (record->event.pressed ?
                    MACRO( D(LALT), D(TAB), END ) :
                    MACRO( U(TAB), END ));
        case ALT_TILDE:
            return (record->event.pressed ?
                    MACRO( D(LGUI), D(GRV), END ) :
                    MACRO( U(GRV), END ));
    }
    return MACRO_NONE;
}



/*
 * user defined action function
 */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
#   define MODS_GUI_MASK   (MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI))
// #   define MODS_ALT_MASK   (MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))
#   define MODS_CTRL_MASK   (MOD_BIT(KC_LCTRL)|MOD_BIT(KC_RCTRL))
// #   define MODS_SFT_MASK   (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT))
    static uint8_t gui_mod;
    // static uint8_t alt_mod;
    static uint8_t ctrl_mod;
    // static uint8_t sft_mod;
    // if (record->event.pressed) dprint("P"); else dprint("R");
    // dprintf("%d", record->tap.count);
    // if (record->tap.interrupted) dprint("i");
    // dprint("\n");

    switch (id) {
        case SPACE:
            ctrl_mod = get_mods()&MODS_CTRL_MASK;
            if(record->event.pressed) {
                del_mods(ctrl_mod);
                add_key(KC_SPC);
                send_keyboard_report();
                add_mods(ctrl_mod);
            } else {
                del_key(KC_SPC);
                register_mods(ctrl_mod);
                send_keyboard_report();
            }
            return;

        case ENTER:
            ctrl_mod = get_mods()&MODS_CTRL_MASK;
            if(record->event.pressed) {
                del_mods(ctrl_mod);
                add_key(KC_ENT);
                send_keyboard_report();
                add_mods(ctrl_mod);
            } else {
                del_key(KC_ENT);
                register_mods(ctrl_mod);
                send_keyboard_report();
            }
            return;

        // ****************************************
        // VIM: LEFT, DOWN, UP, RIGHT
        // ****************************************
        case UP:
            ctrl_mod = get_mods()&MODS_CTRL_MASK;
            if(record->event.pressed) {
                del_mods(ctrl_mod);
                add_key(KC_UP);
                send_keyboard_report();
                add_mods(ctrl_mod);
            } else {
                del_key(KC_UP);
                register_mods(ctrl_mod);
                send_keyboard_report();
            }
            return;

        case DOWN:
            ctrl_mod = get_mods()&MODS_CTRL_MASK;
            if(record->event.pressed) {
                del_mods(ctrl_mod);
                add_key(KC_DOWN);
                send_keyboard_report();
                add_mods(ctrl_mod);
            } else {
                del_key(KC_DOWN);
                register_mods(ctrl_mod);
                send_keyboard_report();
            }
            return;

        case LEFT:
            ctrl_mod = get_mods()&MODS_CTRL_MASK;
            if(record->event.pressed) {
                del_mods(ctrl_mod);
                add_key(KC_LEFT);
                send_keyboard_report();
                add_mods(ctrl_mod);
            } else {
                del_key(KC_LEFT);
                register_mods(ctrl_mod);
                send_keyboard_report();
            }
            return;

        case RIGHT:
            ctrl_mod = get_mods()&MODS_CTRL_MASK;
            if(record->event.pressed) {
                del_mods(ctrl_mod);
                add_key(KC_RIGHT);
                send_keyboard_report();
                add_mods(ctrl_mod);
            } else {
                del_key(KC_RIGHT);
                register_mods(ctrl_mod);
                send_keyboard_report();
            }
            return;

        // ****************************************
        // BACKSPACE, DELETE_WORD, FORWARD_DELETE
        // ****************************************
        case BCKSPC:
            ctrl_mod = get_mods()&MODS_CTRL_MASK;
            if(record->event.pressed) {
                del_mods(ctrl_mod);
                add_key(KC_BSPC);
                send_keyboard_report();
                add_mods(ctrl_mod);
            } else {
                del_key(KC_BSPC);
                register_mods(ctrl_mod);
                send_keyboard_report();
            }
            return;

        case DEL_WORD:
            ctrl_mod = get_mods()&MODS_CTRL_MASK;
            if(record->event.pressed) {
                del_mods(ctrl_mod);
                add_weak_mods(MOD_BIT(KC_LALT));
                add_key(KC_BSPC);
                send_keyboard_report();
                del_weak_mods(MOD_BIT(KC_LALT));
                add_mods(ctrl_mod);
            } else {
                del_key(KC_BSPC);
                register_mods(ctrl_mod);
                send_keyboard_report();
            }
            return;

        case FWD_DEL:
            ctrl_mod = get_mods()&MODS_CTRL_MASK;
            if(record->event.pressed) {
                del_mods(ctrl_mod);
                add_key(KC_DEL);
                send_keyboard_report();
                add_mods(ctrl_mod);
            } else {
                del_key(KC_DEL);
                register_mods(ctrl_mod);
                send_keyboard_report();
            }
            return;

        // ****************************************
        // END_WORD, BEGIN_WORD, END_LINE, BEGIN_LINE
        // ****************************************

        case END_WORD:
            ctrl_mod = get_mods()&MODS_CTRL_MASK;
            if(record->event.pressed) {
                del_mods(ctrl_mod);
                add_weak_mods(MOD_BIT(KC_LALT));
                add_key(KC_RIGHT);
                send_keyboard_report();
                del_weak_mods(MOD_BIT(KC_LALT));
                add_mods(ctrl_mod);
            } else {
                del_key(KC_RIGHT);
                register_mods(ctrl_mod);
                send_keyboard_report();
            }
            return;

        case BEGIN_WORD:
            ctrl_mod = get_mods()&MODS_CTRL_MASK;
            if(record->event.pressed) {
                del_mods(ctrl_mod);
                add_weak_mods(MOD_BIT(KC_LALT));
                add_key(KC_LEFT);
                send_keyboard_report();
                del_weak_mods(MOD_BIT(KC_LALT));
                add_mods(ctrl_mod);
            } else {
                del_key(KC_LEFT);
                register_mods(ctrl_mod);
                send_keyboard_report();
            }
            return;

        case END_LINE:
            ctrl_mod = get_mods()&MODS_CTRL_MASK;
            if(record->event.pressed) {
                del_mods(ctrl_mod);
                add_weak_mods(MOD_BIT(KC_LGUI));
                add_key(KC_RIGHT);
                send_keyboard_report();
                del_weak_mods(MOD_BIT(KC_LGUI));
                add_mods(ctrl_mod);
            } else {
                del_key(KC_RIGHT);
                register_mods(ctrl_mod);
                send_keyboard_report();
            }
            return;

        case BEGIN_LINE:
            ctrl_mod = get_mods()&MODS_CTRL_MASK;
            if(record->event.pressed) {
                del_mods(ctrl_mod);
                add_weak_mods(MOD_BIT(KC_LGUI));
                add_key(KC_LEFT);
                send_keyboard_report();
                del_weak_mods(MOD_BIT(KC_LGUI));
                add_mods(ctrl_mod);
            } else {
                del_key(KC_LEFT);
                register_mods(ctrl_mod);
                send_keyboard_report();
            }
            return;

        // case LSHIFT_LPAREN:
        //     // Shift parentheses example: LShft + tap '('
        //     // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses
        //     // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899
        //     if (record->event.pressed) {
        //         if (record->tap.count > 0 && !record->tap.interrupted) {
        //             if (record->tap.interrupted) {
        //                 dprint("tap interrupted\n");
        //                 register_mods(MOD_BIT(KC_LSHIFT));
        //             }
        //         } else {
        //             register_mods(MOD_BIT(KC_LSHIFT));
        //         }
        //     } else {
        //         if (record->tap.count > 0 && !(record->tap.interrupted)) {
        //             add_weak_mods(MOD_BIT(KC_LSHIFT));
        //             send_keyboard_report();
        //             register_code(KC_9);
        //             unregister_code(KC_9);
        //             del_weak_mods(MOD_BIT(KC_LSHIFT));
        //             send_keyboard_report();
        //             record->tap.count = 0;  // ad hoc: cancel tap
        //         } else {
        //             unregister_mods(MOD_BIT(KC_LSHIFT));
        //         }
        //     }
        //     break;
    }
}
