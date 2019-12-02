//
// Created by Alejandro  Otero on 2019-12-01.
//

#include "rotacion.h"

using namespace std;

void rotar(string_view filename,vector<unsigned char> image, unsigned int w, unsigned int h){

    for (size_t i = 0; i < h; i++) {
        for (size_t j = 0; j < w * 4; j += 4) {
            double a=i*cos(45)-j*sin(45); //Matriz de transformacion
            double b=j*cos(45)+i*sin(45); //con respecto al eje x,i, y eje Y,j.
            image[a * w * 4 + b + 0]=image[i * w * 4 + j + 0]; // Red component
            image[a * w * 4 + b + 1]=image[i * w * 4 + j + 1]; // Green component
            image[a * w * 4 + b + 2]=image[i * w * 4 + j + 2]; // Blue component
            //image[a * w * 4 + b + 3]=image[i * w * 4 + j + 3]; // Alpha component

        }
        cout << endl;
    }
    encode(filename.data(),image,w,h);
}

void rot_t(string filename){
    unsigned w,h;
    auto image = decode("../in.png", w, h);

    thread t1(rotar,filename,image,w,h);
    t1.join();
}

