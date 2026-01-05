#include <ogdf/basic/Graph.h>
#include <ogdf/basic/graph_generators.h>
#include <ogdf/fileformats/GraphIO.h>
#include <ogdf/layered/DfsAcyclicSubgraph.h>
#include <string>
 
using namespace ogdf;
 
int main()
{
    Graph G;
    randomSimpleGraph(G, 10, 20);
 
    DfsAcyclicSubgraph DAS;
    DAS.callAndReverse(G);
 
    GraphIO::write(G, "output-acyclic-graph.gml", GraphIO::writeGML);
    // plot with "gml2gv output-acyclic-graph.gml | neato -Tpng -o output.png"
 
    return 0;
}