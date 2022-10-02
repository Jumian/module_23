#include <iostream>



#define SPRING "SPRING"
#define SUMMER "SUMMER"
#define AUTUMN "AUTUMN"
#define WINTER "WINTER"

#define SEASON SPRING

int main() {
#ifdef SEASON
    std::cout << SEASON << std::endl;
#endif
}
