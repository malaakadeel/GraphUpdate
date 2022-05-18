#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include "Edge.h"
#include "Vertex.h"

using namespace std;
vector < Vertex > vertices;

int main()
{

}
// updating distances between towns
void UpdateEdge(int fromVertex, int toVertex, int newWeight){
    bool exist = EdgeExist(fromVertex, toVertex);
    if (exist) {
        for (int i = 0; i < vertices.size(); i++)
        {
            if (vertices.at(i).getStateID() == fromVertex) {
                for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++)
                {
                    if (it->getDestinationVertexID() == toVertex)
                    {
                        it->setWeight(newWeight);
                        break;
                    }
                }
            }
            else if (vertices.at(i).getStateID() == toVertex) {
                for (auto it = vertices.at(i).getEdgeList().begin(); it != vertices.at(i).getEdgeList().end(); it++) {
                    if (it->getDestinationVertexID() == fromVertex) {
                        it->setWeight(newWeight);
                        break;
                    }
                }
            }
            cout << "Destination updated successfully!!";
        }
    }
    else
    {
        cout << "The way does not exist"<<endl;
    }
     
}
//updating town name by town ID
void updateVertex(int vertexID, string newName) {

    bool exist = VertexExist(vertexID);
    if (exist) {
        //looking for needed town to be updated
        for (int i = 0; i < vertices.size(); i++) { 
            if (vertices.at(i).getStateID() == vertexID) {
                vertices.at(i).setStateName(newName);
                break;
            }
        }
        cout << "Town name updated successfully to " << newName << endl;
    }
    else
        cout << "this town does not exist in the graph";
}
// function makes sure that there is way between two towns.
bool EdgeExist(int fromVertex ,int toVertex)
{
    Vertex v = v.getVertexByID(fromVertex); 
    list < Edge > edge;
    edge= v.getEdgeList();
    bool  found = false; //checking
    for (auto it = edge.begin(); it != edge.end(); it++) { // looping in edge list 
        if (it->getDestinationVertexID() == toVertex) {
            found = true;
            return found;
            break;
        }

    }
    return found;
}

bool VertexExist(int vid) {  //checks vertex existing in graph
    bool found = false;
    for (int i = 0; i < vertices.size(); i++) {
        if (vertices.at(i).getStateID() == vid) {
            return true;
        }
    }
    return found;
}