import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        float A, B;
        
        Scanner teclado = new Scanner(System.in);
        
        A = teclado.nextFloat();
        B = teclado.nextFloat();
        
        float media = (A * 3.5f + B * 7.5f) / 11;
        System.out.printf("MEDIA = %.5f%n", media);
        
        teclado.close();
 
    }
 
}
