#include "Edge.h"
#include "Vertex.h"
#include <vector>

class Vertex
{
public:
    int state_id;
    string state_name;

    list < Edge > edgeList;

    Vertex() {
        state_id = 0;
        state_name = "";
    }

    Vertex(int id, string sname) {
        state_id = id;
        state_name = sname;
    }
    void setStateName(string sname) {
        state_name = sname;
    }
    int getStateID() {
        return state_id;
    }

    list < Edge > getEdgeList() {
        return edgeList;
    }
    Vertex getVertexByID(int vid) {
        vector < Vertex > vertices;
        Vertex temp;
        for (int i = 0; i < vertices.size(); i++) {
            temp = vertices.at(i);
            if (temp.getStateID() == vid) {
                return temp;
            }
        }
        return temp;
    }

};