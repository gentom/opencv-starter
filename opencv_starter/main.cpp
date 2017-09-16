//
//  main.cpp
//  opencv_starter
//
//  Created by Morikawa Gento on 2017/09/16.
//  Copyright © 2017年 gentom. All rights reserved.
//
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

int main(int argc, const char * argv[])
{
    /*
    cv::Mat img(cv::Size(320, 240), CV_8UC3, cv::Scalar(60, 150, 80));
    cv::namedWindow("OpenCV3!", cv::WINDOW_AUTOSIZE);
    cv::imshow("OpenCV3!", img);
    
    cv::waitKey(0);
    */
    
    cv::Mat black(cv::Size(480,480), CV_8UC3, cv::Scalar(0,0,0));
    
    cv::namedWindow("BlackBoard", cv::WINDOW_AUTOSIZE);
    
    cv::imshow("BlackBoard", black);
    
    cv::waitKey(0);
    
    cv::destroyAllWindows();
    
    return 0;
}
