#ifndef VENDA_H
#define VENDA_H

#include <list>

#include "pedido.hpp"

class Venda {
 public:
  void adicionaPedido(Pedido* p);
  void imprimeRelatorio() const;
  ~Venda();

 private:
  std::list<Pedido*> m_pedidos;
};
#endif
