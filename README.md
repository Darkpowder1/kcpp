# kompilowanie kcppZadania:
> cd kcpp/kcppZadania && mkdir kcppZadania.build

> cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -B kcppZadania.build -S .

> cmake --build kcppZadania.build

### ZadStudent jest w katalogu w src/

----------
# kompilowanie ZadClassKcpp
> cd kcpp/ZadClassKcpp && mkdir ZadClassKcpp.build

> cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -B ZadClassKcpp.build -S .

> cmake --build ZadClassKcpp.build
