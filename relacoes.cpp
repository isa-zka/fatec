//programa de relações. você insere um conjunto desejado origem e destino. o programa volta um produto cartesiano e pergunta quais
//relações você quer manter. logo, ele vê se essas relações estão na tabela (matriz), caso não, ele volta um F.
#include <iostream>
#include <vector>

std::vector <int> origem;
std::vector <int> destino;
std::vector<std::pair<int, int>> produto; //guardar o produto cartesiano para escolha posterior.
std::vector<std::pair<int, int>> relacoes;

int count = 0;
int cardinalidade_A, cardinalidade_B, elementoa, elementob; 
int escolha; //para linha 58 

//int relacoes_bool [x][y]; //linha, col, ou seja, destino e origem.

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
    
    int x = destino.size();
    int y = origem.size();
    
    //por aqui, já tem o conjunto pronto. o for abaixo retorna todas as relações.
    
    count = 1;
    
    for (int i = 0 ; i < y; i++) { //a origem sendo primeiro
        for (int j = 0 ; j < x; j++) { //o destino em segundo
            produto.push_back({origem[i], destino[j]});
            std::cout << count << ". <" << origem[i] << ", " << destino[j] << "> \n";
            count++;
        }
    }
    
    std::cout<<"Quais relações você gostaria de manter? [Indique números]. ";
    std::cin >> escolha;
    relacoes.push_back(produto[escolha - 1]); //vou ter que fazer um for de novo?
    

    return 0;
}
