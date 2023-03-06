#include <iostream>
using namespace std;

#define FIRST_TASK
//#define SECOND_TASK
int main()
{
	setlocale(LC_ALL, "Rus");

#ifdef FIRST_TASK
	int answer1, answer2, answer3, answer4, answer5;
	int answers = 0;
	cout << "\t\tВикторина по лору игры Destiny 2\n" << endl;
	cout << "1 вопрос:\nСуществование - это борьба за существование, \nлюбая сущность - будь то форма жизни или \nфундаментальный аспект природы - должна быть \nпо праву уничтожена более могущественной сущностью, \nесли она не может защитить себя от поражения.\n\nО чем идет речь?" << endl;
	cout << "\n\tВыберите номер ответа" << endl;
	cout << "\t1 - Опрокинутая\n\t2 - Сизигия\n\t3 - Логика Меча\n\t4 - Истинная суть Света\n" << endl;
	cout << "Ответ: "; cin >> answer1;
	if (answer1 == 3)
	{
		cout << "Ответ верный" << endl;
		answers++;
	}
	else if(answer1 == 1)
	{
		cout << "Ответ неверный" << endl;
	}
	else if (answer1 == 2)
	{
		cout << "Ответ неверный" << endl;
	}
	else if (answer1 == 4)
	{
		cout << "Ответ неверный" << endl;
	}
	else
	{
		cout << "Неверный ввод, выбирайте только 1,2,3 или 4" << endl;
		return 1;
	}

	cout << "\n2 вопрос:\nСамой хитрой мы расскажем про катаклизм. \nНапророчим ей... великую утрату. Мы взрастим в ней \nстрах и гордость...\n\nЭто говорил ..." << endl;
	cout << "\n\tВыберите номер ответа" << endl;
	cout << "\t1 - Орикс\n\t2 - Рулк\n\t3 - Юл - Честный червь\n\t4 - Свидетель\n" << endl;
	cout << "Ответ: "; cin >> answer2;
	if (answer2 == 4)
	{
		cout << "Ответ верный" << endl;
		answers++;
	}
	else if (answer2 == 1)
	{
		cout << "Ответ неверный" << endl;
	}
	else if (answer2 == 2)
	{
		cout << "Ответ неверный" << endl;
	}
	else if (answer2 == 3)
	{
		cout << "Ответ неверный" << endl;
	}
	else
	{
		cout << "Неверный ввод, выбирайте только 1,2,3 или 4" << endl;
		return 1;
	}

	cout << "\n3 вопрос:\nСколько лун имела планета Фундамент - газовый \nгигант и родная планета Криллов?\n" << endl;
	cout << "\n\tВыберите номер ответа" << endl;
	cout << "\t1 - 43\n\t2 - 52\n\t3 - 14\n\t4 - ни одной\n" << endl;
	cout << "Ответ: "; cin >> answer3;
	if (answer3 == 2)
	{
		cout << "Ответ верный" << endl;
		answers++;
	}
	else if (answer3 == 1)
	{
		cout << "Ответ неверный" << endl;
	}
	else if (answer3 == 3)
	{
		cout << "Ответ неверный" << endl;
	}
	else if (answer3 == 4)
	{
		cout << "Ответ неверный" << endl;
	}
	else
	{
		cout << "Неверный ввод, выбирайте только 1,2,3 или 4" << endl;
		return 1;
	}

	cout << "\n4 вопрос:\nВеликий катаклизм, божественная волна... \nЭто ...?" << endl;
	cout << "\n\tВыберите номер ответа" << endl;
	cout << "\t1 - Конец Света\n\t2 - Сизигия\n\t3 - Приход Тьмы\n\t4 - Игра Садовника и Жнеца\n" << endl;
	cout << "Ответ: "; cin >> answer4;
	if (answer4 == 2)
	{
		cout << "Ответ верный" << endl;
		answers++;
	}
	else if (answer4 == 1)
	{
		cout << "Ответ неверный" << endl;
	}
	else if (answer4 == 3)
	{
		cout << "Ответ неверный" << endl;
	}
	else if (answer4 == 4)
	{
		cout << "Ответ неверный" << endl;
	}
	else
	{
		cout << "Неверный ввод, выбирайте только 1,2,3 или 4" << endl;
		return 1;
	}

	cout << "\n5 вопрос:\nКакую планету или спутник трансформировали \nвексы в первую очередь в Солнечной системе?" << endl;
	cout << "\n\tВыберите номер ответа" << endl;
	cout << "\t1 - Венера\n\t2 - Несс\n\t3 - Меркурий\n\t4 - Марс" << endl;
	cout << "Ответ: "; cin >> answer5;
	if (answer5 == 3)
	{
		cout << "Ответ верный" << endl;
		answers++;
	}
	else if (answer5 == 1)
	{
		cout << "Ответ неверный" << endl;
	}
	else if (answer5 == 2)
	{
		cout << "Ответ неверный" << endl;
	}
	else if (answer5 == 4)
	{
		cout << "Ответ неверный" << endl;
	}
	else
	{
		cout << "Неверный ввод, выбирайте только 1,2,3 или 4" << endl;
		return 1;
	}

	cout << "\n\t\tВикторина завершена" << endl;
	cout << "Верных ответов: " << answers << endl;
#endif // FIRST_TASK

#ifdef SECOND_TASK
	int operation = 0;
	double a, b = 0;
	double solution = 0;
	cout << "\t\tКалькулятор" << endl;
	cout << "Выберите процедуру:\n\t1 - Сложение\n\t2 - Вычитание\n\t3 - Умножение\n\t4 - Деление\n"; cin >> operation;
	if (operation == 1)
	{
		cout << "Сложение. Введите числа:" << endl;
		cin >> a;
		cin >> b;
		double solution = a + b;
		cout << "Ответ: " << a << " + " << b << " = " << solution << endl;
	}
	else if (operation == 2)
	{
		cout << "Вычитание. Введите числа:" << endl;
		cin >> a;
		cin >> b;
		double solution = a - b;
		cout << "Ответ: " << a << " - " << b << " = " << solution << endl;
	}
	else if (operation == 3)
	{
		cout << "Умножение. Введите числа:" << endl;
		cin >> a;
		cin >> b;
		double solution = a * b;
		cout << "Ответ: " << a << " * " << b << " = " << solution << endl;
	}
	else if (operation == 4)
	{
		cout << "Деление. Введите числа:" << endl;
		cin >> a;
		cin >> b;
		double solution = a / b;
		cout << "Ответ: " << a << " / " << b << " = " << solution << endl;
	}
#endif // SECOND_TASK
}