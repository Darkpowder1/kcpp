# kompilowanie kcppZadania:
> cd kcpp/kcppZadania && mkdir ZadStudent.build

> cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -B ZadStudent.build -S .

> cmake --build ZadStudent.build

### ZadStudent jest w katalogu w src/

----------
# kompilowanie ZadClassKcpp
> cd kcpp/ZadClassKcpp && mkdir ZadClassKcpp.build

> cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -B ZadClassKcpp.build -S .

> cmake --build ZadClassKcpp.build
