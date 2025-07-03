#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
    // 2D Array
    //int packages[3][4]; // 12 locations where we can store ints
    int packages[3][4]
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    // Read data from a 2D array
    /*for (size_t i{0}; i < 3; i++)
    {
        for(size_t j{0}; j < 4; j++)
        {
            std::cout << std::setw(2) << packages[i][j] << " ";
        }
        std::cout << std::endl;
    }*/
    /*for (size_t i{0}; i < std::size(packages); i++)
    {
        for(size_t j{0}; j < std::size(packages[i]); j++)
        {
            std::cout << std::setw(2) << packages[i][j] << " ";
        }
        std::cout << std::endl;
    }*/
    // 3D arrays are defined in the same way. We just use three sets of indexes
    // 3 lights per room, 5 rooms per house, 7 houses per block
    // If we remove some elements, compiler will automatically initialize them with zeros
    /*int house_block [7][5][3]
    {
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}
        },
        {
            {1,2,3},{6},{7,8,9},{10,11,12},{13,14,15}
        },
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}
        },
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}
        },
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}
        },
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}
        },
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}
        }
    };

    for (size_t i{0}; i < std::size(house_block); i++)
    {
        for (size_t j{0}; j < std::size(house_block[i]); j++)
        {
            for (size_t k{0}; k < std::size(house_block[i][j]); k++)
            {
                std::cout << house_block[i][j][k] << " ";
            }
            if (j == std::size(house_block[i]) - 1)
            {
                break;
            }
            std::cout << ",";
        }
        std::cout << std::endl;
    }*/

    // Array sizes must always be constant
    /*const size_t num_cols{3};

    // You can omit first dimension but not the second dimension, it won't compile
    int packages2 [][num_cols]
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
        {100,110,120} // Can add as many triplets in packages2 as we want
    };

    std::cout << std::endl;
    std::cout << "Ommiting leftmost dimension for 2d array : " << std::endl;
    for (size_t i {0}; i < std::size(packages2); i++)
    {
        for (size_t j{0}; j < std::size(packages2[i]); j++)
        {
            std::cout << "Item (" << i << "," << j << ") : " << packages2[i][j] << std::endl;
        }
    }*/

    // Same dimension omitting principle works for 3D arrays as well
    int house_block1 [][5][3]
    {
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}
        },
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}
        },
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}
        },
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}
        },
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}
        },
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}
        },
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}
        }
    };

    // Modify data
    house_block1[0][2][1] = 1021;
    for (size_t i {0}; i < std::size(house_block1); i++)
    {
        for (size_t j {0}; j < std::size(house_block1[i]); j++)
        {
            std::cout << "[";
            for (size_t k{0}; k < std::size(house_block1[i][j]); k++)
            {
                std::cout << house_block1[i][j][k] << " ";
            }
            std::cout << "] "; // Separate elements for good visualization
        }
        std::cout << std::endl; // Separate elements for good visualization
    }
    return 0;
}
