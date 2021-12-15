#include <stdio.h>

int main(int argc,char *argv[])
{
    // nao passou parametro, exibe mensagem e sai fora
    if (argc == 1) {
	printf("Faltou parametro (nome do arquivo de imagem)");
	return 1;
    }

    unsigned char buffer[1];
    FILE *ptr;

    // r = leitura e b = binario
    ptr = fopen(argv[1],"rb");

    // erro na leitura do arquivo, nao existe?
    if (ptr == NULL) {
	printf("Falha ao abrir %s (nao existe?)", argv[1]);
        return 2;
    }

    // faz a leitura do primeiro byte
    fread(buffer,sizeof(buffer),1,ptr);
    fclose(ptr);

    // analisa o primeiro byte do arquivo, conforme ele sabemos o tipo
    switch (buffer[0])
    {
      case 0x89: // 137
        printf("%s", "Formato PNG");
        break;

      case 0xFF: // 255
        printf("%s", "Formato JPEG");
        break;

      case 0x49: // 73
        printf("%s", "Formato TIFF");
        break;

      case 0x42: // 66
        printf("%s", "Formato Windows Bitmap");
        break;

      case 0x47: // 71
        printf("%s", "Formato GIF");
        break;

      default:
        printf("%s", "Formato desconhecido");
    }

  return 0;
}
