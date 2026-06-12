#include "Test.h"
#include <iostream>
using namespace std;

// w zasadzie global
static int static_test = 10;

// nie mozna zmieniac wartosci
static const int constant_test = 1212;

int test::no_test = 0;

// wiecej informacji w LStatic... files in kcppBasic

test::test(int a) {

    no_test++;
};

void test::do_things()  {
    std::cout << "static_test static int has a value of: " << static_test << endl;

    std::cout << "constant_test constant int has a value of: " << constant_test << endl;

    static_test ++;

    std::cout << "static_test was increased: " << static_test << endl;


    std::cout << "no of active tests: " << get_test_no() << endl;

}

test::~test() {
    no_test--;
};

int test::matchAnimalToNumber(TestEnumAnimals zwierz) {
    return static_cast<int>(zwierz);
};
