#ifndef ___Graph___
#define ___Graph____
#include "node.h"


class Graph{
    
    private:

        int graphLength; //Tamanho do grafo

    public:

        Node *adjList;
        Graph(int graphLength); //Construtor
        void add_new_edge(int valueNodeAnces, int valueNodeChild); //adiciona uma nova aresta na lista de adjacencia.

};

#endif