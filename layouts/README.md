Various C++ project layouts

Basic gtest + cmake layout following [this](https://stackoverflow.com/questions/62910867/how-to-run-tests-and-debug-google-test-project-in-vs-code)

| :----:           | :----:                                 | :----: |
| Folder           | Description                            | Build  |
| :---             | :----                                  | :---   |
| [basic](basic)   | Example with inheritance and cast to parent class pointer<br>(vehicle/car) | CMake  |
| [derive](derive) | *main* and *support* file in same level subfolders | CMake  |
| [makeinc](makeinc) | Dedicated subfolder for *include* files | Malefile |
| [misc](misc) | Invoking supporting makefile | Makefile |
| [multexec](multexec) | Multiple executable targets | CMake |
| [nested_inc](nested_inc) | Nested subfolders in both *include* and *src*<br>folders | CMake |
| [nested_lib](nested_lib) | Build with intermediate library in nested subfolder | CMake |
| [nested_obj](nested_obj) | Build with intermediate object files in nested<br>subfolders | CMake |
| [plain](plain) | *Base/derive* class example, no build system | |
| [plain_test](plain_test) | Build multiple test executables using CMake<br>```add_test()``` only | CMake |
| [static-var](static-var) | Explore *static* keyword meaning as applied to<br>variables in different files | Makefile|
| [testing](testing) | Using GoogleTest for unit testing | CMake |
| [vmake](vmake) | Run Makefile using VS Code extension | Makefile | 