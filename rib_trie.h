
#ifndef __RIB_TRIE_H
#define __RIB_TRIE_H

#include "rib_common.h"
class RibTrieNode
{

  private:
    byte _octet;
    std::list<RtableEntry> _routes;
    int _num_children;
    std::map<byte, RibTrieNode *> _children;

  public:
    void insertRouteFromTrie(RtableEntry& route);
    void deleteRouteFromTrie(RtableEntry& route);
};

#endif //__RIB_TRIE_H
