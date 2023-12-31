#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTEX 30

typedef struct graphType{ // made by wwwxsv19
	int n;
	int adjMatrix[MAX_VERTEX][MAX_VERTEX];	
} graphType;

void createGraph(graphType* g){
	for(int i=0; i<MAX_VERTEX; i++) {	
		for(int j=0; j<MAX_VERTEX; j++){
			g->adjMatrix[i][j] = 0;
		}
	}
}

void insertVertex(graphType* g, int v){
	if(((g->n) + 1) > MAX_VERTEX){ // made by wwwxsv19
		printf("\n 그래프 정점의 개수를 초과하였습니다!");
		return;
	}
	g->n++;	
}

void insertEdge(graphType* g, int u, int v){	
	if(u >= g->n || v >= g->n){
		printf("\n 그래프에 없는 정점입니다!");
		return;
	}
	g->adjMatrix[u][v] = 1;
	g->adjMatrix[v][u] = 1;
}

void print_adjMatrix(graphType* g){
	for(int i=0; i<g->n; i++){
		printf("\n\t\t");
		for(int j=0; j<g->n; j++)
			printf("%2d", g->adjMatrix[i][j]);
	}
}

int main(){ // made by wwwxsv19
	graphType *G = (graphType*)malloc(sizeof(graphType));

	createGraph(G); 
	
	for(int i=0; i<8; i++){
		insertVertex(G, i);
	}
	
	insertEdge(G, 0, 1);
	insertEdge(G, 0, 2);
	insertEdge(G, 1, 3);
	insertEdge(G, 1, 4);
	insertEdge(G, 2, 5);
	insertEdge(G, 2, 6);
	insertEdge(G, 3, 7); // made by wwwxsv19
	insertEdge(G, 4, 7);
	insertEdge(G, 5, 7);
	insertEdge(G, 6, 7);
	
	printf("\n G의 인접 행렬");
	print_adjMatrix(G);
	
	return 0;
} 