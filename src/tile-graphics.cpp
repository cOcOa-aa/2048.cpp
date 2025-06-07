#include "tile-graphics.hpp"
#include "color.hpp"
#include "tile.hpp"
#include <cmath>
#include <iomanip>
#include <sstream>
#include <vector>

namespace Game {
namespace {

Color::Modifier tileBgColor(ull value) {
  switch (value) {
    case 2: return bg2;
    case 4: return bg4;
    case 8: return bg8;
    case 16: return bg16;
    case 32: return bg32;
    case 64: return bg64;
    case 128: return bg128;
    case 256: return bg256;
    case 512: return bg512;
    case 1024: return bg1024;
    case 2048: return bg2048;
    default: return bgDefault;
  }
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
