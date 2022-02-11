public abstract class Figura2D extends Figura{
    
    public Figura2D(int x, int y){
        super(x, y);
    }
    
    public Figura2D(){
    }
    
    public abstract double area();
    public abstract double perimetro();
    
    public String toString(){
        return "Area: " + area() + ", Perimetro: " + perimetro();
    }
}