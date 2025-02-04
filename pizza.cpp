#include "pizza.hpp"


std::string Pizza::descricao() const {
  return std::to_string(m_qtd) + "X Pizza " + m_sabor + ", " + std::to_string(m_pedacos) + " pedacos " +
         (m_borda_recheada ? "e borda recheada." : "e sem borda recheada.");
}

Pizza::Pizza(const std::string& sabor,
             int pedacos,
             bool borda_recheada,
             int qtd,
             float valor_unitario) {
  m_sabor = sabor;
  m_pedacos = pedacos;
  m_borda_recheada = borda_recheada;
  m_qtd = qtd;
  m_valor_unitario = valor_unitario;
}
