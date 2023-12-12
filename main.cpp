#include <iostream> // fixed the mispelling
#include <iomanip>
#include "Point.h"
#include "Rectangle.h"
#include "Cube.h"

using namespace std;

int main() {
    // Create objects of the Point, Rectangle, and Cube classes
    Point point1;  // Default constructor
    Point point2(6.0, 6.0);  // Parameterized constructor

    Rectangle firstRectangle;  // Default constructor
    Rectangle goldenRectangle(1.0, 1.618);  // Parameterized constructor

    Cube firstCube;  // Default constructor
    Cube secondCube(2.0);  // Parameterized constructor

    // Update member values using setter functions
    firstRectangle.setLength(2.0);
    firstRectangle.setWidth(4.0);

    // Display values using getter functions
    cout << "First cube edge length: " << firstCube.getEdgeLength() << endl;
    cout << "Second cube edge length: " << secondCube.getEdgeLength() << endl;

    cout << "First rectangle: L = " << firstRectangle.getLength()
        << " W = " << firstRectangle.getWidth() << endl;
    cout << "Second rectangle: L = " << goldenRectangle.getLength()
        << " W = " << goldenRectangle.getWidth() << endl;

    cout << "First point (" << point1.getX() << " , " << point1.getY() << ")" << endl;
    cout << "Second point (" << point2.getX() << " , " << point2.getY() << ")" << endl;

    // Call calculateDistanceFromOrigin function on Point objects
    cout << "Distance from the origin to point 1: " << fixed << setprecision(2)
        << point1.calculateDistanceFromOrigin() << endl;
    cout << "Distance from the origin to point 2: " << fixed << setprecision(2)
        << point2.calculateDistanceFromOrigin() << endl; // needed a ;

    // Call calculateArea and calculatePerimeter functions on Rectangle objects
    cout << "First rectangle area: " << fixed << setprecision(2)
        << firstRectangle.calculateArea()
        << " and its perimeter: " << firstRectangle.calculatePerimeter() << endl;

    cout << "Golden Rectangle area: " << fixed << setprecision(2)
        << goldenRectangle.calculateArea()
        << " and its perimeter: " << goldenRectangle.calculatePerimeter() << endl;

    // Call calculateSurfaceArea and calculateVolume functions on Cube objects
    cout << "First cube surface area: " << fixed << setprecision(2)
        << firstCube.calculateSurfaceArea()
        << " and its volume: " << firstCube.calculateVolume() << endl;

    cout << "Second cube surface area: " << fixed << setprecision(2)
        << secondCube.calculateSurfaceArea()
        << " and its volume: " << secondCube.calculateVolume() << endl;
    return 0;
}
