#include <iostream>
#include <opencv2/opencv.hpp>


int main(){

    cv::Mat image = cv::imread("/tmp/aaaaaaa/wallpaper.png");
    cv::imshow("Image",image);
    cv::waitKey(0);
    return EXIT_SUCCESS;


}


