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
    
    //赤い画像を用意
    cv::Mat red(cv::Size(320, 240), CV_8UC3, cv::Scalar(0, 0, 255));
    //Redウィンドウを作成
    cv::namedWindow("Red", cv::WINDOW_AUTOSIZE);
    //Redウィンドウに赤画像を表示
    cv::imshow("Red", red);
    //ユーザの入力を待つ
    cv::waitKey(0);
    //全てのウィンドウを閉じる
    cv::destroyAllWindows();
    
    return 0;
}
