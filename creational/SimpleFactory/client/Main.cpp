#include <iostream>

#include "../library/CompilerFactory.h"

int main() {
    auto compiler = CompilerFactory::create(CompilerType::Java);
    std::cout << compiler->compile() << '\n';
}
