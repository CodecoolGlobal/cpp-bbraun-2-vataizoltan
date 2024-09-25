#pragma once
#include <string>

class Circle {
private:
   double r;
public:
   double calculateArea();
   double calculatePerimeter();
   Circle(double radius);
   std::string toString();
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};
