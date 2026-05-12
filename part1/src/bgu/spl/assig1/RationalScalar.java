package src.bgu.spl.assig1;

public class RationalScalar implements Scalar {
    private int numerator;
    private int denominator;

    public RationalScalar(int numerator, int denominator) {
        this.numerator = numerator;
        this.denominator = denominator;
        // Move normalization logic here so the object is ALWAYS clean
        normalize();
    }

    public int getNumerator() { return numerator; }
    public int getDenominator() { return denominator; }

    private void normalize() {
        if (denominator == 0) return;
        int common = gcd(Math.abs(numerator), Math.abs(denominator));
        numerator /= common;
        denominator /= common;
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    private int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public Scalar reduce() {
        if (denominator == 1) return new IntegerScalar(numerator);
        return this;
    }

    public Scalar add(Scalar s) { return s.addRational(this); }

    public Scalar addRational(RationalScalar s) {
        int newNum = s.getNumerator() * this.denominator + this.numerator * s.getDenominator();
        int newDen = s.getDenominator() * this.denominator;
        return new RationalScalar(newNum, newDen).reduce();
    }

    public Scalar addInteger(IntegerScalar s) {
        int newNum = s.getNumber() * this.denominator + this.numerator;
        return new RationalScalar(newNum, this.denominator).reduce();
    }

    public Scalar addReal(RealScalar s) {
        return new RealScalar(s.getNumber() + ((double)numerator / denominator));
    }

    public Scalar mul(Scalar s) { return s.mulRational(this); }

    public Scalar mulRational(RationalScalar s) {
        return new RationalScalar(this.numerator * s.getNumerator(), 
                                 this.denominator * s.getDenominator()).reduce();
    }

    public Scalar mulInteger(IntegerScalar s) {
        return new RationalScalar(this.numerator * s.getNumber(), this.denominator).reduce();
    }

    public Scalar mulReal(RealScalar s) {
        return new RealScalar(s.getNumber() * numerator / denominator);
    }

    public Scalar neg() {
        return new RationalScalar(-numerator, denominator).reduce();
    }

    public Scalar power(int exponent) {
        return new RationalScalar((int)Math.pow(numerator, exponent), 
                                 (int)Math.pow(denominator, exponent)).reduce();
    }

    public boolean equals(Object o) {
        if (o instanceof RationalScalar) {
            RationalScalar r = (RationalScalar) o;
            return this.numerator == r.numerator && this.denominator == r.denominator;
        }
        return false;
    }

    public String toString() {
        if (denominator == 1) return Integer.toString(numerator);
        return numerator + "/" + denominator;
    }

    public int sign() {
        return Integer.signum(numerator);
    }
}