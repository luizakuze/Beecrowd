// NÃO SOLUCIONADO!!!!!!!!!






import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    // Função para calcular o MDC de dois números
    public static int calcularMDC(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return Math.abs(a); // Garantindo que o MDC seja sempre positivo
    }

    public static int calcularMDC(ArrayList<Integer> elementos, int posicaoA, int posicaoB) {
        int mdc = elementos.get(posicaoA);
        for (int i = posicaoA + 1; i <= posicaoB; i++) {
            mdc = calcularMDC(mdc, elementos.get(i));
            if (mdc == 1)
                break;
        }
        return mdc;
    }
    

    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner(System.in);

        int numeroElementos = teclado.nextInt();
        int numeroQueries = teclado.nextInt();

        ArrayList<Integer> elementos = new ArrayList<>();
        for (int k = 0; k < numeroElementos; k++) {
            int elemento = teclado.nextInt();
            elementos.add(elemento);
        }

        for (int i = 0; i < numeroQueries; i++) {
            int tipoQuery = teclado.nextInt();

            if (tipoQuery == 1) {
                // A B V: Somar V em todos os elementos da posição A até a posição B do vetor
                int fatorV = teclado.nextInt();
                int posicaoA = teclado.nextInt();
                int posicaoB = teclado.nextInt();

                for (int j = posicaoA; j <= posicaoB; j++) {
                    elementos.set(j, elementos.get(j) + fatorV);
                }
            } else if (tipoQuery == 2) {
                // A B: Retorna o Máximo Divisor Comum de todos os elementos das posições A até B no vetor
                int posicaoA = teclado.nextInt();
                int posicaoB = teclado.nextInt();

                // Calcula o MDC e imprime
                int mdc = calcularMDC(elementos, posicaoA, posicaoB);
                System.out.println(mdc);
            }
        }
    }
}
