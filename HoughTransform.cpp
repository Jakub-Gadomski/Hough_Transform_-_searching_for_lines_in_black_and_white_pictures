#include <stdio.h>
#include <fstream>
#include <opencv2/opencv.hpp>
#include <omp.h>
#include <cmath>

int main() {

	cv::Mat pic1 = cv::imread("rys1.jpg");	
	int picHeigh, picWidth;
	if (!pic1.empty()) {
		picHeigh = pic1.rows;
		picWidth = pic1.cols;
	} 
    return 0;
}