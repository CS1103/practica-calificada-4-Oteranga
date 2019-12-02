//
// Created by Alejandro  Otero on 2019-12-02.
//

#ifndef PC4_ROTACION_H
#define PC4_ROTACION_H

#include <iostream>
#include <string_view>
#include <math.h>
#include <thread>
#include "lodepng.h"
#include "decode_encode.h"

void rotar(string_view filename,vector<unsigned char> image, unsigned int w, unsigned int h);
void rot_t(string filename);

#endif //PC4_ROTACION_H
