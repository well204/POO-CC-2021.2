#include <iostream>
#include <vector>
#include <algorithm>

// BUSCA

bool existe(std::vector<int>fila, int valor) {

  for(int i = 0; i < (int) fila.size(); i++) {
      if (fila[i] == valor)
      {
          return true;
      }
      return false;
  }
}

int contar(std::vector<int>fila, int valor) {

    int conta = 0;

    for(int i = 0; i < (int) fila.size(); i++)
    {
        if(fila[i] == valor)
            conta ++;
    }
    return conta;
}

int procurar_valor(std::vector<int> fila, int x) {

    for(int i = 0; i < (int) fila.size(); i++)
    {
        if(fila[i] == x){
            return i;    
       }else if(fila[i] != x){
           return -1;
       }
    }
}

int procurar_valor_apartir(std::vector<int> fila, int x, int inicio) {
    
    for (int i = inicio; i < (int) fila.size(); i++)
    {
        if (fila[i] == x)
            return i;
    }
    
}

// MELHOR CASO

int procurar_menor(std::vector<int> fila){

    int menor = fila[0];

    for (int i = 0; i < (int) fila.size(); ++i)
    {
        if(fila[i] < menor)
            menor = fila[i];
    }

    return menor;
}

int procurar_menor_pos(std::vector<int> fila){ 
 
    int menor = 0; 
 
    for (int i = 0; i < (int) fila.size(); i++) 
    { 
        if(fila[i] < fila[menor]) 
            menor = i; 
    } 
 
    return menor; 
}

int procurar_menor_pos_apartir(std::vector<int> fila, int inicio){

    int menor = 0; 
 
    for (int i = inicio; i < (int) fila.size(); i++) 
    { 
        if(fila[i] < fila[menor]) 
            menor = i; 
    } 
 
    return menor; 
}

int procurar_melhor_pos_se(std::vector<int> fila){

    int melhor = -1;

    for (int i = 0; i < (int) fila.size(); i++)
    {
        if(fila[i] > 0 && (melhor == -1 || fila[i] < fila[melhor]) )
             melhor = i;
    }

    return melhor;
}

// CONTAGEM

float calcular_stress_medio(std::vector<int> fila){

    float media = 0;
    float soma = 0;
    for (int i = 0; i < (int) fila.size(); i++)
    {
        soma += abs(fila[i]);
        media ++;
    }
    media = soma/media;
    return media;
}

std::string mais_homens_ou_mulheres(std::vector<int> fila){

    int count_women = 0;
    int count_men = 0;
    std::string men("homens");
    std::string women("mulheres");
    std::string empate("empate");

    for (int i = 0; i < (int) fila.size(); i++)
    {
        if (fila[i] > 0)
            count_men ++;

        if (fila[i] < 0)
            count_women ++;
    }
    
    if (count_women > count_men)
        return women;

    if (count_women < count_men)
        return men;
    
    if (count_women == count_men)
        return empate;
}

std::string mais_homens_ou_mulheres_estress(std::vector<int> fila) {
    
    int metade1 = 0;
    int metade2 = 0;
    std::string first_half("primeira");
    std::string second_half("segunda");
    std::string empate("empate");

    for (int i = 0; i < (int) fila.size()/2; i++)
        metade1 += abs(fila[i]);
    
    for (int i = 0; i < fila.size()*2; i++)
        metade2 += abs(fila[i]);

    if (metade1 > metade2)
        return first_half;

    if (metade1 < metade2)
        return second_half;

    if (metade1 == metade2)
        return empate; 
}

//FILTER

std::vector<int> clone(const std::vector<int>& v) { 
    
}

int main(){
    int num_humor = 0;
    int inicio = 0;

    std::cin >> num_humor;
    std::cin >> inicio;

    std::cout << existe({1, 2 ,3, 4, 5},num_humor) << '\n';
    std::cout <<contar({-1, -50, -1 -99}, num_humor) << '\n';
    std::cout << procurar_valor({1, 3, 6, 9, 8, -1}, num_humor) << '\n';
    std::cout << procurar_valor_apartir({5, 3, -1, -50, -1, -99},num_humor, inicio) << '\n';
    std::cout << procurar_menor({5, 3, -1, -50, -1, -99}) << '\n';
    std::cout << procurar_menor_pos({5, 3, -1, -50, -1, -99}) << '\n';
    std::cout << procurar_menor_pos_apartir({5, 3, -1, -50, -1, 10},inicio) << '\n';
    std::cout << procurar_melhor_pos_se({5, 3, -1, -50, -1, -99}) << '\n';
    std::cout << calcular_stress_medio({5, 3, -1, -50, -1, -99}) << '\n';
    std::cout << mais_homens_ou_mulheres({5, 3, -1, -50, -1, -99}) << '\n';
    std::cout << mais_homens_ou_mulheres_estress({5, 3, -1, -50, -1, -99});

    return 0;
}