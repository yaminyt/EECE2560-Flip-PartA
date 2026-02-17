// ===== src/d_node.h =====
#ifndef D_NODE_H
#define D_NODE_H

#include "card.h"

struct d_node
{
   card data;
   d_node *next;

   d_node(const card &c) : data(c)
   {
      next = nullptr;
   }
};

#endif
