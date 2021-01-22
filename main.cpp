#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include "headers/graph.h"

int main(){

    //Grafo é uma lista de adjacencia.
    //Vetor Discovered para indicar quando um node ja foi descoberto.
    //Lista L[1] usada para registrar os nodes em cada layer

    std::string inputs; //String de leitura
    int numberOfCDs, numberOfCVs, incremTemp; //Numero de CDs, numero de CV, incremento na temperatura

    //Leitura dos primeiros valores
    getline(std::cin, inputs);
    std::istringstream str(inputs);

    (str >> numberOfCDs);
    (str >> numberOfCVs);
    (str >> incremTemp);

    int graphLength = numberOfCVs+numberOfCDs; //Grafo tera os CDs e os CVs juntos.

    Graph *grafoLogistica = new Graph(graphLength);
    int nodeValue;

    //Colocando CDs na Lista de Adjacencia
    for (int i = 0; i < numberOfCDs; i++){

        std::getline(std::cin, inputs); //Leitura da linha
        std::istringstream exp(inputs);

        while(exp >> nodeValue && nodeValue != 0){

            grafoLogistica->add_new_edge(i, nodeValue); //Adiciona o node à lista
            
        }
    }
    
    //Colocando CVs na lista de Adjacencia
    for(int i = numberOfCDs; i < graphLength; i++){

        std::getline(std::cin, inputs);
        std::istringstream exp(inputs);

        while(exp >> nodeValue && nodeValue != 0){

            grafoLogistica->add_new_edge(i, nodeValue);

        }
    }
    

}