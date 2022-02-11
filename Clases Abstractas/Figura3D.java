public abstract class Figura3D extends Figura implements Movible{
    private int z;
    
    public Figura3D(int x, int y, int z){
        super(x, y);
        this.z = z;
    }
    
    public Figura3D(){
    }
    
    public abstract double volumen();
    public abstract double superficie();
    
    public String toString(){
        return "Volumen: " + volumen() + ". Superficie: " + superficie();
    }
    
    public void moverArriba(){};
    public void moverAbajo(){};
    public void moverDerecha(){};
    public void moverIzquierda(){};
}