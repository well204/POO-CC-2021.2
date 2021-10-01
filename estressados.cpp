#include <iostream>
#include <vector>

bool existe(std::vector<int>fila, int valor) {
    
    for (int i = 0; i < fila.size(); i++)
    {
       if(fila[i] == valor){
           return true;
           return false;
       }
    }
    

}

int contar(std::vector<int>fila, int valor) {

    int conta = 0;

    for(int i = 0; i < fila.size(); i++)
    {
        if(fila[i] == valor){
            conta ++;
            
        }
    }
    return conta;
}

int procurar_valor(std::vector<int> fila, int x) {

    for(int i = 0; i < fila.size(); i++)
    {
        if(fila[i] == x){
            return i;
            
      }else
      {
          for(int i = 0; i < fila.size(); i++)
          {
             return -1;
          }
          
      }
      
      
    }
}

int main(){
    int num_humor = 0;

    std::cin >> num_humor;
    std::cout << existe({1, 2 ,3, 4, 5},num_humor);
    std::cout << contar({2, 3 ,2, 3}, num_humor);
    std::cout <<procurar_valor({1, 3, 6, 9, 8}, num_humor);


    return 0;
}