#include <iostream>
#include <vector>
#include <string_view>
#include <thread>
#include "lodepng.h"
#include "rotacion.h"
#include "cambio_color.h"
#include "decode_encode.h"

using namespace std;

int main()
{
    auto* t1= new thread(red_t,"../red_filter.png");
    auto* t2= new thread(blue_t,"../blue_filter.png");
    auto* t3= new thread(green_t,"../green_filter.png");
    //auto* t4= new thread(rotar,"../rotated.png");

    t1->join();
    t2->join();
    t3->join();
    //t4->join();

    delete t1;
    delete t2;
    delete t3;
    //delete t4;

    return 0;
}


