#include "graph.h"

void CreateGraph(Graph &G){
    start(G) = Nil;
}

adr_vertex CreateNewVertex(char v){
    adr_vertex P = new ElmVertex;

    info(P) = v;
    next_vertex = Nil;
    first_edge = Nil;
    return(P);
}

adr_edge CreateNewEdge(char x) {
    adr_edge P = new ElmEdge;

    info(P) = x;
    next_edge(P) = Nil;
    return P;
}

void addVertex(Graph &G, x infoGraph){
    if (first(G) == Nil) {
        first(G) = x;
    } else {
        adr_vertex Q = first(G);
        while (next(Q) != Nil) {
            Q = next(Q);
        }
        next(Q) = x;
    }

}

void addEdge(Graph &G, x infoGraph) {
     if (first(G) == Nil) {
        first(G) = x;
    } else {
        adr_edge Q = first(G);
        while (next(Q) != Nil) {
            Q = next(Q);
        }
        next(Q) = x;
    }

}

adr_vertex findVertex(Graph G, char data) {
    adr_vertex Q = start(G);

    while(Q != Nil && info(Q) != data) {
        Q = next(Q);
    }
    return Q;
}

adr_edge findEdge(Graph G, adr_vertex P, char kar){

}

void deleteEdge(Graph &G, adr_edge P) {
    adr_edge P;

    if(info(start(G) != Nil) {

    }
}

void showVertex(Graph G){
    adr_vertex P = start(G);

    while (P != Nil) {
        cout << info(P) << " ";
        P = next(P);
    }
}

void showGraf(Graph G) {

}
