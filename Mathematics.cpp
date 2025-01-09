/*
    Copyright(C) 2025 Tyler Crockett | Macdaddy4sure.com

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissionsand
    limitations under the License.
*/

#include "AugmentedIntelligence.hpp"
#include "Mathematics.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Reference.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;

// The following function will parse an arithmetic operation from sound
// This function takes one text string
//  Arithmetic Operations           Possible Speech Input                                                                      Function Input
//  1.  Exponent of x^y           | ten raised to the sixth power                                                             | pow(10, 6)
//  2.  Exponent squared of x     | six squared                                                                               | pow(6, 2)
//  3.  Absolute Value of x       | The absolute value of negative 2                                                          | abs(-2)
//  4.  mod of a number           | modulus of 10 by 2, 10 modulus 2, remainder of 10 divided by 2                            | 10 % 2
//  5.  Square root of x          | square root of four                                                                       | sqrt(4)
//  6.  nth root of x             | third root of ten                                                                         | pow(value, 1/rootvalue))
//  7.  Factorial of x!           | Factorial of onehundered                                                                  | for (int i = 1; i <= 100; i++) factorial *= i;
//  8.  Division of x/y           | ten divided by two                                                                        | 10 / 2
//  9.  Multiplication of x * y   | ten multiplied by two, ten times two                                                      | 10 * 2
//  10. Subtraction of x - y      | twenty minus two, twenty subtracted by two                                                | 20 - 2
//  11. Addition of x + y         | thirtyfive plus ten, thirtyfive added to ten                                              | 35 + 10
//  12. Log base x of y           | log base ten of twenty                                                                    | log10(twenty)
//  13. Natural log of number     | the natural log of ten                                                                    | double log(double x)
//  14. Floating point addition   | one point two three plus three point one four, one dollar twenty six cents + five dollars | 1.26 + 5.00
//  15. Floating point subtraction| one point two three minus three point one four                                            | 1.23 - 3.14
//  16. Floating point multiply   | one point two three times three point one four                                            | 1.23 * 3.14
//  17. Floating point divide     | one point two three divided by three point one four                                       | 1.23 / 3.14
//  18. Floating point exponent   | two point three six to the third power                                                    | pow(2.36, 3)
//  19. Floating point roots      | square root of three point one four, fourth root of three point one four                  | pow(3.14, 1/4)
//  15. sine of x                 | sine of thirty degrees, sine of pi over two                                               | sin(30), sin(pi / 2)
//  16. cosine of x               | cosine of thirty degrees, cosine of pi over two                                           | cos(30), cos(pi / 2)
//  17. tangent of x              | tangent of thirty degrees, tangent of pi over two                                         | tan(30), tan(pi / 2)
//  18. secant of x               | secant of thirty degrees, secant of pi over two                                           | sec(30), sec(pi / 2)
//  19. cosecant of x             | cosecant of thirty degrees, cosecant of pi over two                                       | csc(30), csc(pi / 2)
//  20. cotangent of x            | cotangent of thirty degrees, cotangent of pi over two                                     | cot(30), cot(pi / 2)
//  21. arcsine of x              | sine inverse of ten, arcsine of ten                                                       | asin(30), asin(pi / 2)
//  22. arccosine of x            | cosine inverse of ten, arccosine of ten                                                   | acos(30), acos(pi / 2)
//  23. arctangent of x           | tangent inverse of ten, arctangent of ten                                                 | atan(30), atan(pi / 2)
//  24. arcsecant of x            | secant inverse of ten, arcsecant of ten                                                   | 1/acos(30), 1/acos(pi / 2)
//  25. arccosecant of x          | cosecant inverse of ten, arccosecant of ten                                               | 1/asin(30), 1/asin(pi / 2)
//  26. arccotangent of x         | cotangent inverse of ten, arccotangent of ten                                             | 1/atan(30), 1/atan(pi / 2)
//  27. hyperbolic sine of x      | hyperbolic sine of ten                                                                    | sinh(30), sinh(pi / 2)
//  28. hyperbolic cosine of x    | hyperbolic cosine of ten                                                                  | cosh(30), cosh(pi / 2)
//  29. hyperbolic tangent of x   | hyperbolic tangent of ten                                                                 | tanh(30), tanh(pi / 2)
//  30. hyperbolic secant of x    | hyperbolic seccant of ten                                                                 | 1/cosh(30), 1/cosh(pi / 2)
//  31. hyperbolic cosecant of x  | hyperbolic cosecant of ten                                                                | 1/sinh(30), 1/sinh(pi / 2)
//  32. hyperbolic cotangent of x | hyperbolic cotangent of ten                                                               | 1/tanh(30), 1/tanh(pi / 2)
//  33. area hyper sine of x      | area hyperbolic sine of ten                                                               | asinh(30), asinh(pi / 2)
//  24. area hyper cosine of x    | area hyperbolic cosine of ten                                                             | acosh(30), acosh(pi / 2)
//  25. area hyper tangent of x   | area hyperbolic tangent of ten                                                            | atanh(30), atanh(pi / 2)
//  26. area hyper cosecant of x  | area hyperbolic cosecant of ten                                                           | 1/asinh(30), 1/asinh(pi / 2)
//  27. area hyper secant of x    | area hyperbolic secant of ten                                                             | 1/acosh(30), 1/acosh(pi / 2)
//  28. area hyper cotangent of x | area hyperbolic cotangent of ten                                                          | 1/atanh(30), 1/atanh(pi / 2)
void _Math::ArithmeticParse(string transcription)
{
    // 1. Parse the text for numbers and operations

    // 1.5. Get methods of speaking an equation

    // 2. Return the result of the calculation to result datatype

    int number1;
    int number2;
    int spaces = 0;
    double f_number1;
    double f_number2;
    bool floatingP = false;
    bool space = false;
    bool negative = false;
    double result;
    string operation;
    string words[10];
    string num_name1;
    string num_name2;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    ostringstream oss;
    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    string current_date = oss.str();

    // Search the string for words
    for (int y = 0; y <= transcription.length(); y++)
    {
        if (isalpha(transcription[y]) && !isspace(transcription[y]))
        {
            words[spaces] += transcription[y];
        }
        else
        {
            spaces++;
        }
    }

    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result1;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string database = "Numbers2Words";
    string table_name = "Numbers2Words";
    string sql;
    bool num1;

    // Create MySQL Query
    ostringstream query1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);

    // Search the transcription word by word and check with the MySQL Database for the particular word
    if (conn)
    {
        query1 << "SELECT * FROM " << table_name;
        sql = query1.str();
        mysql_query(conn, sql.c_str());
        result1 = mysql_store_result(conn);

        for (int n = 0; n <= spaces; n++)
        {
            while (row = mysql_fetch_row(result1))
            {
                // Check if the current row and column are the number
                if (row[0] == words[n])
                {
                    if (!num1)
                    {
                        // Check if the previous word is 'negative'
                        if (words[n - 1] == "negative")
                        {
                            number1 = stoi(row[1], nullptr);
                            number1 = number1 * -1;
                            num1 = true;
                        }
                        else
                        {
                            num1 = true;
                            number1 = stoi(row[1], nullptr);
                        }
                    }
                    else
                    {
                        if (words[n - 1] == "negative")
                        {
                            number2 = stoi(row[1], nullptr);
                            number2 = number2 * -1;
                        }
                        else
                        {
                            number2 = stoi(row[1], nullptr);
                        }
                    }
                }
            }
        }
    }

    // Check for floating point numbers
    for (int i = 0; i <= spaces; i++)
    {
        if (words[i] == "point")
        {
            floatingP = true;
        }
    }

    if (floatingP)
    {
        MYSQL* conn2;
        MYSQL_ROW row2;
        MYSQL_RES* result2;
        string database = "Numbers2Words";
        string table_name = "FloatingPoint";
        string sql2;
        bool num1 = false;
        bool point = false;
        int place;
        // Create MySQL Query
        ostringstream query2;

        conn2 = mysql_init(0);
        conn2 = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);

        // Search the transcription word by word and check with the MySQL Database for the particular word
        if (conn2)
        {
            query2 << "SELECT * FROM " << table_name;
            sql2 = query2.str();
            mysql_query(conn2, sql2.c_str());
            result2 = mysql_store_result(conn2);

            for (int m = 0; m <= spaces; m++)
            {
                while (row2 = mysql_fetch_row(result2))
                {
                    // Check if the current row and column are the number
                    if (row2[0] == words[m])
                    {
                        if (!point)
                        {
                            if (!num1)
                            {
                                place++;
                                num_name1 += row2[1];
                            }
                            else
                            {
                                place++;
                                num_name2 += row2[1];
                            }
                        }
                        else
                        {
                            if (!num1)
                            {
                                num_name1 += row2[1];
                                place = 0;
                            }
                            else
                            {
                                num_name2 += row2[1];
                                place = 0;
                            }
                        }
                    }
                    if (words[m] == "point")
                    {
                        point = true;
                    }
                    
                    // Check if the current word is an operation
                    if (words[m] == "plus" || words[m] == "minus" || words[m] == "times" || words[m] == "multiplied" || words[m] == "divided")
                    {
                        num1 = true;
                        point = false;
                    }
                }

                for (int i = 0; i <= num_name1.length(); i++)
                {
                    if (i == place)
                    {
                        num_name1 += '.';
                    }
                    else
                    {
                        num_name1 += num_name1[i];
                    }
                }

                for (int i = 0; i <= num_name2.length(); i++)
                {
                    if (i == place)
                    {
                        num_name2 += '.';
                    }
                    else
                    {
                        num_name2 += num_name2[i];
                    }
                }

                f_number1 = stof(num_name1);
                f_number2 = stof(num_name2);
            }
        }
    }

    // Search the words in each line for keywords
    for (int z = 0; z <= spaces; z++)
    {
        // Check for x to nth power
        if (words[z] == "raised")
        {
            for (int a = z + 1; a <= spaces; a++)
            {
                if (words[a] == "power")
                {
                    // The operation is for exponentiation
                    // Remove the STL 'pow()' function if desired
                    pow(number1, number2);

                    // Save the operation to the MySQL database
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                }
            }
        }
        // Check for exponents to the 2nd power
        if (words[z] == "squared")
        {
            pow(number1, number2);
        }
        // Check for abolute value
        if (words[z] == "absolute")
        {
            for (int b = z + 1; b <= spaces; b++)
            {
                if (words[b] == "value")
                {
                    abs(number1);

                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                }
            }
        }
        // Check for modulus
        if (words[z] == "modulus")
        {
            result = number1 % number2;
        }
        // Check for square root
        if (words[z] == "square")
        {
            for (int b = z + 1; b <= spaces; b++)
            {
                if (words[b] == "root")
                {
                    sqrt(number1);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                }
            }
        }
        // Check for cube root
        if (words[z] == "cube")
        {
            for (int c = z + 1; c <= spaces; c++)
            {
                if (words[c] == "root")
                {
                    cbrt(number1);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                }
            }
        }
        // Check for fourth root
        if (words[z] == "fourth")
        {
            for (int d = z + 1; d <= spaces; d++)
            {
                if (words[d] == "root")
                {
                    // No function for 4th root is available in C STL

                }
            }
        }
        // Check for Factorial
        if (words[z] == "factorial")
        {
            result = 1;
            // Factorial is a function that multiplies all number in sequence to the factorial
            for (int n = 1; n <= number1; n++)
            {
                result = result * n;
            }
            _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
        }
        // Check for division
        if (words[z] == "divided")
        {
            result = number1 / number2;
            _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
        }
        // Check for multiplication
        if (words[z] == "multiplied" || words[z] == "times")
        {
            result = number1 * number2;
            _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
        }
        // Check for subtraction
        if (words[z] == "minus" || words[z] == "subtracted")
        {
            result = number1 - number2;
            _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
        }
        // Check for addition
        if (words[z] == "plus" || words[z] == "added")
        {
            result = number1 + number2;
            _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
        }
        // Check for log
        if (words[z] == "log")
        {
            for (int e = z + 1; e <= spaces; e++)
            {
                if (words[e] == "base")
                {
                    result = log2(number1) / log2(number2);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                }
            }
        }
        // Check for natural log
        if (words[z] == "natrual" && words[z + 1] == "log")
        {
            result = log(number1);
        }
        // Check for floating point addition
        if (words[z] == "point")
        {
            for (int f = z + 1; f <= spaces; f++)
            {
                if (words[f] == "plus" || words[f] == "added")
                {
                    result = f_number1 + f_number2;
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                }
            }
        }
        // Check for floating point subtraction
        if (words[z] == "point")
        {
            for (int g = z + 1; g <= spaces; g++)
            {
                if (words[g] == "minus" || words[g] == "subtracted")
                {
                    result = f_number1 - f_number2;
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                }
            }
        }
        // Check for floating point multiplication
        if (words[z] == "point")
        {
            for (int h = z + 1; h <= spaces; h++)
            {
                if (words[h] == "times" || words[h] == "multiplied")
                {
                    result = f_number1 * f_number2;
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                }
            }
        }
        // Check for floating point division
        if (words[z] == "point")
        {
            for (int i = z + 1; i <= spaces; i++)
            {
                if (words[i] == "divided")
                {
                    result = f_number1 / f_number2;
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                }
            }
        }
        // Check for floating point exponenciation
        if (words[z] == "point")
        {
            for (int j = z + 1; j <= spaces; j++)
            {
                if (words[j] == "squared" || words[j] == "second")
                {
                    result = pow(f_number1, 2);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                }
                if (words[j] == "cubed" || words[j] == "third")
                {
                    result = pow(f_number1, 3);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                }
            }
        }
        // Check for floating point roots
        if (words[z] == "point")
        {
            for (int k = z + 1; k <= spaces; k++)
            {
                if (words[k] == "square" && words[k + 1] == "root")
                {
                    pow(f_number1, 1/2);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                }
                if (words[k] == "cubed" || words[k] == "third")
                {
                    pow(f_number1, 1/3);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                }
                if (words[k] == "fourth")
                {
                    pow(f_number2, 1/4);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                }
            }
        }
        // Check for sine calculation
        if (words[z] == "sine")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    // Convert degrees to radians
                    radians = _Math::Degrees2Radians(number1);
                    result = sin(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = sin(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for cosine calculation
        if (words[z] == "cosine")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = cos(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = cos(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for tangent calculation
        if (words[z] == "tangent")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = tan(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = tan(number1);
            }
        }
        // Check for the secant calculation
        if (words[z] == "secant")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = 1 / cos(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = 1 / cos(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for the secant calculation
        if (words[z] == "cosecant")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = 1 / sin(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = 1 / sin(radians);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for the secant calculation
        if (words[z] == "cotangent")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = 1 / tan(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = 1 / tan(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for inverse sine
        if (words[z] == "arcsine" || (words[z] == "inverse" && words[z + 1] == "sine"))
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = asin(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = asin(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for inverse cosine
        if (words[z] == "arccosine" || (words[z] == "inverse" && words[z + 1] == "cosine"))
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = Degrees2Radians(number1);
                    result = acos(radians);
                    Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = acos(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for inverse tangent
        if (words[z] == "arctangent" || (words[z] == "inverse" && words[z + 1] == "tangent"))
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = atan(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = atan(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for inverse cosecant
        if (words[z] == "arccosecant" || (words[z] == "inverse" && words[z + 1] == "cosecant"))
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = 1 / asin(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = 1 / asin(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for inverse secant
        if (words[z] == "arcsecant" || (words[z] == "inverse" && words[z + 1] == "secant"))
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = 1 / acos(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = 1 / acos(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for inverse cotangent
        if (words[z] == "arccotangent" || (words[z] == "inverse") && words[z + 1] == "cotangent")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = 1 / atan(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = 1 / atan(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for hyperbolic sine
        if (words[z] == "hyperbolic" && words[z + 1] == "sine")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = sinh(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = sinh(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for hyperbolic cosine
        if (words[z] == "hyperbolic" && words[z + 1] == "cosine")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = cosh(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = cosh(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for hyperbolic tangent
        if (words[z] == "hyperbolic" && words[z + 1] == "tangent")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = tanh(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for hyperbolic cosecant
        if (words[z] == "hyperbolic" && words[z + 1] == "cosecant")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = 1 / sinh(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = 1 / sinh(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for hyperbolic cotangent
        if (words[z] == "hyperbolic" && words[z + 1] == "secant")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = 1 / cosh(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = 1 / cosh(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for area hyperbolic of sine
        if (words[z] == "hyperbolic" && words[z + 1] == "cotangent")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = 1 / tanh(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = 1 / tanh(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for area hyperbolic of cosine
        if (words[z] == "area" && words[z + 1] == "hyperbolic" && words[z + 2] == "sine")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = asinh(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = asinh(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }

        }
        // Check for area hyperbolic of tangent
        if (words[z] == "area" && words[z + 1] == "hyperbolic" && words[z + 2] == "cosine")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = acosh(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = acosh(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for area hyperbolic of cosecant
        if (words[z] == "area" && words[z + 1] == "hyperbolic" && words[z + 2] == "tangent")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = atanh(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = atanh(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for area hyperbolic of secant
        if (words[z] == "area" && words[z + 1] == "hyperbolic" && words[z + 2] == "cosecant")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = 1 / asinh(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = 1 / asinh(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
        // Check for area hyperbolic of cotangent
        if (words[z] == "area" && words[z + 1] == "hyperbolic" && words[z + 2] == "secant")
        {
            double radians;
            bool degrees = false;

            // Convert to radians if degrees is present
            for (int l = z + 1; l <= spaces; l++)
            {
                if (words[l] == "degrees")
                {
                    radians = _Math::Degrees2Radians(number1);
                    result = 1 / acosh(radians);
                    _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
                    degrees = true;
                }
            }

            if (!degrees)
            {
                result = 1 / acosh(number1);
                _Math::Math2MySQL(table_name, transcription, number1, number2, operation, result);
            }
        }
    }
}

// The following function will parse an arithmetic operation from computer vision
//  Arithmetic Operations           Possible Visual Input                                                                       Function Input
//  1.  Exponent of x^y           | 10^6, 10 superscript 6                                                                    | pow(10, 6)
//  2.  Exponent squared of x     | 6^2, 6 superscript 4                                                                      | pow(6, 2)
//  3.  Absolute Value of x       | | -2 |                                                                                    | abs(-2)
//  4.  mod of a number           | 10 % 2                                                                                    | 10 % 2
//  5.  Square root of x          | root sign 4                                                                               | sqrt(4)
//  6.  nth root of x             | third root of ten                                                                         | pow(value, 1/rootvalue))
//  7.  Factorial of x!           | Factorial of onehundered                                                                  | for (int i = 1; i <= 100; i++) factorial *= i;
//  8.  Division of x/y           | ten divided by two                                                                        | 10 / 2
//  9.  Multiplication of x * y   | ten multiplied by two, ten times two                                                      | 10 * 2
//  10. Subtraction of x - y      | twenty minus two, twenty subtracted by two                                                | 20 - 2
//  11. Addition of x + y         | thirtyfive plus ten, thirtyfive added to ten                                              | 35 + 10
//  12. Log base x of y           | log base ten of twenty                                                                    | log10(twenty)
//  13. Natural log of number     | the natural log of ten                                                                    | double log(double x)
//  14. Floating point addition   | one point two three plus three point one four, one dollar twenty six cents + five dollars | 1.26 + 5.00
//  15. Floating point subtraction| one point two three minus three point one four                                            | 1.23 - 3.14
//  16. Floating point multiply   | one point two three times three point one four                                            | 1.23 * 3.14
//  17. Floating point divide     | one point two three divided by three point one four                                       | 1.23 / 3.14
//  18. Floating point exponent   | two point three six to the third power                                                    | pow(2.36, 3)
//  19. Floating point roots      | square root of three point one four, fourth root of three point one four                  | pow(3.14, 1/4)
//  15. sine of x                 | sine of thirty degrees, sine of pi over two                                               | sin(30), sin(pi / 2)
//  16. cosine of x               | cosine of thirty degrees, cosine of pi over two                                           | cos(30), cos(pi / 2)
//  17. tangent of x              | tangent of thirty degrees, tangent of pi over two                                         | tan(30), tan(pi / 2)
//  18. secant of x               | secant of thirty degrees, secant of pi over two                                           | sec(30), sec(pi / 2)
//  19. cosecant of x             | cosecant of thirty degrees, cosecant of pi over two                                       | csc(30), csc(pi / 2)
//  20. cotangent of x            | cotangent of thirty degrees, cotangent of pi over two                                     | cot(30), cot(pi / 2)
void _Math::ArithmeticParseVision(string vision)
{
    // 1.5. Get methods of speaking an equation

    int number1;
    int number2;
    double f_number1;
    double f_number2;
    bool floatingP = false;
    bool space;
    string operation;
    string num_name1;
    string num_name2;

    // Check if the numbers are floating point
    for (int y = 0; y <= vision.length(); y++)
    {
        if (vision[y] == '.')
        {
            floatingP = true;
        }
    }

    // Search the string for numbers
    for (int x = 0; x <= vision.length(); x++)
    {
        // Search the string for numbers
        if (isdigit(vision[x]))
        {
            num_name1 += vision[x];
        }
        else if (isdigit(vision[x]) && space)
        {
            num_name2 += vision[x];
        }
        else if (isspace(vision[x]))
        {
            space = true;

            if (floatingP)
            {
                f_number1 = stoi(num_name1, nullptr);
                num_name1 = "";
            }
            else
            {
                number1 = stoi(num_name1, nullptr);
                num_name1 = "";
            }
        }
        else if (x == vision.length())
        {
            if (floatingP)
            {
                f_number2 = stoi(num_name2, nullptr);
                num_name2 = "";
            }
            else
            {
                number2 = stoi(num_name2, nullptr);
                num_name2 = "";
            }
        }
    }
}

string _Math::ManualMathPrompt()
{
    string input[3];
    string model = "llama3";
    string prompt = "Solve the following equation: ";

    cout << "ManualMathPrompt" << endl;
    cout << "Enter a semi-colon on a single line when done (';') at a maximum of three lines!" << endl;
    cout << endl;

    for (int x = 0; x < 3; x++)
    {
        cout << "Line " << x + 1 << ": ";
        getline(cin, input[x]);

        if (!input[x].empty())
        {
            prompt += "Line " + x + 1;
            prompt += ": ";
            prompt += input[x];
        }
    }

    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    return response;
}

// This function will solve Algebra problems
void _Math::AlgebraParse(string recognition)
{

}

// The following function will show the user Algebra theorems
void _Math::AlgebraTheorems(string recognition)
{

}

// This function will solve Geometry problems
void _Math::GeometryParse(string recognition)
{

}

// This function will show the user geometry theorems
void _Math::GeometryTheorems(string recognition)
{

}

// This function will solve algebra 2 problems
void _Math::Algebra2Parse(string recognition)
{

}

// This function will show the user Algebra 2 theorems
void _Math::Algebra2Theorems(string recognition)
{

}

// This function will solve trigonometry problems from sound input
void _Math::TrigonometryParse(string recognition)
{

}

// This function will display trigonometry theorems
void _Math::TrigonometryTheorems(string recognition)
{

}

// This function will solve Calculus problems
void _Math::CalculusParse(string recognition)
{

}

// This function will show the user Calculus theorems
void _Math::CalculusTheorems(string recognition)
{

}

// This function will be used to display statistics formulas
void _Math::StatisticsParse(string recognition)
{

}

// This function will evaluate unit conversions
// 	Unit conversion _Reference is in: Units.txt
void _Math::UnitConversions(string transcription)
{

}

double _Math::dotProduct(const double* a, const double* b, int size)
{
    double result = 0.0;
    for (int i = 0; i < size; ++i)
    {
        result += a[i] * b[i];
    }
    return result;
}

double _Math::magnitude(const double* vec, int size)
{
    double sumOfSquares = 0.0;
    for (int i = 0; i < size; ++i)
    {
        sumOfSquares += vec[i] * vec[i];
    }
    return std::sqrt(sumOfSquares);
}

double _Math::cosineSimilarity(const double* a, const double* b, int size)
{
    double dotProd = _Math::dotProduct(a, b, size);
    double magA = _Math::magnitude(a, size);
    double magB = _Math::magnitude(b, size);

    if (magA == 0.0 || magB == 0.0)
    {
        return 0.0; // Handle zero vectors
    }

    return dotProd / (magA * magB);
}

double _Math::Degrees2Radians(int degrees)
{
    double equation = 3.14 / 180;
    return degrees * equation;
}

double _Math::Radians2Degrees(double radians)
{
    return (radians * 180) / 3.14;
}

bool _Math::isExponent(string operation)
{
    for (int i = 0; i <= operation.length(); i++)
    {
        if (operation[i] == '^')
        {
            return true;
        }
    }

    return false;
}

// Fix this
// This function checks if the text as a number has a phonetic name to an integer
int _Math::NumberName(string number)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    string table_name = "numbers";
    string sql1;
    int integer_number;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);
    result = mysql_use_result(conn);

    sql1 = "SELECT * FROM ";
    sql1 += table_name;

    mysql_query(conn, sql1.c_str());

    while (row = mysql_fetch_row(result))
    {
        // Compare the phonetic name to the number
        // This statement should work for phonetic word spelling
        if (row[0] == number)
        {
            // Convert the text to an integer and return the value
            integer_number = stoi(row[1]);
            return integer_number;
        }
    }

    // The function did not find the number in the database
    return NULL;
}

// This function will save all math operations toa MySQL database for a log
void _Math::Math2MySQL(string table, string data, double number1, double number2, string operation, double result)
{
    MYSQL* conn;
    MYSQL_RES* result1;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string sql1;
    string mysql_database = "Math";
    string table_name = table;

    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);
    ostringstream oss;
    oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
    string current_date = oss.str();

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "INSERT INTO `";
        sql1 += table_name.c_str();
        sql1 += "`(current_date, data, number1, number2, operation, result) VALUES(\"";
        sql1 += current_date.c_str();
        sql1 += "\", \"";
        sql1 += data.c_str();
        sql1 += "\", \"";
        sql1 += to_string(number1);
        sql1 += "\", \"";
        sql1 += to_string(number2);
        sql1 += "\", \"";
        sql1 += operation.c_str();
        sql1 += "\", \"";
        sql1 += to_string(result);
        sql1 += "\");";
    }
    else
    {

    }

    mysql_query(conn, sql1.c_str());
}