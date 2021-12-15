<?php
$buffer = file_get_contents("a.jpg");

if (!$buffer) {
  die("Erro ao ler arquivo\n");
}

$primeiro_byte = ord($buffer[0]);

switch ($primeiro_byte) {
  case 137:
    echo("Formato PNG");
    break;
 
  case 255:
    echo("Formato JPEG");
    break;
  
  case 73:
    echo("Formato TIFF");
    break;
  
  case 66:
    echo("Formato Windows Bitmap");
    break;
  
  case 71:
    echo("Formato GIF");
    break;       

  default:
    echo("Formato desconhecido");
}