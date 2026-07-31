#pragma once

#include "Compiler.h"

class JavaCompiler final : public Compiler {
public:
    std::string compile() const override { return "Compiling Java source"; }
};
