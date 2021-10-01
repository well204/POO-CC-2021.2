#include <iostream>
#include <vector>

bool existe(std::vector<int>fila, int valor) {

    for (int i = 0; i < fila.size(); i++) {
       if(fila[i] == valor){
           return true;
           return false;
       }
    }
}

int contar(std::vector<int>fila, int valor) {

    int conta = 0;

    for(int i = 0; i < fila.size(); i++) {
        if(fila[i] == valor){
            conta ++;
            
        }
    }
    return conta;
}

int procurar_valor(std::vector<int> fila, int x) {

    for(int i = 0; i < fila.size(); i++) {
        if(fila[i] == x){
            return i;    
       }else if(fila[i] != x){
           return -1;
       }
    }
}

int procurar_valor_apartir(std::vector<int> fila, int x, int inicio) {
    
    for (int i = inicio; i < fila.size(); i++) {
        if (fila[i] == x)
        {
            return i;
        }
        
    }
    
}

int procurar_menor(std::vector<int> fila) {

    int menor = fila[0];

    for (int i = 0; i < fila.size(); ++i) {
        if(fila[i] < menor)
        {
            menor = fila[i];
            
        }
    }

    return menor;
}

int procurar_menor_pos(std::vector<int> fila) {

    int menor_posicao = 0;

    for (int i = 0; i < fila.size(); ++i) {
        if(fila[i] < fila[menor_posicao])
        {
            menor_posicao = i;
        }
    }

    return menor_posicao;
}

int main(){
    int num_humor = 0;
    int inicio = 0;

    std::cin >> num_humor;
    std::cin >> inicio;

    std::cout << existe({1, 2 ,3, 4, 5},num_humor) << '\n';
    std::cout << contar({2, 3 ,2, 3}, num_humor) << '\n';
    std::cout << procurar_valor({1, 3, 6, 9, 8, -1}, num_humor) << '\n';
    std::cout << procurar_valor_apartir({5, 3, -1, -50, -1, -99},num_humor, inicio) << '\n';
    std::cout << procurar_menor({5, 3, -1, -50, -1, -99}) << '\n';
    std::cout << procurar_menor_pos({5, 3, -1, -1, -99});

    return 0;
}