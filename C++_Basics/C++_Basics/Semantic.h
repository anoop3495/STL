#pragma once
#ifndef SEMANTIC_HPP 
#define SEMANTIC_HPP

#include <iostream>

class movieSemantic
{
public:
	movieSemantic() : current(++n) { std::cout << "movieSemantic() " << current << std::endl; }
	movieSemantic(const movieSemantic&) : current(++n) { std::cout << "movieSemantic(const movieSemantic&) " << current << std::endl; }
	movieSemantic(movieSemantic&&) : current(++n) { std::cout << "movieSemantic(movieSemantic&&) " << current << std::endl; }
	~movieSemantic() { std::cout << "~movieSemantic() " << current << std::endl; }

	void call() const { std::cout << "movieSemantic::m() " << current << std::endl; }

private:
	static unsigned long n;
	const unsigned long current;
};

movieSemantic run();
void semanticCall();

#endif // !MOVIESEMANTIC_HPP 
