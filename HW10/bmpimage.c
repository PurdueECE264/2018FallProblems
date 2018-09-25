#include "bmpimage.h"
// Modifyall functions in this file
/* check whether a header is valid or not
 * assume that header has been read from fptr
 * the position of the indicator of fptr is not certain
 * could be at the beginning of the file, end of the file or
 * anywhere in the file
 * note that the check is only for this exercise/assignment
 * in general, the format is more complicated
 */

#ifdef TEST_HEADERVALID

int Is_BMPHeader_Valid(BMPHeader* header, FILE *fptr) {
  // Make sure this is a BMP file
        //Check for header->type
	
	// check the offset(header->offset)from beginning of file to image data
	// which is essentially the size of the BMP header
	// known as BMP_HEADER_SIZE for this exercise/assignment

	// check for DIB header size == DIB_HEADER_SIZE
	// For this exercise/assignment
	// use header->DIB_header_size 
	
	// Make sure there is only one image plane
	//use header->planes
	
	// Make sure there is no compression
	
	// ncolours and importantcolours should be 0

	// Make sure we are getting 24 bits per pixel
	// or 16 bits per pixel
	// only for this assignment
	
	// check for file size, image size
	// based on bits, width, and height
	//check for imagesize using size-offset=imagesize, each element is a part of the header structure, so use -> accordingly

	//use ftell(fptr) for file position(file_pos)
	//check if input file can be read: if (fseek(fptr, 0, SEEK_END) != 0)
       
	//use ftell(fptr) for file file size(file_size)
	//check (fseek(fptr, file_pos, SEEK_SET) != 0) for input file reading check
	
	//check if file_size is not equal to header->size
	
	//number of rows= width of file * number of bits +31
	//multiply total value by 4
	//check if number of rows*height is the image size
	
	return TRUE;
}

#endif



#ifdef TEST_BMPOPENFILE
/* The input argument is the source file pointer.
 * The function returns an address to a dynamically allocated BMPImage
 * only if the file contains a valid image file
 * Otherwise, return NULL
 * If the function cannot get the necessary memory to store the image,
 * also return NULL
 * Any error messages should be printed to stderr
 */


BMPImage *BMP_Open(const char *filename) {
  //open file
  //read file
	FILE *fptr = fopen(filename,"r");
	

	//Allocate memory for BMPImage*;

	BMPImage *bmpImage = (BMPImage *)malloc(sizeof(BMPImage));
	//check for memory allocation errors

	
	//Read the first 54 bytes of the source into the header

	int read_size = fread(&(bmpImage->header), sizeof(BMPHeader), 1, fptr);

	//Compute data size, width, height, and bytes per pixel;
	//check for any error while reading
	
	//check if the header is valid
	
	// Allocate memory for image data
	//(bmpImage->data = (unsigned char *)malloc(sizeof(unsigned char)*((int)((bmpImage->header).imagesize))))
	//check error

	// read in the image data

	//check for error while reading
	
	fclose(fptr);
	return bmpImage;
}
#endif


#ifdef TEST_BMPWRITEFUNC
/* The input arguments are the destination file , BMPImage *image.
 * The function write the header and image data into the destination file.
 */
int BMP_Write(const char * outfile, BMPImage* image)
{
	FILE *fptr = fopen(outfile, "w");
	//open file and check for error
	
	//check error for writing
	
	// write and check for image data:(fwrite(image->data, sizeof(unsigned char), (image->header).imagesize, fptr) != (image->header).imagesize) 
	
	fclose(fptr);
	return TRUE;
}

#endif
/* The input argument is the BMPImage pointer. The function frees memory of
 * the BMPImage.
 */
#ifdef TEST_BMPFREEFUNC
void BMP_Free(BMPImage* image) {
	//free image if image is true
}

#endif

