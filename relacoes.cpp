#include <iostream>
#include <vector>

std::vector <int> origem;
std::vector <int> destino;
int count = 0;
int cardinalidade_A, cardinalidade_B;
int elementoa, elementob;
int x = origem.size
int y = destino.size
int relacoes_bool [x][y]; //linha, col

int main()
{
    

    std::cout << "Indique a cardinalidade do conjunto origem: "; //eu coloquei para o usuário indicar cardinalidade, só para ele poder colocar a qtd de todos elementos, no caso #.
    std::cin >> cardinalidade_A;
    std::cout << "Indique a os elementos do conjunto: ";
    while (count < cardinalidade_A) {
        std::cin >> elementoa;
        origem.push_back(elementoa);
        count++;
    }
    
    count = 0;
    
    std::cout << "\nIndique a cardinalidade do conjunto destino: ";
    std::cin >> cardinalidade_B;
    std::cout << "Indique a os elementos do conjunto: ";
    
    while (count < cardinalidade_B) {
        std::cin >> elementob;
        destino.push_back(elementob);
        count++;
    }
    

    return 0;
}