#pragma once

#include <memory>
#include <stdexcept>

#include "compiler/Compiler.h"
#include "compiler/CompilerType.h"
#include "compiler/CppCompiler.h"
#include "compiler/JavaCompiler.h"
#include "compiler/PythonCompiler.h"

class CompilerFactory {
public:
    static std::unique_ptr<Compiler> create(CompilerType type) {
        switch (type) {
            case CompilerType::Cpp:
                return std::make_unique<CppCompiler>();
            case CompilerType::Java:
                return std::make_unique<JavaCompiler>();
            case CompilerType::Python:
                return std::make_unique<PythonCompiler>();
        }
        throw std::invalid_argument("Unsupported compiler type");
    }
};
