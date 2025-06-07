#ifndef COLOR_H
#define COLOR_H

#include <ostream>

namespace Color {
enum class Code {
  BOLD = 1,
  RESET = 0,
  BG_BLUE = 44,
  BG_DEFAULT = 49,
  BG_GREEN = 42,
  BG_RED = 41,
  BG_MAGENTA = 45,
  BG_CYAN = 46,
  BG_YELLOW = 43,
  BG_LIGHT_RED = 101,
  BG_LIGHT_GREEN = 102,
  BG_LIGHT_BLUE = 104,
  BG_LIGHT_YELLOW = 103,
  FG_BLACK = 30,
  FG_BLUE = 34,
  FG_CYAN = 36,
  FG_DARK_GRAY = 90,
  FG_DEFAULT = 39,
  FG_GREEN = 32,
  FG_LIGHT_BLUE = 94,
  FG_LIGHT_CYAN = 96,
  FG_LIGHT_GRAY = 37,
  FG_LIGHT_GREEN = 92,
  FG_LIGHT_MAGENTA = 95,
  FG_LIGHT_RED = 91,
  FG_LIGHT_YELLOW = 93,
  FG_MAGENTA = 35,
  FG_RED = 31,
  FG_WHITE = 97,
  FG_YELLOW = 33,
};

class Modifier {

  Code code;

public:
  Modifier(Code pCode) : code(pCode) {}
  friend std::ostream &operator<<(std::ostream &os, const Modifier &mod) {
    return os << "\033[" << static_cast<int>(mod.code) << "m";
  }
};

} // namespace Color

static Color::Modifier bold_off(Color::Code::RESET);
static Color::Modifier bold_on(Color::Code::BOLD);
static Color::Modifier def(Color::Code::FG_DEFAULT);
static Color::Modifier red(Color::Code::FG_RED);
static Color::Modifier green(Color::Code::FG_GREEN);
static Color::Modifier yellow(Color::Code::FG_YELLOW);
static Color::Modifier blue(Color::Code::FG_BLUE);
static Color::Modifier magenta(Color::Code::FG_MAGENTA);
static Color::Modifier cyan(Color::Code::FG_CYAN);
static Color::Modifier lightGray(Color::Code::FG_LIGHT_GRAY);
static Color::Modifier darkGray(Color::Code::FG_DARK_GRAY);
static Color::Modifier lightRed(Color::Code::FG_LIGHT_RED);
static Color::Modifier lightGreen(Color::Code::FG_LIGHT_GREEN);
static Color::Modifier lightYellow(Color::Code::FG_LIGHT_YELLOW);
static Color::Modifier lightBlue(Color::Code::FG_LIGHT_BLUE);
static Color::Modifier lightMagenta(Color::Code::FG_LIGHT_MAGENTA);
static Color::Modifier lightCyan(Color::Code::FG_LIGHT_CYAN);
static Color::Modifier fgWhite(Color::Code::FG_WHITE);
static Color::Modifier fgBlack(Color::Code::FG_BLACK);
static Color::Modifier bgBlue(Color::Code::BG_BLUE);
static Color::Modifier bgGreen(Color::Code::BG_GREEN);
static Color::Modifier bgRed(Color::Code::BG_RED);
static Color::Modifier bgDefault(Color::Code::BG_DEFAULT);
static Color::Modifier bg2(Color::Code::BG_DEFAULT);      // 2
static Color::Modifier bg4(Color::Code::BG_GREEN);        // 4
static Color::Modifier bg8(Color::Code::BG_BLUE);         // 8
static Color::Modifier bg16(Color::Code::BG_RED);         // 16
static Color::Modifier bg32(Color::Code::BG_MAGENTA);     // 32
static Color::Modifier bg64(Color::Code::BG_CYAN);        // 64
static Color::Modifier bg128(Color::Code::BG_YELLOW);     // 128
static Color::Modifier bg256(Color::Code::BG_LIGHT_RED);  // 256
static Color::Modifier bg512(Color::Code::BG_LIGHT_GREEN);// 512
static Color::Modifier bg1024(Color::Code::BG_LIGHT_BLUE);// 1024
static Color::Modifier bg2048(Color::Code::BG_LIGHT_YELLOW);// 2048

#endif
