#include <iostream>
using namespace std;
class Complex
{
    float real, imag;
public:
    void getdata()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void divide(float scalar)
    {
        real = real / scalar;
        imag = imag / scalar;
    }
    void display()
    {
        cout << "Result = " << real << " + " << imag << "i";
    }
};
int main()
{
    Complex c;
    float scalar;
    c.getdata();
    cout << "Enter scalar value: ";
    cin >> scalar;
    c.divide(scalar);
    c.display()
    return 0;
}
