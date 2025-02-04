#include "japonesa.hpp"

std::string Japonesa::descricao() const {
   
  return std::to_string(m_qtd) + "X Comida japonesa - " + m_combinado + ", " +
        std::to_string(m_sushis) + " sushis, " +
        std::to_string(m_temakis) + " temakis e " +
        std::to_string(m_hots) + " hots.";
}

Japonesa::Japonesa(const std::string& combinado,
                   int sushis,
                   int temakis,
                   int hots,
                   int qtd,
                   float valor_unitario) {
  m_combinado = combinado;
  m_sushis = sushis;
  m_temakis = temakis;
  m_hots = hots;
  m_qtd = qtd;
  m_valor_unitario = valor_unitario;
}