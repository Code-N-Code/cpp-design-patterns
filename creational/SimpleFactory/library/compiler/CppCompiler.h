#pragma once

#include "Compiler.h"

class CppCompiler final : public Compiler {
public:
    std::string compile() const override { return "Compiling C++ source"; }
};
