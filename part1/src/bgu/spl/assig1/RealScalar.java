package src.bgu.spl.assig1;
import java.text.DecimalFormat;
public class RealScalar implements Scalar{
    private double number;
    
    public RealScalar(double number){
        this.number = number;
    }
    
    public double getNumber() { return number; }

    public Scalar add(Scalar s) {
        return s.addReal(this);
    }
    public Scalar addRational(RationalScalar s) {
        return new RealScalar(number+((s.getNumerator()*1.0)/s.getDenominator()));
    }
    public Scalar addReal(RealScalar s){
            return new RealScalar(number+s.getNumber());
    }
    public Scalar addInteger(IntegerScalar s) {
        return new RealScalar(number+s.getNumber());
    }
    public Scalar mul(Scalar s) {
        return s.mulReal(this);
    }

    @Override
    public Scalar mulRational(RationalScalar s) {
        return new RealScalar(number*s.getNumerator()/s.getDenominator());
    }
    @Override
    public Scalar mulInteger(IntegerScalar s) {
        return new RealScalar(number*s.getNumber());
    }
     @Override
    public Scalar mulReal(RealScalar s) {
        return new RealScalar(number*s.getNumber());
    }
    public Scalar neg(){
            return new RealScalar( number*-1);
    }
    public Scalar power(int exponent){
        return new RealScalar(Math.pow(number,exponent));
    }
    public boolean equals(Object o){
        if(o instanceof RealScalar){
            RealScalar r = (RealScalar) o;       
            return this.number == r.number;
        }        
        return false;
    }
    @Override
    public String toString() {
    DecimalFormat df = new DecimalFormat("0.######"); 
    return df.format(this.number);
}
    public int sign(){
        if(number==0) return 0;
        if(number<0) return -1;
         return 1;

    }
   
}