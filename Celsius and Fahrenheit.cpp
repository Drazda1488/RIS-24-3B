   #include <iostream>
   #include <string>

   int main() 
   {
       double celsius; // Объявление переменной для чисел с плавающей точкой

       std::cout << "Введите температуру в градусах Цельсия: ";
       std::cin >> celsius; // Ввод исходных данных

       double fahrenheit = (celsius * 9.0 / 5.0) + 32.0; // Формула для перевода из Шкалы Цельсия в шкалу Фаренгейта

       std::cout << "Температура по шкале Фаренгейта:\n"; 
       std::cout << "int: " << static_cast<int>(fahrenheit) << std::endl; // Вывод символа для int
       
       std::cout << "char: " << static_cast<char>(fahrenheit) << std::endl; // Вывод символа для char
       std::wcout << "wchar: " << static_cast<wchar_t>(fahrenheit) << std::endl; // Используем std::wcout для вывода
       std::cout << "bool: " << (fahrenheit > 0) << std::endl; // Вывод символа для bool
       std::cout << "float: " << static_cast<float>(fahrenheit) << std::endl; // вывод символа для float
       std::cout << "double: " << fahrenheit << std::endl; // Вывод символа для double
       std::string strFahrenheit = std::to_string(fahrenheit); // Преобразование числовых типов данных в строку
       std::cout << "string: " << strFahrenheit << std::endl; // Вывод символа для string

       return 0;
   }
   
