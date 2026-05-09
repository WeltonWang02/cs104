#include "randfuncs.h"
#include <cstdlib>

int flip_coin() {
    return rand() % 2;
}

int roll_d6() {
    return (rand() % 6) + 1;
}

int roll_d20() {
    return (rand() % 20) + 1;
}
