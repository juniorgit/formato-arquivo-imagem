program Programa;

var
  meuArquivo: File;
  umByte    : Byte;

begin
  AssignFile(meuArquivo, 'c:\pasta\NomeArquivo.bmp');
  Reset(meuArquivo, 1);
  BlockRead(meuArquivo, umByte, 1);
  CloseFile(meuArquivo);

  case umByte of
    137:
      WriteLn('Formato PNG');
    255:
      WriteLn('Formato Jpeg');
    73:
      WriteLn('Formato TIFF');
    66:
      WriteLn('Formato Bitmap');
    71:
      WriteLn('Formato GIF');
  else
    WriteLn('Formato desconhecido');
  end;

end.
