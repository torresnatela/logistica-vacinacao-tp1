#include "graph.h"

Graph::Graph(int graphLength){

    adjList = new Node[graphLength]; //Aloca dinamicamente um vetor de *nodes
    this->graphLength = graphLength;

}

void Graph::add_new_edge(int valueNodeAnces, int valueNodeChild){
    
    Node *nodeChild = new Node(); // Cria node filho
    Node *pointerAux = &adjList[valueNodeAnces]; //Ponteiro de caminhamento
    nodeChild->set_nodeValue(valueNodeChild);

    if(pointerAux->next == nullptr){ //Se o node ancestral ainda não tiver filhos
        pointerAux->next = nodeChild; // Aloca o NodeChild como primeiro filho
    }

    else{

        while (pointerAux->next != nullptr){
            pointerAux = pointerAux->next; //Caminha pela lista ate encontrar o ultimo filho
        }

        pointerAux->next = nodeChild; // Aloca aresta ao novo filho;

    }


}

