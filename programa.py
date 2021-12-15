with open("s:\\a.png", "rb") as f:
    byte = f.read(1)
    if byte == b'\xff':
        print("Jpeg");
    if byte == b'\x89':
        print("PNG");
    if byte == b'\x49':
        print("TIFF");
    if byte == b'\x42':
        print("Bitmap");
    if byte == b'\x47':
        print("Gif");
