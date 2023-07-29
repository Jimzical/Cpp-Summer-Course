#include <opencv2/opencv.hpp>
#include <iostream>
int main() {
    // Create a 4x4 pixel grayscale image
    cv::Mat image(4, 4, CV_8UC1, cv::Scalar(0));

    // Display the image
    cv::imshow("4x4 Image", image);
    cv::waitKey(0);

    return 0;
}