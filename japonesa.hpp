#ifndef JAPONESA_H
#define JAPONESA_H

#include "produto.hpp"

class Japonesa : public Produto {
 public:
  Japonesa(const std::string& combinado,
           int sushis,
           int temakis,
           int hots,
           int qtd,
           float valor_unitario);
  std::string descricao() const override;

 private:
  std::string m_combinado;
  int m_sushis;
  int m_temakis;
  int m_hots;
};
#endif
