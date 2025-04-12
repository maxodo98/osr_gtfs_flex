#pragma once

#include <cinttypes>
#include <string_view>

namespace osr {

enum class mode : std::uint8_t {
  kFoot,
  kWheelchair,
  kBike,
  kFlex,
  kCar,
};

std::string_view to_str(mode);

}  // namespace osr
