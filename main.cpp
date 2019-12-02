#include <iostream>
#include <vector>
#include <string_view>
#include "lodepng.h"
#include "rotacion.cpp"
#include "cambio_color.h"
#include "decode_encode.h"
using namespace std;

int main()
{
    red("../red.png");
    blue("../blue.png");
    green("../green.png");
    return 0;
}


