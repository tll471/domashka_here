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
    virtual void ShowArea() const = 0;
    virtual void ShowPerimetr() const = 0;
};

class Circle : public Figure
{
public:
    void ShowArea() const
    {
        cout << "Area of circle: " << 3.14 * m_value1 * m_value2 << endl;
    }
    void ShowPerimetr() const
    {
        cout << "P: " << 2 * 3.14 * m_value1 << endl;
    }
};

class Rectangle : public Figure
{
public:
    void ShowArea() const
    {
        cout << "Area of rectangle: " << m_value1 * m_value2 << endl;
    }
    void ShowPerimetr() const
    {
        cout << "P: " << 2 * 3.14 * m_value1 << endl;
    }
};

class Triangle : public Figure
{
public:
    void ShowArea() const
    {
        cout << "Area of triangle: " << 0.5 * m_value1 * m_value2 << endl;
    }
    void ShowPerimetr() const
    {
        cout << "P: " << 2 * 3.14 * m_value1 << endl;
    }
};

class Square : public Figure
{
public:
    void ShowArea() const
    {
        cout << "Area of square: " << m_value1 * m_value2 << endl;
    }
    void ShowPerimetr() const
    {
        cout << "P: " << 2 * 3.14 * m_value1 << endl;
    }
};

class Rhombus : public Figure
{
public:
    void ShowArea() const
    {
        cout << "Area of rhombus: " << m_value1 * m_value2 / 2 << endl;
    }
    void ShowPerimetr() const
    {
        cout << "P: " << 2 * 3.14 * m_value1 << endl;
    }
};

class Parallelogram : public Figure
{
public:
    void ShowArea() const
    {
        cout << "Area of parallelogram: " << m_value1 * m_value2 << endl;
    }
    void ShowPerimetr() const
    {
        cout << "P: " << 2 * 3.14 * m_value1 << endl;
    }
};

int main()
{
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;
    Square* square = new Square();
    Rhombus* rhombus = new Rhombus();
    Parallelogram* parallelogram = new Parallelogram();

    circle.SetDimension(10.0);
    circle.ShowArea();
    circle.ShowPerimetr();

    rectangle.SetDimension(5, 10.0);
    rectangle.ShowArea();
    rectangle.ShowPerimetr();

    triangle.SetDimension(6, 10.0);
    triangle.ShowArea();
    triangle.ShowPerimetr();

    square->SetDimension(5);
    square->ShowArea();
    square->ShowPerimetr();

    rhombus->SetDimension(10, 20);
    rhombus->ShowArea();
    rhombus->ShowPerimetr();

    parallelogram->SetDimension(5, 10);
    parallelogram->ShowArea();
    parallelogram->ShowPerimetr();

}