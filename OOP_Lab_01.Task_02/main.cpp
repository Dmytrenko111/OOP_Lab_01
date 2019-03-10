//5
#include<iostream>

using namespace std;

class Rectangle
{
private:
    double height;
    double length;
public:
    Rectangle();
    ~Rectangle();
    
    void SetHeight(double Vysota);
    double GetHeight();
    void SetLength(double Shyryna);
    double GetLength();
    double Square();
    double Perimetr();
    void SetL(int X);
};

Rectangle::Rectangle()
{
    this->length = 0;
    this->height = 0;
}

void Rectangle::SetLength(double Shyryna)
{
    if (Shyryna <= 0)
    {
        throw "false length";
    }
    
    this->length = Shyryna;
}

double Rectangle::GetLength()
{
    return this->length;
}

void Rectangle::SetHeight(double Vysota)
{
    if (Vysota <= 0)
    {
        throw "false height";
    }
    
    this->height = Vysota;
}

double Rectangle::GetHeight()
{
    return this->height;
}

double Rectangle::Square() {
    return (this->length * this->height);
}

double Rectangle::Perimetr()
{
    return ((length * 2) + (height * 2));
}


int main(void)
{
    double Shyryna, Vysota;
    Rectangle *one = new Rectangle;
    cout << "Enter length of rectangle:" << endl;
    cout << "length= ";
    cin >> Shyryna;
    cout << "Enter height of rectangle:" << endl;
    cout << "height= ";
    cin >> Vysota;
    one->SetLength(Shyryna);
    one->SetHeight(Vysota);
    cout << endl << "Length of the rectangle: " << one->GetLength() << endl;
    cout << "Height of the rectangle: " << one->GetHeight() << endl;
    cout << "Rectangle square: " << one->Square() << endl;
    cout << "Rectangle perimetr: " << one->Perimetr() << endl;
    cout << endl << endl;
    return 0;
}
