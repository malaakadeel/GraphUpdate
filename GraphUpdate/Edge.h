#pragma once
class Edge
{
    public:
        int DestinationVertexID;
        int weight;

        Edge(int destVID, int w) ;
        void setEdgeValues(int destVID, int w) ;
        void setWeight(int w);
        int getDestinationVertexID();
        int getWeight();
};

