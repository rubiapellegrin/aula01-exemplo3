#include <iostream>
#include "PGM.hpp"

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Portuguese");

	cout << "olá!" << endl;
	
	PGM *img = new PGM();
	unsigned char corP;

	
	img->ler("feep.pgm");


	img->gravarLinha(128,2);
	img->gravarQuadro(7,1,10,5,255);

	//ler o valor de um pixel
	corP = img->getPixel(1,1);

	cout << "A cor do pixel(1,1) é " << (int) corP << endl;


	//alterando a cor do pixel(1,1) para branco(255) e gravando o resultado na imagem de saída 
	img->setPixel(1,1, 255);
	img->gravar("saida.pgm");

	delete img;

	PGM *img2 = new PGM();

	img2->criar(500,500);


	img2->gravarListrado(255);
	img2->gravarArquivo("saida2.pgm");
	delete img2;



	
	
	return EXIT_SUCCESS; 
}
