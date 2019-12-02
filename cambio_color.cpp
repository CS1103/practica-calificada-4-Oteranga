//
// Created by Alejandro  Otero on 2019-12-01.
//

#include "cambio_color.h"

using namespace std;

void red(string_view file,vector<unsigned char> image, unsigned int h, unsigned int w){

    for (size_t i = 0; i < h; i++) {
        for (size_t j = 0; j < w * 4; j += 4) {
            image[i * w * 4 + j + 1] = 0; // Green component
            image[i * w * 4 + j + 2] = 0; // Blue component
        }
        cout << endl;
    }
    encode(file.data(), image, w, h);
}

void red_t(string_view file){
    unsigned w,h;
    auto image = decode("../in.png", w, h);

    thread t1(red,file,image,h,w);
    t1.join();
}


void blue(string_view file,vector<unsigned char> image, unsigned int h,unsigned int w){

    for (size_t i = 0; i < h; i++) {
        for (size_t j = 0; j < w * 4; j += 4) {
            image[i * w * 4 + j + 0] = 0; // Green component
            image[i * w * 4 + j + 1] = 0; // Blue component
        }
        cout << endl;
    }
    encode(file.data(), image, w, h);
}

void blue_t(string_view file){
    unsigned w,h;
    auto image = decode("../in.png", w, h);

    thread t1(blue,file,image,h,w);
    t1.join();
}


void green(string_view file,vector<unsigned char> image, unsigned int h, unsigned int w){

    for (size_t i = 0; i < h; i++) {
        for (size_t j = 0; j < w * 4; j += 4) {
            image[i * w * 4 + j + 0] = 0; // Red component
            image[i * w * 4 + j + 2] = 0; // Blue component
        }
        cout << endl;
    }
    encode(file.data(), image, w, h);
}

void green_t(string_view file){
    unsigned w,h;
    auto image = decode("../in.png", w, h);

    thread t1(green,file,image,h,w);
    t1.join();
}

