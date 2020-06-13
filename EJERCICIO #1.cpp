//Ejercicio #1 5676//
# include < iostream >
Espacio estándar ;

struct  Nodo {
	int dato;
	Nodo * siguiente;
};
nulo  EnteroEntrada ();  
nulo  PareInpar ( int n);
int dato;
int  main () {	
	EnteroEntrada ();
	while (dato < 10000000 && dato> 1 ) {
	PareInpar (dato);
}
if (dato> 10000000 ) {
cout << " El número tiene que ser mayor 1 pero menor menor a 1000000 " << endl;
}
if (dato < 1 ) {
cout << " El número tiene que ser mayor 1 pero menor menor a 1000000 " << endl;	
}
	devuelve  0 ;
}
nulo  EnteroEntrada () {
	cout << " Ingrese el numero entero: " ;
	cin >> dato;

}
nulo  PareInpar ( int n) {
	while (dato> 1 ) {
	 	cout << dato << "  " ;
	 	if (dato% 2 == 0 )
	 	{
	 		dato = dato / 2 ;
		 }
		 más 
	 	{
	 		dato = (dato * 3 + 1 );
		 }
	 }
	 cout << "  " << dato;

}
