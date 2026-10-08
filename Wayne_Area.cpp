#include <iostream>
using namespace std;

double compute_areaTriangle();
double compute_areaSquare();
double compute_areaRect();
double compute_areaCircle();

int main()
{
    double area_triangle = 0, area_square = 0, area_rect = 0, area_circle = 0;

    cout << "--Area of Shapes Using Functions--" << endl;
    cout << "Developed by: DJ Wayne T. Yamomo" << endl << endl;

    area_triangle = compute_areaTriangle();
    cout << " The area of the given triangle is: " << area_triangle;
    cout << endl << endl;

    area_square = compute_areaSquare();
    cout << " The area of the given square is: " << area_square;
    cout << endl << endl;

    area_rect = compute_areaRect();
    cout << " The area of the given rectangle is: " << area_rect;
    cout << endl << endl;

    area_circle = compute_areaCircle();
    cout << " The area of the given circle is: " << area_circle;
    cout << endl << endl;

    cout << "Thank you for using the program!";

    cout << endl;
	return 0;
}


double compute_areaTriangle()
{
    double base = 0, height = 0, area_T = 0;

    cout << "[ FINDING THE AREA OF A TRIANGLE ]" << endl;
    cout << " | Base: ";
    cin >> base;

    cout << " | Height: ";
    cin >> height;

    area_T = (base * height) / 2;

    return area_T;

}

double compute_areaSquare()
{
    double side = 0, area_S = 0;

    cout << "[ FINDING THE AREA OF A SQUARE ]" << endl;
    cout << " | Side: ";
    cin >> side;

    area_S = side * side;

    return area_S;

}

double compute_areaRect()
{
    double length = 0, width = 0, area_R = 0;

    cout << "[ FINDING THE AREA OF A RECTANGLE ]" << endl;
    cout << " | Length: ";
    cin >> length;

    cout << " | Width: ";
    cin >> width;

    area_R = length * width;

    return area_R;

}

double compute_areaCircle()
{
    double radius = 0, area_C = 0;
    const double pi = 3.14159;

    cout << "[ FINDING THE AREA OF A CIRCLE ]" << endl;
    cout << " | Radius: ";
    cin >> radius;

    area_C = pi * (radius * radius);

    return area_C;

}
