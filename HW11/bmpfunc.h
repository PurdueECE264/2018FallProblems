#ifndef BMP_FUNCT_H
#define BMP_FUNCT_H
#include <stdio.h>
#include <stdlib.h>
#include "bmpimage.h"

int RGB2Gray(unsigned char red, unsigned char green, unsigned char blue);

BMPImage * ImgToGray(BMPImage * image);

BMPImage * AdaptiveThresholding(BMPImage * grayImage, int radius, int epsilon);


#endif
