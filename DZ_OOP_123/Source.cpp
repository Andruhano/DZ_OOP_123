#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int den) : numerator(num), denominator(den) {}

    void inputFraction() 
    {
        cout << "������� ���������: ";
        cin >> numerator;

        do 
        {
            cout << "������� ����������� (�� ������ 0): ";
            cin >> denominator;
        } 
        while (denominator == 0);
    }

    void displayFraction() const 
    {
        cout << numerator << '/' << denominator;
    }

    Fraction add(const Fraction& other) const 
    {
        int resultNumerator = numerator * other.denominator + other.numerator * denominator;
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction subtract(const Fraction& other) const 
    {
        int resultNumerator = numerator * other.denominator - other.numerator * denominator;
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction multiply(const Fraction& other) const 
    {
        int resultNumerator = numerator * other.numerator;
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction divide(const Fraction& other) const 
    {
        int resultNumerator = numerator * other.denominator;
        int resultDenominator = denominator * other.numerator;
        return Fraction(resultNumerator, resultDenominator);
    }
};

int main() 
{

    system("chcp 1251");

    Fraction fraction1(0, 0);
    Fraction fraction2(0, 0);

    cout << "������� ������ ��� ������ �����:" << endl;
    fraction1.inputFraction();

    cout << "\n������� ������ ��� ������ �����:" << endl;
    fraction2.inputFraction();

    Fraction resultAdd = fraction1.add(fraction2);
    Fraction resultSubtract = fraction1.subtract(fraction2);
    Fraction resultMultiply = fraction1.multiply(fraction2);
    Fraction resultDivide = fraction1.divide(fraction2);

    cout << "\n��������: ";
    resultAdd.displayFraction();
    cout << endl;

    cout << "���������: ";
    resultSubtract.displayFraction();
    cout << endl;

    cout << "���������: ";
    resultMultiply.displayFraction();
    cout << endl;

    cout << "�������: ";
    resultDivide.displayFraction();
    cout << endl;

    return 0;
}
