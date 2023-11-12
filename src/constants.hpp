#pragma once

#include <cstdint>

namespace pqe {

const uint32_t CUSTOM_MESSAGE = 0xFFFFFFFF;

enum OptionState : uint8_t {
  OFF = 0,
  ON = 1,
};

enum HairType : uint8_t {
  NO_HAIR = 0,
  SHOW_HAIR = 1,
  SHOW_HELM = 2,
};

enum QuipType : uint8_t {
  FOUR_QUIPS = 0,
  NINE_QUIPS = 1,
  HIDEOUT = 2,
};

}

// p3qe
// Copyright (C) 2023 Maritsu
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
