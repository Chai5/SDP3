struct numeros {
    int numero1;
    int numero2;
};

program PROGRAMA_CALCULADORA {
    version VERSION_CALCULADORA {
        int suma (numeros) = 1;
        int resta (numeros) = 2;
        int multiplicacion (numeros) = 3;
        float division (numeros) = 4;
    } = 1;
} = 0x31111111;
