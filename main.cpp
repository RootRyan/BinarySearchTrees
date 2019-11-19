// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
   
    string s;
    s = "This is a series of words to test the tree";
    cout << "inserting ... " << s << endl;
    s = "This";
    bst.insertItem(s);
    s = "is";
    bst.insertItem(s);
    s = "a";
    bst.insertItem(s);
    s = "series";
    bst.insertItem(s);
    s = "of";
    bst.insertItem(s);
    s = "words";
    bst.insertItem(s);
    s = "to";
    bst.insertItem(s);
    s = "test";
    bst.insertItem(s);
    s = "the";
    bst.insertItem(s);
    s = "tree";
    bst.insertItem(s);

//    inFile >> s;
//    while (inFile) {;
//        cout << "inserting ... " << s << endl;
//        bst.insertItem(s);
//        inFile >> s;
//    }

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "tree";
    bst.deleteItem(s);
    print(bst.preOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;

    if(bst.isItemInTree("words")) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found"<< endl;
    }

    if(bst.isItemInTree("tree")) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found"<< endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;




    BST_312<int> bst1;

    int t;
    string a = "8 13 12 7 1 35 4 6 5";
    cout << "inserting ... " << a << endl;
    t = 8;
    bst1.insertItem(t);
    t = 13;
    bst1.insertItem(t);
    t = 12;
    bst1.insertItem(t);
    t = 7;
    bst1.insertItem(t);
    t = 1;
    bst1.insertItem(t);
    t = 35;
    bst1.insertItem(t);
    t = 4;
    bst1.insertItem(t);
    t = 6;
    bst1.insertItem(t);
    t = 5;
    bst1.insertItem(t);

    cout << "postorder traversal is " << endl;
    print(bst1.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst1.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst1.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst1.countNodes() << endl;
    t = 8;
    bst1.deleteItem(8);
    print(bst1.preOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst1.countNodes() << endl;
    cout << endl;

    if(bst1.isItemInTree(8)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found"<< endl;
    }

    if(bst1.isItemInTree(35)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found"<< endl;
    }



}

