#include <iostream>

int main(int argc, char **argv)
{
    char message[] {"Hello"};
    int sizeMessage = std::size(message);

    char vowels[5] {'a', 'e', 'i', 'o', 'u'};
    int sizeVowels = std::size(vowels);
    size_t vowel_count {0};
    std::cout << "Message size : " << sizeMessage << std::endl;
    for (size_t i {}; i < sizeMessage; i++)
    {
        for (size_t j {}; j < sizeVowels; j++)
        {
            if (message[i] == vowels[j])
            {
                vowel_count++;
            }
        }
    }
    std::cout << "The string : " << message << " has " << vowel_count << " vowels";
    std::cout << std::endl;
    return 0;
}
