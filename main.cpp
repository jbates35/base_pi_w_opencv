/**
 * @function findContours_Demo.cpp
 * @brief Demo code to find contours in an image
 * @author OpenCV team
 */

#include <pigpio.h>

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include <opencv2/opencv.hpp>

// Add simple GUI elements
#define CVUI_DISABLE_COMPILATION_NOTICES
#define CVUI_IMPLEMENTATION
#include "cvui.h"

int main()
{
	
	if (gpioInitialise() < 0)
	{
		std::cout << "no???\n\n";
		return -1;
	} 
	else
	{
		std::cout << "Hello???\n\n";
	}
		
	cv::Mat _im = cv::Mat::zeros(cv::Size(10, 10), CV_8UC3);
	
	cv::VideoCapture cap;
	cap.open(0);
	
	cap.set(cv::CAP_PROP_AUTO_EXPOSURE, 1);
	
	cv::waitKey(100);
	
	char key;
	
	while (key != 'q')
	{
		//Get video camera image
		cap.read(_im);
		cv::imshow("SHOWME", _im);
		key = cv::waitKey(30);		
	}
	
	return 0;
	
}