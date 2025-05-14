#include "include.h"

int random;

void randomness() {
    srand(time(0));
    random = rand() % SEED + 1;
}

int random_funcs() {
    randomness();

    switch(random) {
    case 1: hello1(); break; case 2: hello2(); break; case 3: hello3(); break;
    case 4: hello4(); break; case 5: hello5(); break; case 6: hello6(); break;
    case 7: hello7(); break; case 8: hello8(); break; case 9: hello9(); break;
    case 10: hello10(); break; case 11: hello11(); break; case 12: hello12(); break;
    case 13: hello13(); break; case 14: hello14(); break; case 15: hello15(); break;
    }

    return 0;
}