#include <iostream>

#define CARIIEGES_NUM 10
#define OPT 20
#define ARR_VAR people

bool underloaded(int number){return (number < OPT? true: false);}
bool overloaded(int number) {return (number>OPT?true:false);}

#define PRINT(STRING) std::cout << STRING ;
#define PRINTLN(STRING) std::cout << (STRING) << std::endl;
#define PRINTCAR(STRING) PRINT("Carriege #") PRINT(STRING) PRINT(" is ");
#define PRINTPROMPT PRINT("Please input ") PRINT(CARIIEGES_NUM)  \
PRINT(" numbers of people on carieges from 0 to ") PRINT(CARIIEGES_NUM) PRINTLN(":")
#define OVERLOADED(NUM) overloaded(NUM)
#define UNDERLOADED(NUM) underloaded(NUM)
#define CHK(CASE) if(CASE)
#define CHK_OVERLOAD(_num,__car) CHK(OVERLOADED(_num)) {PRINTCAR(__car) PRINTLN("Overloaded") }
#define CHK_UNDERLOAD(_num,__car) CHK(UNDERLOADED(_num)) {PRINTCAR(__car) PRINTLN("Underloaded") }
#define CHK_CAR_OVER(CAR,N)  CHK_OVERLOAD(CAR[N],N)
#define CHK_CAR_UNDER(CAR,N) CHK_UNDERLOAD(CAR[N],N)
#define INPUT(__arr,__index) std::cin >> __arr[__index];
#define FORLOOP(__index,__n,__arr,__ACT) for(int __index=0;__index<__n;++__index) { __ACT(__arr,__index) }

int main() {
    int ARR_VAR[CARIIEGES_NUM];
    PRINTPROMPT
    FORLOOP(i,CARIIEGES_NUM,ARR_VAR, INPUT)
    FORLOOP(i,CARIIEGES_NUM,ARR_VAR, CHK_CAR_OVER)
    FORLOOP(i,CARIIEGES_NUM,ARR_VAR, CHK_CAR_UNDER)
}
