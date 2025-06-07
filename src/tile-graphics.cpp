#include "tile-graphics.hpp"
#include "color.hpp"
#include "tile.hpp"
#include <cmath>
#include <iomanip>
#include <sstream>
#include <vector>

namespace Game {
namespace {

// 숫자별 배경색을 지정
Color::Modifier tileBgColor(ull value) {
  std::vector<Color::Modifier> bg_colors{
      bgDefault,   // 2
      bgGreen,     // 4
      bgBlue,      // 8
      bgRed,       // 16
      bgDefault,   // 32
      bgGreen,     // 64
      bgBlue,      // 128
      bgRed,       // 256
      bgDefault,   // 512
      bgGreen,     // 1024
      bgBlue       // 2048
  };
  if (value == 0) return bgDefault;
  int log = log2(value);
  int index = log < 12 ? log - 1 : 10;
  return bg_colors[index];
}

// 밝은 배경(2, 4 등)에는 검정 글자, 그 외에는 흰색 글자
Color::Modifier tileFgColor(ull value) {
  if (value == 2 || value == 4) {
    return fgBlack;
  } else {
    return fgWhite;
  }
}

} // namespace

std::string drawTileString(tile_t currentTile) {
  std::ostringstream tile_richtext;
  if (!currentTile.value) {
    tile_richtext << "    ";
  } else {
    tile_richtext << tileBgColor(currentTile.value)
                  << tileFgColor(currentTile.value)
                  << bold_on << std::setw(4)
                  << currentTile.value << bold_off << def;
  }
  return tile_richtext.str();
}

} // namespace Game
