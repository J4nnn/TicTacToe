public class Cuadrado extends Figura2D{
    private double lado;
    
    public Cuadrado(int x, int y, double lado){
        super(x, y);
        this.lado = lado;
    }
    
    public Cuadrado(){
    }
    
    @Override
    public double area(){
        return lado * lado;
    }
    
    @Override
    public double perimetro(){
        return 4 * lado;
    }
}