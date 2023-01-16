#ifndef EYE_CENTER_H
#define EYE_CENTER_H

#include "opencv2/imgproc/imgproc.hpp"
#include <string>
cv::Point findEyeCenter(cv::Mat face, cv::Rect eye, std::string debugWindow);

#endif