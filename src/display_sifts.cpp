// @file      display_sifts.cpp
// @author    Igor Bogoslavskyi [igor.bogoslavskyi@gmail.com]
// @mantainer Ignacio Vizzo     [ivizzo@uni-bonn.de]
//
// Copyright (c) 2018 Igor Bogoslavskyi, all rights reserved
#include <sifts.h>
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/xfeatures2d/nonfree.hpp>

int main() {
  cv::Mat descriptorImage;
  cv::Mat descriptors = computeSifts("../../img/lenna.png", descriptorImage);

  cv::namedWindow("SIFT detections", cv::WINDOW_AUTOSIZE);
  imshow("SIFT detections", descriptorImage);

  cv::namedWindow("SIFT vector as image", cv::WINDOW_AUTOSIZE);
  imshow("SIFT vector as image", descriptors);

  std::cout << "Number of SIFTs: " << descriptors.rows << "\n"
            << "Size of each SIFT: " << descriptors.cols << "\n";

  cv::waitKey(0);

  return 0;
}