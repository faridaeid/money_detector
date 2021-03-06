//
//  RectangleDetector.hpp
//  AssignmentTwoVision
//
//  Created by Farida Eid on 11/9/17.
//  Copyright © 2017 Farida Eid. All rights reserved.
//

#ifndef RectangleDetector_hpp
#define RectangleDetector_hpp

#include "../Shapes/Line.h"

void DetectRectangle(cv::Mat original,
                       const std::vector<Line> detectedLines);


#endif /* RectangleDetector_hpp */
