//
// Created by Alejandro  Otero on 2019-12-01.
//

#include "cambio_color.h"

using namespace std;

void red(string_view file){
    unsigned w,h;
    auto image = decode("../in.png", w, h);

    for (size_t i = 0; i < h; i++) {
        for (size_t j = 0; j < w * 4; j += 4) {
            int r = image[i * w * 4 + j + 0]; // Red component
            int g = image[i * w * 4 + j + 1] = 0; // Green component
            int b = image[i * w * 4 + j + 2] = 0; // Blue component
            int a = image[i * w * 4 + j + 3]; // Alpha component
            cout << r << " ";
            cout << g << " ";
            cout << b << " ";
            cout << a << "|";
        }
        cout << endl;
    }
    unsigned img = lodepng::encode(file.data(), image, w, h);
    if(img){
        cout << "encoder error " << img << ": " << lodepng_error_text(img) << endl;
    }
}

void blue(string_view file){
    unsigned w,h;
    auto image = decode("../in.png", w, h);

    for (size_t i = 0; i < h; i++) {
        for (size_t j = 0; j < w * 4; j += 4) {
            int r = image[i * w * 4 + j + 0]=0; // Red component
            int g = image[i * w * 4 + j + 1]=0; // Green component
            int b = image[i * w * 4 + j + 2]; // Blue component
            int a = image[i * w * 4 + j + 3]; // Alpha component
            cout << r << " ";
            cout << g << " ";
            cout << b << " ";
            cout << a << "|";
        }
        cout << endl;
    }
    unsigned img = lodepng::encode(file.data(), image, w, h);
    if(img){
        cout << "encoder error " << img << ": " << lodepng_error_text(img) << endl;
    }
}

void green(string_view file){
    unsigned w,h;
    auto image = decode("../in.png", w, h);

    for (size_t i = 0; i < h; i++) {
        for (size_t j = 0; j < w * 4; j += 4) {
            int r = image[i * w * 4 + j + 0]=0; // Red component
            int g = image[i * w * 4 + j + 1]; // Green component
            int b = image[i * w * 4 + j + 2]=0; // Blue component
            int a = image[i * w * 4 + j + 3]; // Alpha component
            cout << r << " ";
            cout << g << " ";
            cout << b << " ";
            cout << a << "|";
        }
        cout << endl;
    }
    unsigned img = lodepng::encode(file.data(), image, w, h);
    if(img){
        cout << "encoder error " << img << ": " << lodepng_error_text(img) << endl;
    }
}

