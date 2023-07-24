import java.io.IOException;

import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
		int A, B;
		
		Scanner teclado = new Scanner(System.in);
		
		A = teclado.nextInt();
		B = teclado.nextInt();
		
		System.out.println("SOMA = " + (A+B));
		
		teclado.close();
    }
 
}
