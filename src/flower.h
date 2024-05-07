#ifndef FLOWER_H_
#define FLOWER_H_

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

// colors
#define FLOWER_256_FG(id) "\x1b[38;5;" STR(id) "m"
#define FLOWER_256_BG(id) "\x1b[48;5;" STR(id) "m"

#define FLOWER_FG_BLACK "\x1b[30m"
#define FLOWER_BG_BLACK "\x1b[40m"
#define FLOWER_FG_BRIGHTBLACK "\x1b[90m"
#define FLOWER_BG_BRIGHTBLACK "\x1b[100m"

#define FLOWER_FG_RED "\x1b[31m"
#define FLOWER_BG_RED "\x1b[41m"
#define FLOWER_FG_BRIGHTRED "\x1b[91m"
#define FLOWER_BG_BRIGHTRED "\x1b[101m"

#define FLOWER_FG_GREEN "\x1b[32m"
#define FLOWER_BG_GREEN "\x1b[42m"
#define FLOWER_FG_BRIGHTGREEN "\x1b[92m"
#define FLOWER_BG_BRIGHTGREEN "\x1b[102m"

#define FLOWER_FG_YELLOW "\x1b[33m"
#define FLOWER_BG_YELLOW "\x1b[43m"
#define FLOWER_FG_BRIGHTYELLOW "\x1b[93m"
#define FLOWER_BG_BRIGHTYELLOW "\x1b[103m"

#define FLOWER_FG_BLUE "\x1b[34m"
#define FLOWER_BG_BLUE "\x1b[44m"
#define FLOWER_FG_BRIGHTBLUE "\x1b[94m"
#define FLOWER_BG_BRIGHTBLUE "\x1b[104m"

#define FLOWER_FG_MAGENTA "\x1b[35m"
#define FLOWER_BG_MAGENTA "\x1b[45m"
#define FLOWER_FG_BRIGHTMAGENTA "\x1b[95m"
#define FLOWER_BG_BRIGHTMAGENTA "\x1b[105m"

#define FLOWER_FG_CYAN "\x1b[36m"
#define FLOWER_BG_CYAN "\x1b[46m"
#define FLOWER_FG_BRIGHTCYAN "\x1b[96m"
#define FLOWER_BG_BRIGHTCYAN "\x1b[106m"

#define FLOWER_FG_WHITE "\x1b[37m"
#define FLOWER_BG_WHITE "\x1b[47m"
#define FLOWER_FG_BRIGHTWHITE "\x1b[97m"
#define FLOWER_BG_BRIGHTWHITE "\x1b[107m"

// cursor
#define FLOWER_CURSOR_HOME "\x1b[H"

#define FLOWER_CURSOR_GOTO(line, column) "\x1b[" STR(line) ";" STR(column) "H"

#define FLOWER_CURSOR_UP(lines) "\x1b[" STR(lines) "A"
#define FLOWER_CURSOR_DOWN(lines) "\x1b[" STR(lines) "B"
#define FLOWER_CURSOR_RIGHT(columns) "\x1b[" STR(columns) "C"
#define FLOWER_CURSOR_LEFT(columns) "\x1b[" STR(columns) "D"

// TODO ESC[#E moves to beginning of next line, # lines down
// TODO ESC[#F moves to beginning of previous line, # lines up

#define FLOWER_CURSOR_COLUMN(column) "\x1b[" STR(column) "G"

#define FLOWER_CURSOR_SAVE_SCO() "\x1b[s"
#define FLOWER_CURSOR_RESTORE_SCO() "\x1b[u"

#define FLOWER_SLOW_BLINK "\x1b[5m"
// NOTE this is rarely supported!!
#define FLOWER_RAPID_BLINK "\x1b[6m"
#define FLOWER_NO_BLINK "\x1b[25m"

// different text modes
#define FLOWER_RESET_ALL_MODES "\x1b[0m"

#define FLOWER_BOLD_MODE "\x1b[1m"

#define FLOWER_INTENSITY_NORMAL "\x1b[22m"

#define FLOWER_FAINT_MODE "\x1b[2m"

#define FLOWER_ITALIC_MODE "\x1b[3m"
#define FLOWER_ITALIC_MODE_DISABLE "\x1b[23m"

#define FLOWER_UNDERLINE_MODE "\x1b[4m"
#define FLOWER_UNDERLINE_MODE_DISABLE "\x1b[24m"

#define FLOWER_INVERT_MODE "\x1b[7m"
#define FLOWER_INVERT_MODE_DISABLE "\x1b[27m"

#define FLOWER_HIDDEN_MODE "\x1b[8m"
#define FLOWER_HIDDEN_MODE_DISABLE "\x1b[28m"

#define FLOWER_CROSSED_MODE "\x1b[9m"
#define FLOWER_CROSSED_MODE_DISABLE "\x1b[29m"

// erasing stuff
#define FLOWER_ERASE_IN_DISPLAY "\x1b[J"
#define FLOWER_ERASE_TO_SCREEN_END "\x1b[0J"

#define FLOWER_ERASE_TO_SCREEN_BEGINNING "\x1b[1J"

#define FLOWER_ERASE_FULL "\x1b[2J"

#define FLOWER_ERASE_SAVED "\x1b[3J"

#define FLOWER_ERASE_IN_LINE "\x1b[K"
#define FLOWER_ERASE_TO_LINE_END "\x1b[0K"

#define FLOWER_ERASE_LINE_TO_CURSOR "\x1b[1K"

#define FLOWER_ERASE_LINE_FULL "\x1b[2K"

#endif
