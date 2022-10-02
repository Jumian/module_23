#include <iostream>

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7

#define PRINT(str) std::cout << str << std::endl;
#define IF(case,print) if(input == case) std::cout << print "day" <<std::endl;

int main() {
    int input;
    PRINT("Input number of week")
    std::cin >> input;
    IF(MONDAY,"Mon")
    IF(TUESDAY,"Tues")
    IF(WEDNESDAY,"Wednes")
    IF(THURSDAY,"Thurs")
    IF(FRIDAY,"Fri")
    IF(SATURDAY,"Satur")
    IF(SUNDAY,"Sun")

}
