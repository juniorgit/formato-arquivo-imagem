import java.io.*;
 
public class Programa {
    
    public static void main(String[] args) {
        if (args.length < 1) {
            System.out.println("Faltou arquivo no parametro");
            System.exit(0);
        }
 
        try {
            InputStream inputStream = new FileInputStream(args[0]);
            int primeiroByte = inputStream.read();
			inputStream.close();
 		
        	// analisa o primeiro byte do arquivo, conforme ele sabemos o tipo
            switch (primeiroByte)
            {
              case 0x89: // 137
                System.out.println("Formato PNG");
                break;
        
              case 0xFF: // 255
                System.out.println("Formato JPEG");
                break;
        
              case 0x49: // 73
                System.out.println("Formato TIFF");
                break;
        
              case 0x42: // 66
                System.out.println("Formato Windows Bitmap");
                break;
        
              case 0x47: // 71
                System.out.println("Formato GIF");
                break;
        
              default:
                System.out.println("Formato desconhecido");
            }
        } catch (IOException ex) {
            ex.printStackTrace();
        }
     }
}