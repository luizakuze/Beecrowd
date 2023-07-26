import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        float A, B, C;

        Scanner teclado = new Scanner(System.in);

        A = teclado.nextFloat();
        B = teclado.nextFloat();
        C = teclado.nextFloat();

        float media = (A * 2 + B * 3 + C * 5) / 10.0f;
        System.out.printf("MEDIA = %.1f\n", media);

        teclado.close();
    }
}
