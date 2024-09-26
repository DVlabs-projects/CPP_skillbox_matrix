#include <src/matrix.h>
#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    math::Matrix m(3, 3);
    m(0, 0) = 1.;
    m(1, 1) = 1.;
    
    math::Matrix m1(3, 3);
    m1(0, 0) = 5.;
    m1(1, 1) = 5.;

    std::cout << "Матрица m:" << std::endl;
    std::cout << m;

    std::cout << "Матрица m1:" << std::endl;
    std::cout << m1;

    math::Matrix m2 = m + m1;
    std::cout << "Сумма матриц m и m1:" << std::endl;
    std::cout << m2;

    math::Matrix m3 = m - m1;
    std::cout << "Разность матриц m и m1:" << std::endl;
    std::cout << m3;

    math::Matrix m4 = m * m1;
    std::cout << "Произведение матриц m и m1:" << std::endl;
    std::cout << m4;

    // Примеры использования операторов присваивания
    m += m1;
    std::cout << "После выполнения m += m1, матрица m:" << std::endl;
    std::cout << m;

    m4 -= m1;
    std::cout << "После выполнения m4 -= m1, матрица m4:" << std::endl;
    std::cout << m4;

    m *= 3.;
    std::cout << "После выполнения m *= 3., матрица m:" << std::endl;
    std::cout << m;

    math::Matrix M1;

    std::cout << "Введите размеры матрицы" << std::endl;
    std::cin >> M1;

    math::Matrix M2(M1);
    for (int i = 0; i < M2.rows(); ++i)
        for (int j = 0; j < M2.cols(); ++j)
            M2(i, j) += 3.;

    std::cout << "Матрица M1: \n"
              << M1 << "\n Матрица M2: \n"
              << M2 << std::endl;

    M1 += M2;
    std::cout << "Добавить M2 к M1: \n"
              << M1 << std::endl;

    M1 *= 5.;
    std::cout << "Умножить M1 на 5: \n"
              << M1 << std::endl;

    return 0;
}