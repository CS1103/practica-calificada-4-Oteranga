//
// Created by Alejandro  Otero on 2019-12-02.
//

#ifndef PC4_CAMBIO_COLOR_H
#define PC4_CAMBIO_COLOR_H



#include <string_view>
#include <iostream>
#include <vector>
#include <thread>
#include <future>
#include "lodepng.h"
#include "decode_encode.h"

using namespace std;

void red(string_view file,vector<unsigned char> image, unsigned int h, unsigned int w);
void red_t(string_view file);
void blue(string_view file,vector<unsigned char> image, unsigned int h, unsigned int w);
void blue_t(string_view file);
void green(string_view file,vector<unsigned char> image, unsigned int h, unsigned int w);
void green_t(string_view file);


#endif //PC4_CAMBIO_COLOR_H
