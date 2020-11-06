//
// Created by spl211 on 03/11/2020.
//

#include "Session.h"
#include "../include/json.hpp"
#include <fstream>
#include <iostream>


using json = nlohmann::json;
using namespace std;

Session::Session(const std::string& path):treeType(Root),g(){
    ifstream i(path);
    json j;
    i >> j;
    //Initializing treeType
    if (j["tree"] == "M"){
        this->treeType  = MaxRank;
    }
    else if (j["tree"] == "C"){
        this->treeType  = Cycle;
    }
    else{
        treeType  = Root;
    }
    cout << "raz is beutifull" << ", " << treeType << endl;

    //Initializing Graph
    vector<vector<int>> a;
    for(uint k = 0; k < j["graph"].size(); ++k){
        vector<int> temp;
        for(uint l = 0; l<j["graph"][k].size(); ++l){
            temp.push_back(j["graph"][k][l]);
        }
        a.push_back(temp);
    }
    for (uint o=0; o<j["graph"].size(); ++o){
        cout << "[" ;
        for (uint k=0; k<j["graph"][o].size(); ++k){
            cout << a[o][k] << ", ";
        }
        cout << "]" << endl;
    }
    g = Graph(a);

    /*
    //Initializing Agents
    //vector<Agents*> agents;
    for( int i=0; i<j["agents"].size(); ++i){
        if(j["agents"][i][0] == "V"){
            Virus *v = new Virus(j["agents"][i][1], this);
            agents.pushback(v);
        }
        else {
            ContactTracer *ct = new ContactTracer(this);
            agents.pushback(ct);
        }
    }*/
}


/*
class Session{
public:
    Session(const std::string& path);

    void simulate();
    void addAgent(const Agent& agent);
    void setGraph(const Graph& graph);

    void enqueueInfected(int);
    int dequeueInfected();
    TreeType getTreeType() const;

private:
    Graph g;
    TreeType treeType;
    std::vector<Agent*> agents;
}
*/