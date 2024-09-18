// Fidel Ignacio Ibarra Guzmán
// Me tomó aproximadamente 50 minutos en completar el código
// Referencia 1: https://docs.hektorprofe.net/cpp/11-clases/04-sobrecarga-operadores/
// Referencia 2: https://www.varsitytutors.com/hotmath/hotmath_help/spanish/topics/operations-with-complex-numbers
#include <iostream>
using namespace std;

class Complejo
{
private:
    float a, b;

public:
    Complejo(float re = 0, float im = 0) : a(re), b(im) {}

    Complejo operator+(const Complejo &num2) const
    {
        return Complejo(a + num2.a, b + num2.b);
    }
    Complejo operator-(const Complejo &num2) const
    {
        return Complejo(a - num2.a, b - num2.b);
    }
    Complejo operator*(const Complejo &num2) const
    {
        return Complejo((a * num2.a) - (b * num2.b), (a * num2.b + b * num2.a));
    }
    Complejo operator/(const Complejo &num2) const
    {
        float denom = (num2.a * num2.a + num2.b * num2.b);
        if (denom == 0)
        {
            cerr << "Error: División por cero" << endl;
            return Complejo();
        }
        return Complejo((a * num2.a + b * num2.b) / denom, (b * num2.a - a * num2.b) / denom);
    }
    friend ostream &operator<<(ostream &os, const Complejo &c)
    {
        if (c.b >= 0)
        {
            os << c.a << " + " << c.b << "i";
        }
        else
        {
            os << c.a << " - " << -c.b << "i";
        }
        return os;
    }
};

int main()
{
    Complejo c1(3, 2);
    Complejo c2(4, -5);

    cout << "Los numeros complejos son: " << endl;
    cout << c1 << endl;
    cout << c2 << endl;
    cout << "La suma es: " << c1 + c2 << endl;
    cout << "La resta es: " << c1 - c2 << endl;
    cout << "Producto: " << c1 * c2 << endl;
    cout << "Division: " << c1 / c2 << endl;
    return 0;
}