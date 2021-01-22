#ifndef ___Node___
#define ___Node____

class Node //Vertice
{
private:

    int nodeValue;

public:

    Node *next;

    Node();
    void set_nodeValue(int nodeValue);
    int get_nodeValue();

};

#endif