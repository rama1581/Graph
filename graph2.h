#ifndef GRAPH2_H_INCLUDED
#define GRAPH2_H_INCLUDED
#include <iostream>

#define info(P) (P)->info
#define right(P) (P)->right
#define left(P) (P)->left
#define start(P) (P).start
using namespace std;
typedef struct vertex *adrVertex;
typedef struct edge *adrEdge;
typedef  char infotype_vertex;

struct vertex {
    infotype_vertex info;
    adrVertex next_vertex;
    adrEdge first_edge;
};

struct edge {
    adrVertex next_vertex;
    adrEdge next_edge;
};

struct graf {
    adrVertex start;

};
void createGraph(graf &G);
adrVertex create_new_vertex(infotype_vertex v);
adrEdge create_new_edge();
void show_vertex();
void add_vertex(graf G, adrVertex v);
void add_edge();
void delete_edge();
void delete_vertex();
adrVertex find_vertex(graf G, char data);

#endif // GRAPH2_H_INCLUDED
