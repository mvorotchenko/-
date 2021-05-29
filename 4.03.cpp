#include<iostream>

using namespace std;

typedef struct {
    int numerator;
    unsigned int denominator;
} Rational;

void inputRational(Rational *rational, int numerator, int denominator) {
    rational->numerator = numerator;
    rational->denominator = denominator;
}

void printRational(const Rational rational) {
    cout << "numerator = " << rational.numerator << endl;
    cout << "denominator = " << rational.denominator << endl;
}

unsigned gcd(unsigned a, unsigned b) {
    if (a == 0) return b;
    if (b == 0) return a;
    if (a > b) return gcd(b, a % b);
    else return gcd(a, b % a);
}

Rational add(Rational *x, Rational *y) {
    Rational z;
    z.numerator = (int) (x->numerator * y->denominator) + (int) (y->numerator * x->denominator);
    z.denominator = y->denominator * x->denominator;
    return z;
}

bool cmp(const Rational x,const Rational y){
    return x.numerator*y.denominator > y.numerator*x.denominator;
}

Rational mul(const Rational x, const Rational y) {
    Rational z;
    z.numerator = x.numerator * y.numerator;
    z.denominator = x.denominator * y.denominator;
    return z;
}

Rational reduce(const Rational x) {
    unsigned d = gcd(x.numerator, x.denominator);
    Rational z;
    z.numerator = (int) x.numerator / d;
    z.denominator = x.denominator / d;
    return z;
}

void reducel(Rational *x) {
    unsigned d = gcd(x->numerator, x->denominator);
    Rational z;
    z.numerator = x->numerator / d;
    z.denominator = x->denominator / d;
}


int main() {
    Rational first, second, third;
    inputRational(&first, 10, 6);
    inputRational(&second, -2, 5);

    cout << "add: " << endl;
    third = add(&first, &second);
    printRational(third);

    cout << "reduce: " << endl;
    third = reduce(third);
    printRational(third);

    cout << "multiplication: " << endl;
    third = mul(first, second);
    printRational(third);

    cout << "compare: " << endl;
    cout << cmp(first, second);
}


