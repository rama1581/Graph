#include "Graf.h"

void createVertex_1301223314(char newVertexID, adrVertex &v){
    v = new vertex;
    id(v) = newVertexID;
    nextVertex(v) = NULL;
    firstEdge(v) = NULL;
}

void initGraph_1301223314(graph &G){
    firstVertex(G) = NULL;
}

void addVertex_1301223314(graph &G, char newVertexID){
    adrVertex v;
    createVertex_1301223314(newVertexID, v);

    if (firstVertex(G) == NULL) {
        firstVertex(G) = v;
    } else {
        adrVertex q = firstVertex(G);
            while(nextVertex(q) != NULL) {
                q = nextVertex(q);
        }
            nextVertex(q) = v;
    }
}

void buildGraph_1301223314(graph &G){
    char newVertexID = 'A';

    while(newVertexID >= 'A' && newVertexID <= 'Z') {
        cin >> newVertexID;

        if(newVertexID >= 'A' && newVertexID <= 'Z') {
            addVertex_1301223314(G, newVertexID);
        }
    }
}

void showGraph_1301223314(graph G){
    adrVertex v = firstVertex(G);

    while(v != NULL) {
        cout << id(v) << " ";
        v = nextVertex(v);
    }
}
