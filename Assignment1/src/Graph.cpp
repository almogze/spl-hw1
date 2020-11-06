//
// Created by spl211 on 03/11/2020.
//

#include "Graph.h"
#include <string>

using namespace std;

Graph::Graph(){}

Graph::Graph(std::vector<std::vector<int>> matrix){
    edges = matrix;
}