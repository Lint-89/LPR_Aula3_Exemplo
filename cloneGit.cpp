#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");
    cout << "\033[1;34m***************************************************\033[0m\n";
    cout << "\033[1;32m*                                                 *\033[0m\n";
    cout << "\033[1;32m*   \033[1;33m Congratulations 34DS!                     \033[1;32m          *\033[0m\n";
    cout << "\033[1;32m*                                                 *\033[0m\n";
    cout << "\033[1;32m*   \033[1;36mYou've cloned a Git public repository     \033[1;32m*\033[0m\n";
    cout << "\033[1;32m*   \033[1;36mto your local repository!              \033[1;32m*\033[0m\n";
    cout << "\033[1;32m*                                                 *\033[0m\n";
    cout << "\033[1;34m***************************************************\033[0m\n";

    return 0;
}
