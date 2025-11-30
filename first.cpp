#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
  
    unordered_set<string> vertices;

    string inputVertices[] = {"A", "B", "E", "B", "D", "E", "B", "C", "D"};

    for (string v : inputVertices)
     {

        
        if (vertices.find(v) != vertices.end()) 
        {
            cout << v << " is already present (duplicate)" << endl;
        } else 
        {
            cout << v << " is added (new vertex)" << endl;
            vertices.insert(v);
        }
    }

  
    cout << "\nUnique Vertices: ";
    for (string v : vertices) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}