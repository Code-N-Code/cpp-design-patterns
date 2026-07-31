# Factory Method Pattern

The Factory Method Pattern is a **creational design pattern** that defines an
interface for creating an object while allowing derived factories to decide
which concrete product to create. It keeps client code independent of concrete
types.

## Run the examples

This example has its own `CMakeLists.txt` and can be built independently
(requires CMake 3.16+ and a C++17 compiler):

```bash
cmake -S creational/FactoryMethod -B build/factory-method
cmake --build build/factory-method
./build/factory-method/factory_method
```
