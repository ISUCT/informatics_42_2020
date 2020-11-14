#include <iostream>
#include "calc.h"
#include <malloc.h>
#include <string>  

using namespace std;

int main()
{
    Square sqr;
    sqr.input_values();
    sqr.create_array();
    sqr.in_out_array();
    sqr.delete_array();
    sqr.test();
    return 0;
}
