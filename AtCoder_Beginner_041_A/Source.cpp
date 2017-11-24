/*
問題文
文字列 s と整数 i (1≦i≦|s|) が与えられます。 s の i 文字目を出力してください。
なお、|s| は文字列 s の長さを表します。
*/

#include<iostream>
#include<string>

int main() {
	std::string str;
	int i;

	std::cin >>str>> i;

	std::cout << str[i-1] << std::endl;

	return 0;
}