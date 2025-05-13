// main.cpp for btree lab
//
// Michael Bonanno

#include "btree.hpp"
#include <fstream>
#include <vector>
#include <string>

int main(int argc, char *argv[]) {
    std::vector<std::string> option(2); 
    option[0] = "program";
    option[1] = "output";

    if (argc < 2) {
        std::cerr << "Need file name and an output file: " << std::endl;
        std::cerr << "[ " << option[0] << " | " << option[1] << std::endl;
        exit(1);
    }

    btree<int> labTree;

    labTree.insert(8);
    labTree.insert(4);
    labTree.insert(55);
    labTree.insert(1);
    labTree.insert(7);
    labTree.insert(16);
    labTree.insert(87);
    labTree.insert(2);
    labTree.insert(9);
    labTree.insert(64);
    labTree.insert(99);

    //tests
    std::ofstream out(argv[1]);

    //inorder
    out << "inorder: ";
    labTree.inorder(out);
    out << std::endl;
    //preorder
    out << "preorder: ";
    labTree.preorder(out);
    out << std::endl;
    //postorder
    out << "postorder: ";
    labTree.postorder(out);
    out << std::endl;
    //findDepth
    out << "findDepth tests:" << std::endl;
    out << "findDepth(8) = " << labTree.findDepth(8) << std::endl;
    out << "findDepth(4) = " << labTree.findDepth(4) << std::endl;
    out << "findDepth(16) = " << labTree.findDepth(16) << std::endl;
    out << "findDepth(64) = " << labTree.findDepth(64) << std::endl;

    out.close();

    return 0;
}