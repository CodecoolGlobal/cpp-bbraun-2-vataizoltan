#include <iostream>
#include "ShapeCollection.h"

using namespace std;

void ShapeCollection::addCircle(Circle circle) {
    circles.push_back(circle);
}

std::string ShapeCollection::getShapesTable() {
    string table = "";

    for (Circle circle: circles) {
        table += circle.toString() + "\n";
    }
    
    return table;
}

string ShapeCollection::getLargestShapeByArea(){
    double maxArea = 0;
    string maxAreaShape = "";

    for(Circle circle: circles){
        if (circle.calculateArea() > maxArea){
            maxArea = circle.calculateArea();
            maxAreaShape = circle.toString();
        }
    }

    return maxAreaShape;
}

string ShapeCollection::getLargestShapeByPerimeter(){
    double maxPerimeter = 0;
    string maxPerimeterShape = "";

    for(Circle circle: circles){
        if (circle.calculatePerimeter() > maxPerimeter){
            maxPerimeter = circle.calculatePerimeter();
            maxPerimeterShape = circle.toString();
        }
    }

    return maxPerimeterShape;
}




