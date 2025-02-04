#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"

class Pizza : public Produto {
 public:
  Pizza(const std::string& sabor,
        int pedacos,
        bool borda_recheada,
        int qtd,
        float valor_unitario);
  std::string descricao() const override;

 private:
  std::string m_sabor;
  int m_pedacos;
  bool m_borda_recheada;
};

#endif
