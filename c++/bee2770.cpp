#include <iostream>

int main() {
    int d1_empresa, d2_empresa, qt;
    int d1_usuario, d2_usuario;

    while (std::cin >> d1_empresa >> d2_empresa >> qt) {
        // solução que não funciona pois consideramos não uma área total de placa,
        // mas individualmente a largura e comprimento
        //int d_empresa = d1_empresa * d2_empresa;

        //while (qt--) {
        //    std::cin >> d1_usuario >> d2_usuario;
        //    int d_usuario = d1_usuario * d2_usuario;
        //
        //    if (d_empresa >= d_usuario) {
        //        std::cout << "Sim" << std::endl;
        //    } else {
        //        std::cout << "Não" << std::endl;
        //    }
        //}
        for (int i = 0; i < qt; ++i) {
            std::cin >> d1_usuario >> d2_usuario;

            if (d1_usuario <= d1_empresa && d2_usuario <= d2_empresa) {
                std::cout << "Sim" << std::endl;
            } else if (d1_usuario <= d2_empresa && d2_usuario <= d1_empresa) {
                std::cout << "Sim" << std::endl;
            } else {
                std::cout << "Nao" << std::endl;
            }
        }
    }
    return 0;
}
