#include <iostream>

int main(int argc, char **argv)
{
    //char message[] {"John was 8 years old at the time."};
    char message[] {"The sky is blue my friend."};
    int vowel_count {};
    int consonant_count {};

    for (auto chars : message)
    {
        if (std::isalpha(chars))
        {
            chars = std::tolower(chars);
            if (chars == 'a' || chars == 'e' || chars == 'i' || chars == 'o' || chars == 'u')
            {
                vowel_count++;
            }
            else
            {
                consonant_count++;
            }
        }
    }

    std::cout << "The string contains " << vowel_count << " vowels and " << consonant_count << " consonants";

    std::cout << std::endl;
    
    return 0;
}
