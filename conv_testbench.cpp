#include "conv.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <memory.h>
#include <math.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#define CNN cnn
using namespace cv;
using namespace std;
int CIFAR[500] = {3,8,8,0,6,6,1,6,3,1,0,9,5,7,9,8,5,7,8,6,7,0,4,9,5,2,4,0,9,6,6,5,4,5,9,2,4,1,9,5,4,6,5,6,0,9,3,9,7,6,9,8,0,3,8,8,7,7,4,6,7,3,6,3,6,2,1,2,3,7,2,6,8,8,0,2,9,3,3,8,8,1,1,7,2,5,2,7,8,9,0,3,8,6,4,6,6,0,0,7,4,5,6,3,1,1,3,6,8,7,4,0,6,2,1,3,0,4,2,7,8,3,1,2,8,0,8,3,5,2,4,1,8,9,1,2,9,7,2,9,6,5,6,3,8,7,6,2,5,2,8,9,6,0,0,5,2,9,5,4,2,1,6,6,8,4,8,4,5,0,9,9,9,8,9,9,3,7,5,0,0,5,2,2,3,8,6,3,4,0,5,8,0,1,7,2,8,8,7,8,5,1,8,7,1,3,0,5,7,9,7,4,5,9,8,0,7,9,8,2,7,6,9,4,3,9,6,4,7,6,5,1,5,8,8,0,4,0,5,5,1,1,8,9,0,3,1,9,2,2,5,3,9,9,4,0,3,0,0,9,8,1,5,7,0,8,2,4,7,0,2,3,6,3,8,5,0,3,4,3,9,0,6,1,0,9,1,0,7,9,1,2,6,9,3,4,6,0,0,6,6,6,3,2,6,1,8,2,1,6,8,6,8,0,4,0,7,7,5,5,3,5,2,3,4,1,7,5,4,6,1,9,3,6,6,9,3,8,0,7,2,6,2,5,8,5,4,6,8,9,9,1,0,2,2,7,3,2,8,0,9,5,8,1,9,4,1,3,8,1,4,7,9,4,2,7,0,7,0,6,6,9,0,9,2,8,7,2,2,5,1,2,6,2,9,6,2,3,0,3,9,8,7,8,8,4,0,1,8,2,7,9,3,6,1,9,0,7,3,7,4,5,0,0,2,9,3,4,0,6,2,5,3,7,3,7,2,5,3,1,1,4,9,9,5,7,5,0,2,2,2,9,7,3,9,4,3,5,4,6,5,6,1,4,3,4,4,3,7,8,3,7,8,0,5,7,6,0,5,4,8,6,8,5,5,9,9,9,5,0,1,0,8,1,1,8,0,2,2,0,};
int testimage(int index)
{
	#ifndef DEBUG
	char imagename[50];
	sprintf(imagename, "../../../../../cifar10_images/%d.jpg", index);
	Mat src_img = imread(imagename, IMREAD_COLOR);
	int height = src_img.rows;
	int width = src_img.cols;
	cout << "height: " << height << " " << "width: " << width << endl;
	unsigned char *Pin = new unsigned char[height * width * 3];
	for(int i = 0; i < height; i++){
		const uchar *img_data = src_img.ptr<uchar>(i);
		for(int j = 0; j < width * 3; j++) {
			Pin[i * width * 3 + j] = img_data[j];
		}
	}
	float image[height * width * 3];
	for(int i = 0; i < height; i++)
	{
		for(int j = 0; j < width; j++)
		{
			for(int k = 0; k < 3; k++)
			{
				image[k * height * width + i * width + j] = 4. * (float(Pin[i * width * 3 + j * 3 + k]) - 128) / 256.0;
			}
		}
	}
	#else
	int height = 32;
	int width = 32;
	float image[height * width * 3];
	FILE * cheet;
	cheet = fopen("../../../../../cheet/input.dat", "r");
	for(int k = 0; k < 3; k++)
	{
		for(int i = 0; i < height; i++)
		{
			for(int j = 0; j < width; j++)
			{
				float xx;
				fscanf(cheet, "%f", &xx);
				image[k * height * width + i * width + j] = 4. * (xx - 128) / 256.0;
			}
		}
	}
	#endif
	int weight = 16 * 3 * 3 * 3 + 32 * 16 * 3 * 3 + 32 * 32 * 3 * 3 * 4;
	d_type *Weight_data = (d_type*)malloc(weight * sizeof(d_type));
	int bias = 16 + 32 * 5;
	d_type *Bias_data = (d_type*)malloc(bias * sizeof(d_type));
	int fc = 512 * 10;
	d_type *FC_data = (d_type*)malloc(fc * sizeof(d_type));
	system("pwd");
	int i;
	FILE * f;
	char filename[50] = "../../../../../weights/conv0.weight.dat";
	i = 0;
	for(int l = 1; l <= 6; l++)
	{
		filename[27] = (l + '0');
		f = fopen(filename, "r");
		float x;
		while(fscanf(f, "%f", &x) != EOF)
		{
			Weight_data[i] = x;
			i++;
		}
		fclose(f);
	}
	char biasname[50] = "../../../../../weights/conv0.bias.dat";
	i = 0;
	for(int l = 1; l <= 6; l++)
	{
		biasname[27] = (l + '0');
		f = fopen(biasname, "r");
		float x;
		while(fscanf(f, "%f", &x) != EOF)
		{
			Bias_data[i] = x;
			i++;
		}
		fclose(f);
	}

	f = fopen("../../../../../weights/fc1.weight.dat", "r");
	float x;
	i = 0;
	while(fscanf(f, "%f", &x) != EOF)
	{
		FC_data[i] = x;
		i ++;
	}
	fclose(f);

	int result;
	cnn(image, Weight_data, Bias_data, FC_data, &result);
	return result == CIFAR[index];
}
int main()
{
	#ifndef DEBUG
	int total = 0;
	for(int index = 0; index < 500; index++)
	{
		total += testiamge(index);
	}
	printf("Finished. %d %f\n", total, (float)(total) / 500.0);
	#else 
	testimage(0);
	#endif
}