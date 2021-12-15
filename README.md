### Objetivo
Descobrir o formato de um arquivo de imagem (jpeg, png, bmp, gif e tiff) sem saber a extensão. Apenas analisando o conteúdo do mesmo.

### Como funciona
O programa foi feito Linguagem Ansi-C, C#, Java e Delphi.
Basta abrir o arquivo em formato binário e analisar os primeiros bytes. As regras são:

Sequencia em decimal | Formato | Observação
------------ | ------------- | -------------
137 80 78 71 13 10 26 10 | PNG |
255 216 255 225 **X X** 74 70 73 70 0 | JPEG | X = ignorar
71 73 70 | Gif |
66 77 | Bitmap |
73 73 42 | TIFF |

### Observação
No fonte eu analisei apenas o primeiro byte, visto todos os formatos serem diferentes.
