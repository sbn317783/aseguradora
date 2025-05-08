#include <iostream>
using namespace std;

int main()
{
    int   forSwitch;
    float sueldo ;
    cout << "Buenas, ingrese su salario por favor: ";
    cin >> sueldo;
    
    
    if (sueldo <= 910 ){
        forSwitch = 1;
    } else if (sueldo > 910 && sueldo<= 1255){
        forSwitch =2;
    } else if (sueldo > 1255 && sueldo <=1630){
        forSwitch = 3;
    } else{
        forSwitch = 4;
    }
    

    switch (forSwitch)
    {
    case 1:
        cout << " \n En caso de muerte, la compañia le pagara la cantidad de $10,000.00 \n " <<endl;
        cout << "En caso de invalidez total o permanente. El valor asegurado es: $10,000.00 \n" <<endl << 
                "Primer pago es de 50 por ciento, que en su caso es: $5,000" << endl <<
                "Y los siguientes doce pagos seran de: $" << 5000/12 << " cada una respectivamente \n" <<endl; 
        cout << "Para los gastos funebres, se le dara la cantidad de: $"<< 10000*.15 <<endl ;               
        break;
    
    case 2: 
        cout << "\n En caso de muerte, la compañia le pagara la cantidad de $14,000.00 \n" << endl;
        cout << "En caso de invalidez total o permanente, El valor asegurado es: $14,000.000 \n "  << endl <<
                "Primer pago es de 50 por ciento, que en su caso es: $7,000"  << endl<< 
                "Y los siguientes doce pagos seran de: " << 7000/12 << " cada una respectivamente \n";
        cout << "Para los gastos funebres, se le dara la cantidad de: $1,750 \n" ;        
        break; 
        
    case 3: 
        cout << "\n En caso de muerte, la compañia le pagara la cantidad de $18,000.00 \n" << endl; 
        cout << "En caso de invalidez total o permanente, El valor asegurado es: $18,000.00 \n" << endl <<
                "Primer pago es de 50 por ciento, que en su caso es: $9,000"  << endl<< 
                "Y los siguientes doce pagos seran de: " << 9000/12 << " cada una respectivamente \n";
        cout << "Para los gastos funebres, se le dara la cantidad de: $1,750 \n" ;   
        break;
    
    case 4: 
        cout << "\n En caso de muerte, la compañia le pagara la cantidad de $22,000.00 \n " << endl; 
        cout << "En caso de invalidez total o permanente, El valor asegurado es: $22,000.00 \n " << endl <<
                "Primer pago es de 50 por ciento, que en su caso es: $11,000"  << endl<< 
                "Y los siguientes doce pagos seran de: " << 11000/12 << " cada una respectivamente \n "; 
        cout << "Para los gastos funebres, se le dara la cantidad de: $1,750 \n" ;   
        break; 

    default:
        break;
    }
    
    return 0;
}
