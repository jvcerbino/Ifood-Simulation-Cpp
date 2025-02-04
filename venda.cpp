#include "venda.hpp"

#include <iomanip>

Venda::~Venda() {
  for (auto pedido : m_pedidos) {
    delete pedido;
  }
}

void Venda::adicionaPedido(Pedido* p) {
  m_pedidos.push_back(p);
}

void Venda::imprimeRelatorio() const {
  int count = 1;
  float total_vendas = 0;
  for (const auto& pedido : m_pedidos) {
    std::cout << "Pedido " << count++ << std::endl;
    std::cout << pedido->resumo() << std::endl;
    total_vendas += pedido->calculaTotal();
  }
  std::cout << "Relatorio de Vendas" << std::endl;
  std::cout << "Total de vendas: R$ " << std::fixed << std::setprecision(2) << total_vendas << std::endl;
  std::cout << "Total de pedidos: " << m_pedidos.size() << std::endl;
}







