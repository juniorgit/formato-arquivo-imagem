using System;
using System.IO;

class Programa
{
    static void Main(string[] args)
    {
        byte[] bytes = File.ReadAllBytes(@"c:\pasta\arquivo.png");
        switch (bytes[0])
        {
            case 0x89: // 137
                Console.WriteLine("Formato PNG");
                break;

            case 0xFF: // 255
                Console.WriteLine("Formato JPEG");
                break;

            case 0x49: // 73
                Console.WriteLine("Formato TIFF");
                break;

            case 0x42: // 66
                Console.WriteLine("Formato Windows Bitmap");
                break;

            case 0x47: // 71
                Console.WriteLine("Formato GIF");
                break;

            default:
                Console.WriteLine("Formato desconhecido");
                break;
        }
    }
}
