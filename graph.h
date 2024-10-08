#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <iostream>

#define Nil NULL
#define info(P) (P)->info
#define right(P) (P)->right
#define left(P) (P)->left


using namespace std;

typedef struct ElmVertex *adr_vertex;
typedef struct ElmEdge *adr_edge;
typedef char infotype_vertex;

struct ElmVertex {
    infotype_vertex info;
    adrVertex next_vertex;
    adrEdge first_edge;
};


struct ElmEdge {
    char info;
    adr_edge next_edge;
};

struct Graph {
    adr_vertex start;
};

void CreateGraph(Graph &G);
adr_vertex CreateNewVertex(char v);
adr_edge CreateNewEdge(char x);
void addVertex(Graph &G, x infoGraph);
void addEdge(Graph &G, x infoGraph);
adr_vertex findVertex(Graph G, char data);
adr_edge findEdge(Graph G, adr_vertex P, char kar);
void deleteVertex()
void deleteEdge(Graph &G, adr_edge P);
void showVertex(Graph G);
#endif // GRAPH_H_INCLUDED
