import java.util.Scanner;
public class EjercicioUno{
  public static void main(String[] args){
    
    Scanner x = new Scanner(System.in);
    System.out.println("Ingrese su nombre");
    String nombre = x.next();
    System.out.println("Ingrese su salario");
    int salario = x.nextInt();
    System.out.println("Ingrese su hora");
    int hora = x.nextInt();
    int trabajo;

    trabajo = hora*salario;
    
  if (trabajo>= 450000){System.out.println("Su Nombre es "+nombre+"su salario es"+trabajo);}
    else {System.out.println("Su nombre es"+nombre);}
  }
  
}