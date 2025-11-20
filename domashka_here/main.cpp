#include <iostream>
using namespace std;

class Figure
{
protected:

    double m_value1;
    double m_value2;

public:

    void SetDimension(const double value1)
    {
        SetDimension(value1, value1);
    }
    void SetDimension(const double value1, const double value2)
    {
        m_value1 = value1;
        m_value2 = value2;
    }
    void ShowArea() const
    {
        cout << "Value is undefined" << endl;
    }
};

class Circle : public Figure
{
public:
    void ShowArea() const
    {
        cout << "Area of circle: " << 3.14159 * m_value1 * m_value2 << endl;
    }
};

class Rectangle : public Figure
{
public:
    void ShowArea() const
    {
        cout << "Area of rectangle: " << m_value1 * m_value2 << endl;
    }
};

class Triangle : public Figure
{
public:
    void ShowArea() const
    {
        cout << "Area of triangle: " << 0.5 * m_value1 * m_value2 << endl;
    }
};

class Square : public Figure
{
public:
    void ShowArea() const
    {
        cout << "Area of square: " << m_value1 * m_value2 << endl;
    }
};

class Rhombus : public Figure
{
public:
    void ShowArea() const
    {
        cout << "Area of rhombus: " << m_value1 * m_value2 / 2 << endl;
    }
};

class Parallelogram : public Figure
{
public:
    void ShowArea() const
    {
        cout << "Area of parallelogram: " << m_value1 * m_value2 << endl;
    }
};

int main()
{
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;
    Square square;
    Rhombus rhombus;
    Parallelogram parallelogram;

    circle.SetDimension(10.0);
    circle.ShowArea();

    rectangle.SetDimension(5.5, 10.0);
    rectangle.ShowArea();

    triangle.SetDimension(5.5, 10.0);
    triangle.ShowArea();

    square.SetDimension(5);
    square.ShowArea();

    rhombus.SetDimension(10, 20);
    rhombus.ShowArea();

    parallelogram.SetDimension(5, 10);
    parallelogram.ShowArea();

}