#include <iostream>
#include "../include/json.hpp"
#include <fstream>
#include <vector>
#include "Session.h"

using json = nlohmann::json;
using namespace std;

int main(int argc, char** argv){
    if(argc != 2){
        cout << "usage cTrace <config_path>" << endl;
        return 0;
    }

    vector<int> a;
    a.push_back(6);
    a.push_back(7);
    vector<vector<int>> b;
    for(uint i = 0; i < a.size(); i++){
        cout << a[i] << endl;
    }
    /*
    for(uint k = 0; k < j["graph"].size(); ++k){
        for(uint l = 0; l<j["graph"][k].size(); ++l){
            a[k][l] = j["graph"][k][l];
        }
    }
    */

    Session sess(argv[1]);
    //sess.simulate();
    return 0;
}
