//
// Created by carlo on 4/30/22.
//

#include "tester.h"
#include "gui/controller.h"
#include <QApplication>
#include <iostream>
using namespace std;
#include <glog/logging.h>
#include "model/image.h"

int Tester::testMainWindow(int argc, char **argv) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

void Tester::bmpImageTest1() {
    long size = 1200*750;
    unsigned char sizeChar[4];
    sizeChar[0] = size;
    sizeChar[1] = size >> 8;
    sizeChar[2] = size >> 16;
    sizeChar[3] = size >> 24;

    LOG(INFO) << "size = " << size;
    LOG(INFO) << "sizeChar[0] = " << +sizeChar[0];
    LOG(INFO)  << "sizeChar[1] = " << +(size >> 8);
    LOG(INFO)  << "sizeChar[1] = " << +sizeChar[1];
    LOG(INFO)  << "sizeChar[2] = " << +sizeChar[2];
    LOG(INFO)  << "sizeChar[3] = " << +sizeChar[3];
    LOG(INFO)  << "sizeChar =\t" << +sizeChar[0] << "\t" << +sizeChar[1] << "\t" << +sizeChar[2] << "\t" << +sizeChar[3];

    LOG(INFO)  << +((unsigned char ) 255) ;
}

void Tester::bmpImageTest2() {
    LOG(INFO) << "Trying to create image object.";
    Image* image = new Image(200,200);
    LOG(INFO) << "Creating an image waith the size " << image->getWidth() << "x" << image->getHeight() ;
    return;
}


void Tester::bmpImageTest3() {
    int widthC = 1280;
    int heightC = 720;
    for (int j = 0; j < heightC; ++j) {
        for (int i = 0; i < widthC; ++i) {
            cout << i << "," << j << "\t";
        }
        cout << endl;
    }
}