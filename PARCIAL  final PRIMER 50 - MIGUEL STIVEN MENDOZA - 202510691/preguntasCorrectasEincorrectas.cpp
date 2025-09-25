#include<iostream>
using namespace std;

void isCorrect(char userAnswer, char correctAnswer) {
    if (userAnswer == correctAnswer) {
        cout << "Respuesta correcta" << endl;
    } else {
        cout << "Respuesta incorrecta" << endl;
    }
}
int questionScore(bool correct) {
    return correct ? 10 : 0;
    
}
int playQuiz() {
    char userAnswer, correctAnswer;
    cout << "pregunta 1";
    cin >> userAnswer;
    correctAnswer = 'a';

    cout << "pregunta 2";
    cin >> userAnswer;
    correctAnswer = 'b'; 

    cout << "pregunta 3";       
    cin >> userAnswer;
    correctAnswer = 'c'; 

    isCorrect(userAnswer, correctAnswer);
    bool correct = (userAnswer == correctAnswer);
    cout << "Puntaje obtenido: " << questionScore(correct) << endl;

    return 0;
}
main () {
    playQuiz();
    return 0;
}