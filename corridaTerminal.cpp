#include <iostream>
#define  LINHAS 8
#define  COLUNAS 50
using namespace std;


struct Carro {
    // O carro deve conter combustivel, pontos, linha e a coluna que ele se encontra (posicao) 
    float combustivel; // a gente tem que definir um valor inicial pro combustivel
    long int pontos = 0; // ele começa com 0 pontos
    int linha;
    int coluna;
};


void imprimeCabecalho() { // Literalmente so vai imprimir a gasolina e a pontuacao
    Carro carro;
    carro.combustivel = 40;

    cout << "Gasolina: " << carro.combustivel << "L" <<"   " << "Pontuação: " << carro.pontos << " pontos" <<endl;
}


void imprimeBorda() { // Literalmente so vai imprimir as bordas de cima

    for(int i=0; i<40; i++) {
        cout << "-";
    }

    cout << endl; 
}


void imprimePista() {
    
    char pista[LINHAS][COLUNAS] = {
    {' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' '},
    {' ', ' ', '#', ' ', ' ', 'F', ' ', ' ', '$', ' '},
    {' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', 'E'},
    {'C', ' ', '#', ' ', '$', ' ', '$', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', '$', ' '},
    {' ', ' ', ' ', ' ', 'F', ' ', '#', ' ', ' ', 'E'}
};

    imprimeCabecalho();
    imprimeBorda();

    for(int i=0; i<8; i++) {
        cout << "| ";
        for(int j=0; j<10; j++) {
            cout << pista[i][j] << " ";            
        }
        cout << "                 |"; // Tem q alterar isso aq, pq a gente vai aumentar o numero de colunas
        cout<< endl;
        
    }
    imprimeBorda();
}


char lerTecla() {

    char tecla = ' '; // A tecla começa com um espaço vazio pra não dar nenhum erro. Se ela não fosse inicializada, poderia pegar um lixo de memoria 'w' e pularia a leitura;

    while(tecla != 'w' && tecla != 'a' && tecla != 's' && tecla != 'd') { // While vai rodar enquanto o usuario nao inserir alguma das teclas
        cin >> tecla;

        if(tecla >= 'A' && tecla <= 'Z') {
            tecla = tecla + ('a' - 'A'); // Vai converter maiúscula pra minúscula
        }

        if(tecla != 'w' && tecla != 'a' && tecla != 's' && tecla != 'd') {
            cout << "Tecla inválida! Use 'W', 'A', 'S', 'D'" << endl; // Erro se inserir tecla inválida
        }
    } 

    return tecla; // Retorna a tecla pra função moverCarro
}


bool moverCarro(char tecla) {

}






int main() {

    imprimePista();

    char tecla = lerTecla();
    cout << tecla;
    moverCarro(tecla);

}