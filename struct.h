#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct{
	unsigned char red, green, blue;
}PPMPixel;

typedef struct{
	int x, y;
	PPMPixel *data;
}PPMImage;

#endif
