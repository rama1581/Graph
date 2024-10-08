#include "graph2.h"

void createGraph(graf &G){
    start(G) = NULL;
}

adrVertex create_new_vertex(char v){
    adrVertex P = new vertex;
    info(P) = v;
    next_vertex(P) = NULL;
    first_edge(P) = NULL;

    return P;
}

adrEdge create_new_edge(char x){
    adr_edge P = new edge;

    info(P) = x;
    next_edge(P) = Nil;
    return P;
}

void show_vertex(){

}

void add_vertex(graf G, adrVertex v){

}

void add_edge(){

}

void delete_edge(){

}

void delete_vertex(){

}

adrVertex find_vertex(graf G, char data){

}
