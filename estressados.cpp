#include <iostream>
#include <vector>

bool existe(std::vector<int>vet, int valor) {
    for (int i = 0; i < vet.size(); i++)
    {
       if(vet[i] == valor){
           return true;
           return false;
       }
    }
    

}

int main(){
    std::cout << existe({1, 2 ,3, 4, 5},7);

    return 0;
}