import java.io.IOException;
import java.util.Scanner;

public class Main {
 
	public static void main(String[] args) {
		int A, B, C, D;
		
		Scanner teclado = new Scanner(System.in);
		
		A = teclado.nextInt();
		B = teclado.nextInt();
		C = teclado.nextInt();
		D = teclado.nextInt();
		
		System.out.println("DIFERENCA = " + (A * B - C * D));
		
		teclado.close();
	}
 
}
