#include "pizza_marguerita.hpp"


Pizza_marguerita::Pizza_marguerita(int q, float valor_unitario, int pedacos, bool borda_rech): Pizza(q, valor_unitario, pedacos, borda_rech){
    get_sabor();
}

string Pizza_marguerita::get_sabor() {
    return "Marguerita";
}
