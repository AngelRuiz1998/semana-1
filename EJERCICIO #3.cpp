//Ejercicio #3 5676//
#include < iostream >
# include < stdlib.h >
Espacio estándar ;
vacío  de entranda ();
distribución cero ();
int n, m, k, i, r;
int a [ 1000 ];
int b [ 1000 ];
int suma = 0 ;
int  main () {
    dentranda ();
    distribucion ();
    cout << " Las personas aceptados son: " << sum;
    devuelve  0 ;
}
vacío  dentranda () {
    cout << " \ n Proporcionar el número de solicitantes, el número de apartamentos y la diferencia máxima permitida: " ;
    cin >> n >> m >> k;
    cout << " \ n Proporcionar el tamaño del apartamento deseado: " ;
	para (i = 0 ; i <n; i ++) {
        cin >> a [i];
        
    
    }
    cout << " \ n Tamaño de cada aprtamiento disponible: " ;
    para (r = 0 ; r <m; r ++) {
        cin >> b [r];
	}    
}
 distribución nula () {
	para (i = 0 ; i <n; i ++) {
    	para (r = 0 ; r <m; r ++) {
    		si (suma <m) {
			if (( abs (a [i] -b [r])) <= k) {
			suma + = 1 ;
  			a [i] = a [i + 1 ];
			b [r] = b [r + 1 ];
		}
			}
		}
}
}
© 2020 GitHub, Inc.
