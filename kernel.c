void main()
{
   int i;
   int j;
   int basePantalla=0x8000;
   int tamanioCadena=0xA;
   int cantidadColores =0x10;
   int filaActual =0x0;
   int pos =0x0;
   char hellowordPalabra[10];
   hellowordPalabra[0]='H';
   hellowordPalabra[1]='e';
   hellowordPalabra[2]='l';
   hellowordPalabra[3]='l';
   hellowordPalabra[4]='o';
   hellowordPalabra[5]='w';
   hellowordPalabra[6]='o';
   hellowordPalabra[7]='r';
   hellowordPalabra[8]='l';
   hellowordPalabra[9]='d';
   /*limpiar pantalla*/
   for(i=0;i<0xF9E;i=i+2)
   {
       putInMemory(0xB000, basePantalla+i, 0x0);
       putInMemory(0xB000, basePantalla+i+1, 0x0);
   }

  for(j=0; j<cantidadColores;j=j+1)
  {
	 for(i =0; i<tamanioCadena;i =i+1)
         {
	       putInMemory(0xB000, basePantalla+pos, hellowordPalabra[i]);
	       putInMemory(0xB000, basePantalla+pos+1,j);
	       pos = pos+2;
  	 }
	filaActual = ((80*j)*2);
	pos = filaActual;
	
  }
  
}


