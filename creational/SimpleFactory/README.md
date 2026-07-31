# Simple Factory

Simple Factory centralizes the construction of related objects in one factory.
The caller selects a `CompilerType`; `CompilerFactory` returns the matching
`Compiler` implementation. This is a useful creation technique, but it is not
the GoF Factory Method pattern.

## Build and run

```bash
cmake -S creational/SimpleFactory -B build/simple-factory
cmake --build build/simple-factory
./build/simple-factory/simple_factory
```
