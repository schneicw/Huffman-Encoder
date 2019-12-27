#include <iostream>
 
///////////////////////////////////////////////////////////////////////////
//HUFFNODE CLASS DEFINITION////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
 
///////////////////////////////////////////////////////////////////////////
//HUFFMAN CLASS HEADER/////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
 
class HuffmanTree {
 private:
  class Huffnode {
   private:
    Huffnode* zero, *one, *parent;
    char symbol;
    float weight;
   public:
    //huffnode constructor.
    Huffnode(char sym, int freq) :
      zero(NULL), one(NULL), parent(NULL), symbol(sym), weight(freq) { }

    //huffnode merge constructor 
    Huffnode(Huffnode* child1, Huffnode* child2) : 
      zero(child1), one(child2), parent(NULL), symbol('\0'), weight(0) {
      if (child1 != NULL) {
        weight += child1->weight;
        child1->parent = this;
      }
      if (child2 != NULL) {
        weight += child2->weight;
        child2->parent = this;
      }
    }
  };

 public:

};

