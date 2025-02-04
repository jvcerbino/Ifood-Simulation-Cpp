#include "hamburguer.hpp"

std::string Hamburguer::descricao() const {
  return std::to_string(m_qtd) + "X Hamburguer " + m_tipo + (m_artesanal ? " artesanal." : " simples.");
}

Hamburguer::Hamburguer(const std::string& tipo,
                       bool artesanal,
                       int qtd,
                       float valor_unitario) {
  m_tipo = tipo;
  m_artesanal = artesanal;
  m_qtd = qtd;
  m_valor_unitario = valor_unitario;
}
