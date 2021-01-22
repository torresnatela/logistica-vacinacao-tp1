#include <iostream>
#include "headers/graph.h"

int main(){

    //Grafo é uma lista de adjacencia.
    //Vetor Discovered para indicar quando um node ja foi descoberto.
    //Lista L[1] usada para registrar os nodes em cada layer

    int graphLength;

    int *a, *b, *c;

    //*b = 10; *a = 5; *c = 12;



    Graph *grafoTeste = new Graph(graphLength);


    grafoTeste->add_new_edge(0, 1);
    grafoTeste->add_new_edge(0, 2);
    grafoTeste->add_new_edge(0, 3);

    std::cout << grafoTeste->adjList[0].next->get_nodeValue() << std::endl;
    std::cout << grafoTeste->adjList[0].next->next->get_nodeValue() << std::endl;
    std::cout << grafoTeste->adjList[0].next->next->next->get_nodeValue() << std::endl;



}