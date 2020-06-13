//Ejercicio #2 5676//
# include  < bits / stdc ++. h > 
# include < iostream >
usando el  espacio de nombres  estándar ;

int con = 0 ;
int n, x, i, k, j, l;
int e [ 10000 ];

nulo  datoentrada ();
 suma vacía ();

int  main ()
{
	datoentrada ();
	while (n> = 1 && n <= 1000 && x, e [ 10000 ]> = 1 && x, e [ 10000 ] <= 10000000 && con == 0 ) {
	
	int n = sizeof (e) / sizeof (e [ 0 ]);
	suma ();
	si (con == 0 )
	{
		cout << " \ n imposible " ;
	}
}
	if (n < 1 && n> 1000 ) {
		cout << " \ n el número de elementos de arreglos tiene que estar entre 1 y 10000 " ;
	}
	if (x, e [ 10000 ] < 1 &&x, e [ 10000 ]> 10000000 ) {
		cout << " la suma tiene que y los elementos del arrelgo van desde 1 hasta 1000000000 " ;
	}
	devuelve  0 ;
}

nulo  datoentrada () {
	cout << " \ n Escribir el número de elementos en el arreglo y el total de suma requerida: " ;
	cin >> n >> x;
	cout << " \ n Escribiendo los elementos del arreglo: " ;
	para (i = 1 ; i <= n; i ++)
	{
		cin >> e [i];

}
}
nulo  suma () {
para ( int i = 0 ; i <n - 3 ; i ++)
{ 
    para ( int j = i + 1 ; j <= n - 2 ; j ++)
    {           
        para ( int k = j + 1 ; k <= n - 1 ; k ++)
        {
            para ( int l = k + 1 ; l <n; l ++)
        
            if (e [i] + e [j] + e [k] + e [l] == x)
            if (con == 0 ) {
                cout << i + 1 << " , " << j + 1  
                     << " , " << k + 1 << " , " << l + 1 << endl;
                     con + = + 1 ;
					 }
		}
	}  
} 
}


