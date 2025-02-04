#include "pedido.hpp"


Pedido::~Pedido() {
  for (auto produto : m_produtos) {
    delete produto;
  }
}

void Pedido::setEndereco(const std::string& endereco) {
  m_endereco = endereco;
}

float Pedido::calculaTotal() const {
  float total = 0;
  for (const auto& produto : m_produtos) {
    total += produto->getQtd() * produto->getValor();
  }
  return total;
}

void Pedido::adicionaProduto(Produto* p) {
  m_produtos.push_back(p);
}

std::string Pedido::resumo() const {
  std::string resumo;
  int count = 1;
  for (const auto& produto : m_produtos) {
    resumo += produto->descricao() + "\n";
  }
  resumo += "Endereco: " + m_endereco;
  return resumo;
}

