/*
 * Programa que simula portas lógicas na plataforma Arduino
 * 
 * Escrito por Clovis Fritzen em 25/10/2016
 * Mais informações em http://www.FritzenLab.com.br
 * 
 * QUANDO COMPARTILHAR ESTE CÓDIGO, FAVOR ENVIAR ESTE CABEÇALHO JUNTO!

*/

#define A 2 // Definindo a porta para a entrada lógica A
#define B 3 // Definindo a porta para a entrada lógica B
#define saida 4 // Definindo a porta para a saida lógica (resultado)

int estadoEntradaA = 0; // Inicializando a variavel de estado da entrada digital A
int estadoEntradaB = 0; // Inicializando a variavel de estado da entrada digital B
int estadoSaida = 0; // Inicializando a variavel de estado da saída digital

void setup() {
  
  pinMode(saida, OUTPUT); // Configurando um pino como a saída digital
  pinMode(A, INPUT); // Configurando um pino como entrada digital
  pinMode(B, INPUT); // Configurando um pino como entrada digital
  
}

void loop() { // O processo abaixo será repetido infinitamente, a cada ciclo de clock
    
    estadoEntradaA = digitalRead(A); // Lê o estado da entrada A
    estadoEntradaB = digitalRead(B); // Lê o estado da entrada B

    //-------
    // Escolha abaixo a operação que deseja executar
    // Remova as duas barras "//" da frente da expressão escolhida.
    // Todas as outras expressões deve ter as duas barras "//" na frete
      
    //estadoSaida = estadoEntradaA && estadoEntradaB; // Faz a operação lógica AND (E) entre A e B
    //estadoSaida = estadoEntradaA || estadoEntradaB; // Faz a operação lógica OR (OU) entre A e B
    //estadoSaida = !estadoEntradaA; // Faz a operação lógica NOT (inversora) na entrada A
    //estadoSaida = !(estadoEntradaA && estadoEntradaB); // Faz a operação lógica NAND (E invertida) entre A e B
    //estadoSaida = !(estadoEntradaA || estadoEntradaB); // Faz a operação lógica NOR (OU invertida) entre A e B
    //estadoSaida = estadoEntradaA ^ estadoEntradaB; // Faz a operação lógica XOR (Ou exclusivo) entre A e B
    estadoSaida = !(estadoEntradaA ^ estadoEntradaB); // Faz a operação lógica XNOR (Ou exclusivo invertido) entre A e B
    
    //-------
    
    digitalWrite(saida, estadoSaida);  // Escreve o resultado da operação lógica na saída digital (LED)
   
}
