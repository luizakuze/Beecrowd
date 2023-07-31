import java.io.IOException;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		String nome;
		double salario, vendas;
		
		Scanner teclado = new Scanner(System.in);
		
        nome = teclado.nextLine();
		salario = teclado.nextDouble();
		vendas = teclado.nextDouble();
		
        double salarioTotal = salario + (vendas * 0.15f);

        System.out.printf("TOTAL = R$ %.2f\n", salarioTotal);
        
		teclado.close();
	}
 
}
