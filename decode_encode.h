//
// Created by Alejandro  Otero on 2019-12-02.
//

#ifndef PC4_DECODE_ENCODE_H
#define PC4_DECODE_ENCODE_H

#include <iostream>
#include <string_view>
#include "lodepng.h"

using namespace std;

std::vector<unsigned char> decode(string_view filename, unsigned int& width, unsigned int& height);
void encode(string_view filename, std::vector<unsigned char>& image, unsigned width, unsigned height);




#endif //PC4_DECODE_ENCODE_H
