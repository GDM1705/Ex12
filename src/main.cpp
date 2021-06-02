//  Copyright  2021  Golovanov
#include <iostream>

#include "../include/TimedDoor.h"

int main() {
  TimedDoor tDoor(5);
  tDoor.lock();
  tDoor.unlock();

  return 0;
}
