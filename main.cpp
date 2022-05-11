#include "BearLibTerminal.h"
#include "entt.hpp"

#include "vector.h"
#include "layers.h"

int main() {
  terminal_open();

  terminal_bkcolor(color_from_name("grey"));
  terminal_clear();
  terminal_print(1, 1, "Hello, world!");
  terminal_refresh();

  while(terminal_read() != TK_CLOSE);

  terminal_close();

  return 0;
}
