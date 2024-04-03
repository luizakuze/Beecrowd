import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        char opcao;
        double valor = 0;
        double mat[][] = new double[12][12]; 

        // Lendo do teclado
        Scanner teclado = new Scanner(System.in);
        opcao = teclado.next().charAt(0);

        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                mat[i][j] = teclado.nextDouble(); 
            }
        }

        // Opção A
        if (opcao == 'S') {

            // Somando parte superior
            for (int i = 0; i < 12; i++) {
                for (int j = i + 1; j < 12; j++) {  
                    valor += mat[i][j];
                }
            }

        } else {
            // Calculando a média da parte superior
            int count = 0;
            for (int i = 0; i < 12; i++) {
                for (int j = i + 1; j < 12; j++) {
                    valor += mat[i][j];
                    count++;
                }
            }
            valor /= count; 
        }

        System.out.printf("%.1f\n", valor);  
    }
}
