import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int func, hora;
        float valor;

        Scanner teclado = new Scanner(System.in);

        func = teclado.nextInt();
        hora = teclado.nextInt();
        valor = teclado.nextFloat();

        System.out.printf("NUMBER = %d\n", func);
        System.out.printf("SALARY = U$ %.2f\n", hora * valor);

        teclado.close();
    }
}
