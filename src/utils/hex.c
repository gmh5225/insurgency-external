/*
 * https://github.com/0Magenta0/insurgency-external
 * Copyright 0Magenta0 2024
 * MIT License
 */

#include "hex.h"

#include <ctype.h>

char
hex_to_byte(char hex)
{
  if (isdigit(hex)) {
    return (hex - '0');
  } else if (islower(hex)) {
    return (10 + (hex - 'a'));
  } else if (isupper(hex)) {
    return (10 + (hex - 'A'));
  } else {
    return 0;
  }
}
