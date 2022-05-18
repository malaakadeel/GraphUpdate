#include <iostream>
#include <list>
using namespace std;
class Vertex
{
public:
    int state_id;
    string state_name;

    list < Edge > edgeList;

    Vertex();
    Vertex(int id, string sname);
    int getStateID();
    list < Edge > getEdgeList();
    void setStateName(string sname);
    Vertex getVertexByID(int vid);
};
