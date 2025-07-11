#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
    // Setw on numbers before you print them
    const size_t ROWS {12};
    const size_t COLS {3};
    /*
    std::cout << "Tabular data visualization with nested for loops : " << std::endl;

    for (size_t row{0}; row < ROWS; row++)
    {
        for (size_t col{0}; col < COLS; col++)
        {
            std::cout << "( row " << std::setw(2) << row << ", col " << std::setw(2) << col << ")";
        }
        std::cout << std::endl;
    }
    */

    /*
    // While loop

    size_t row {0};
    size_t col {0};
    std::cout << "Tabular data visualization with nested while loops : " << std::endl;

    while (row < ROWS)
    {
        while (col < COLS)
        {
            std::cout << "( row " << std::setw(2) << row << ", col " << std::setw(2) << col << ")";
            ++col;
        }
        std::cout << std::endl;
        col = 0; // Reset col to 0 allow printing from col 0. col is in main function local scope now.
        ++row;
    } */

    // Do-while loop
        // While loop

    size_t row {0};
    size_t col {0};
    std::cout << "Tabular data visualization with nested do-while loops : " << std::endl;

    do
    {
        do
        {
            std::cout << "( row " << std::setw(2) << row << ", col " << std::setw(2) << col << ")";
            ++col;
        }
        while (col < COLS);
        std::cout << std::endl;
        col = 0; // Reset col to 0 allow printing from col 0. col is in main function local scope now.
        ++row;
    }
    while (row < ROWS);
    return 0;
}
