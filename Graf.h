#ifndef GRAF_H_INCLUDED
#define GRAF_H_INCLUDED
#include <iostream>

#define id(v) v->id
#define firstVertex(G) G.firstVertex
#define firstEdge(v) v->firstEdge
#define nextVertex(v) v->nextVertex

using namespace std;
typedef struct vertex *adrVertex;
typedef struct edge *adrEdge;

struct vertex {
    char id;
    adrVertex nextVertex;
    adrEdge firstEdge;
};

struct edge {
    adrVertex vertex_1, vertex_2;
    adrEdge nextEdge;
};

struct graph {
    adrVertex firstVertex;
};

void createVertex_1301223314(char newVertexID, adrVertex &v);
void initGraph_1301223314(graph &G);
void addVertex_1301223314(graph &G, char newVertexID);
void buildGraph_1301223314(graph &G);
void showGraph_1301223314(graph G);
#endif // GRAF_H_INCLUDED
