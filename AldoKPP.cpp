// NAMA		: Lalu Aldo Wadagraprana
// NRP		: 5025221101
// Jurusan	: Teknik Informatika

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int losses;
float v0, vt;

float mencari_V0(float vt, int losses)
{
    /* Tulis fungsi mencari v0 kalian disini */
    return vt - losses;
}

int speed_dgn_loss(float vt)
{
	/* tulis fungsi hitung_loss kalian disini */
    if (vt >= 1 && vt <=10)
    {
        return 1;
    }
    else if (vt >=11 && vt <=20)
    {
        return 3;
    }
    else if (vt >=21 && vt <= 30)
    {
        return 5;
    }
    return 0;
}

int main() 
{
    /* tulis kode utama kalian disini */
    
  	/* input adalah kecepatan tangensial maksimum roller */
  	/* std::cin >> input */
    std::cin >> vt;

    losses = speed_dgn_loss(vt);
    v0 = mencari_V0(vt, losses);

    int jarak = (v0*v0)/GRAVITASI;
    float v0 = sqrt(jarak*GRAVITASI);
    float vtroller = v0 + losses;
  
  	/* std::cout << jarak << " " << kecepatan tangensial << std::endl */
    std::cout << jarak << " " << vtroller << std::endl;
    return 0;
}