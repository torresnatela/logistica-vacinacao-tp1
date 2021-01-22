#include "node.h"

Node::Node(){
    //Construtor padrão
    this->next = nullptr;
    this->nodeValue = -1;
}

void Node::set_nodeValue(int nodeValue){
    this->nodeValue = nodeValue;
}

int Node::get_nodeValue(){
    return this->nodeValue;
}

