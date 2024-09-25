#pragma once
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "EquilateralTriangle.h"
#include "RegularPentagon.h"

class ShapeCollection {
private:
   std::vector<Circle> circles;

public:
   void addCircle(Circle circle);

   std::string getShapesTable();
   std::string getLargestShapeByPerimeter();
   std::string getLargestShapeByArea();
};
