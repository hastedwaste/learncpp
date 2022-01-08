#include <iostream>

int main() {
  double earthwt, mercurywt, venuswt, marswt, jupiterwt, saturnwt, uranuswt, neptunewt;
  int desiredplanet;
  std::cout << "what is your current earth mass in kg?\n";
  std::cin >> earthwt;
  std::cout << "what planet do you want to calc? 1 for mercury, 2 for venus, 3 for mars, 4 for jupier, 5 for saturn, 6 for uranus, and 7 for neptune.\n";
  std::cin >> desiredplanet;
  switch (desiredplanet) {
    case 1:
    mercurywt = earthwt * 0.38;
    std::cout << "you are " << mercurywt << " kilograms on mercury\n";
    break;
    case 2:
    venuswt = earthwt * 0.91;
    std::cout << "you are " << venuswt << " kilograms on venus\n";
    break;
    case 3:
    marswt = earthwt * 0.38;
    std::cout << "you are " << marswt << " kilograms on mars\n";
    break;
    case 4:
    jupiterwt = earthwt * 2.34;
    std::cout << "you are " << jupiterwt << " kilograms on jupiter\n";
    break;
    case 5:
    saturnwt = earthwt * 1.06;
    std::cout << "you are " << saturnwt << " kilograms on saturn\n";
    break;
    case 6:
    uranuswt = earthwt * 0.92;
    std::cout << "you are " << uranuswt << " kilograms on uranus\n";
    break;
    case 7:
    neptunewt = earthwt * 1.19;
    std::cout << "you are " << neptunewt << " kilograms on neptune\n";
    break;
    default:
    std::cout << "error, are you sure you entered the right number?\n";
  }
return 0;
}