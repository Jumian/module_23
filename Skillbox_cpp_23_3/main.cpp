#include <iostream>

#define CARIIEGES_NUM 10
#define OPT 20
#define ARR_VAR people

bool underloaded(int number){return (number < OPT? true: false);}
bool overloaded(int number) {return (number>OPT?true:false);}


#define PRINT(STRING) std::cout <<"Carriege #"<< (STRING)<< " is ";
#define PRINTLN(STRING) std::cout << (STRING) << std::endl;
#define OVERLOADED(NUM) overloaded(NUM)
#define UNDERLOADED(NUM) underloaded(NUM)
#define CHK(CASE) if(CASE)
#define CHK_OVERLOAD(_num,__car) CHK(OVERLOADED(_num)) {PRINT(__car) PRINTLN("Overloaded") }
#define CHK_UNDERLOAD(_num,__car) CHK(UNDERLOADED(_num)) {PRINT(__car) PRINTLN("Underloaded") }
#define CHK_CAR_OVER(CAR,N)  CHK_OVERLOAD(CAR[N],N)
#define CHK_CAR_UNDER(CAR,N) CHK_UNDERLOAD(CAR[N],N)
#define FORLOOP(__var,__n,__arr,__CHK) for(int __var=0;__var<__n;++__var) { __CHK(__arr,__var) }

int main() {
    int ARR_VAR[CARIIEGES_NUM];
    FORLOOP(i,CARIIEGES_NUM,ARR_VAR, CHK_CAR_OVER)
    FORLOOP(i,CARIIEGES_NUM,ARR_VAR, CHK_CAR_UNDER)
}
