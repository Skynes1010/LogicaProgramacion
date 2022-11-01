import java.util.Scanner;
public class EjercicioDos{
public static void main(String[] args){
  
		Scanner x = new Scanner(System.in);
    System.out.println("Ingrese cliente");
    String nombre = x.next();
		System.out.println("Ingrese cantidad de escritorios comprados");
		int escritorio = x.nextInt();
  
		int escritorios = 800000;
  
		if (escritorio<5) {
			System.out.println(nombre+" su compra es por valor de "+escritorio*escritorios+" y su descuento fue "+(escritorios*escritorio)*0.1);
		}else {
			if (escritorio>=5 && escritorio<10) {
				System.out.println(nombre+" su compra es por valor de "+escritorio*escritorios+" y su descuento fue "+(escritorios*escritorio)*0.2);
			} else {
				if (escritorio>=10) {
					System.out.println(nombre+" su compra es por valor de "+escritorio*escritorios+" su descuento fue "+(escritorios*escritorio)*0.4);
				} else {
					System.out.println("pailaaa");
				}
			}
		}
	}


}