// Copyright 2021 Golovanov

#include <iostream>
#include "TimedDoor.h"

int main() {
    TimedDoor test_door(10);
    test_door.lock();
    test_door.unlock();
}
