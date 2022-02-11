public class Cubo extends Figura3D{
    private double lado;
    
    /*public Cubo(int x, int y, int z){
        super(x, y, z);
    }*/
    
    public Cubo(double lado){
        this.lado = lado;
    }
    
    public double volumen(){
        return lado * lado * lado;
    }
    
    public double superficie(){
        return lado * lado * 6;
    }
}