#include "bmpimage.h"
//Include your own code from HW10 and modify this file
#ifdef TEST_HEADERVALID

int Is_BMPHeader_Valid(BMPHeader* header, FILE *fptr) {
	// use code from HW10
}

#endif

#ifdef TEST_BMPOPENFILE

BMPImage *BMP_Open(const char *filename) {
// use code from HW10
}
#endif


#ifdef TEST_WRITEFUNC

int BMP_Write(const char * outfile, BMPImage* image){
	// use code from HW10
}

#endif



/* The input argument is the BMPImage pointer. The function frees memory of
 * the BMPImage.
 */
#ifdef TEST_BMPFREEFUNC
void BMP_Free(BMPImage* image) {
	//free the data
}

#endif
