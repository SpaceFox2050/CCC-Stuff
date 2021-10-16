#include <iostream>
using namespace std;

int main(){
    string word, revise;
    cin >> word;
    char vowels [] = {'a', 'e', 'i', 'o', 'u'};
    //loop through word to check every char
    for(int index = 0; index < word.size(); index++){
        revise.push_back(word[index]);
        bool vowel = false;
        //loop through vowels array to check if the char is a vowel
        for(int x = 0; x < 5; x++){
            if(word[index] == vowels[x]){
                vowel = true;
                break;
            }
        }
        //if char is a vowel, continue onto next iteration
        if(vowel)
            continue;
        int ivowel = 1;
        bool found = false;
        //no consonant is more than 10 ascii values away from a vowel
        for(int o = 0; o < 10; o++){
            char plus = word[index]+ivowel;
            char back = word[index]-ivowel;
            //loop through array to see if word[index]+-ivowel is a vowel
            for(int x = 0; x < 5; x++){
                if(plus == vowels[x]){
                    revise.push_back(plus);
                    found = true;
                    break;
                }else if(back == vowels[x]){
                    revise.push_back(back);
                    found = true;
                    break;
                }
            }
            //if word[index]+-ivowel is a vowel, break from loop
            if(found)
                break;
            ivowel++;
        }
        if(word[index] == 'z'){
            revise.push_back('z');
            continue;
        }
        ivowel = 1;
        while(true){
            found = true;
            //check if next char is a vowel
            char next = word[index]+ivowel;
            for(int x = 0; x < 5; x++){
                if(next == vowels[x]){
                    found = false;
                    break;
                }
            }
            //if next char is not a vowel, add word[index]+=ivowel to revise and break
            if(found) {
                revise.push_back(next);
                break;
            }
        }
    }
    cout << revise;
    return 0;
}  
