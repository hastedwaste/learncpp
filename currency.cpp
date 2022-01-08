#include <iostream>

int main() {
  double pesos, reais, soles, usd;
  std::cout << "please enter number of colombian pesos:\n";
  std::cin >> pesos;

  std::cout << "pease enter # of reais\n";
  std::cin >> reais;

  std::cout << "pees ent n of soles\n";
  std::cin >> soles;
  
  usd = (69 * pesos) + (420 * reais) + (42 * soles);
  if (usd > 69420) {
      std::cout << "damn boi u rich! u got " << usd << " monies fool!\n";

   } else {
       std::cout << "dang fella u poor asf u only got " << usd << " monies fool!\n";

  }



  return 0;

}