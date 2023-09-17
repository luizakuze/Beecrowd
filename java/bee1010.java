import java.io.IOException;
import java.util.Locale;
import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {

        float total = 0;

        Scanner teclado = new Scanner(System.in);
        teclado.useLocale(Locale.US); // define o ponto (.) como separador decimal

        for (int i = 0; i < 2; i++) {
            int codigo = teclado.nextInt();
            int qt = teclado.nextInt();
            double preco = teclado.nextFloat();
            total += preco * qt;
        }

        System.out.printf(Locale.US, "VALOR A PAGAR: R$ %.2f\n", total);

        teclado.close();
    }
 
}
