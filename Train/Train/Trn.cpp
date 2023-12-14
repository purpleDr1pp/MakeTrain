#include <iostream>
#include <deque>
void MakeTrain() {
	std::deque<int> vagons;
	std::string command;
	size_t W, N;
	while (std::cin >> command) {
		if (command == "+left") {
			std::cin >> W;
			vagons.push_front(W);
		}
		else if (command == "+right") {
			std::cin >> W;
			vagons.push_back(W);
		}
		else if (command == "-left") {
			std::cin >> N;
			N = std::min(N, vagons.size());
			vagons.erase(vagons.begin(), vagons.begin() + N);
		}
		else if (command == "-right") {
			std::cin >> N;
			N = std::min(N, vagons.size());
			vagons.erase(vagons.end() - N, vagons.end()); 
		}
	}
	for (auto iter : vagons) {
		std::cout << iter << " ";
	}
	std::cout << std::endl;
}
int main() {
	MakeTrain();
}