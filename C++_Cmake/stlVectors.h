
#pragma once
#ifndef STLVECTOR_HPP
#define STLVECTOR_HPP

#include <cassert>
#include <iostream>

class VectorStl
{
public:
	VectorStl() : pBuf(new int[1]), ctr(1), sizes(0) { assert(invariant()); }
	~VectorStl() { assert(invariant()); delete[] pBuf; }

	unsigned long size() const { assert(invariant()); return sizes; }
	int& operator[](unsigned long i) { assert(invariant()); return pBuf[i]; }

	void push_back(int n)
	{
		assert(invariant());
		if (sizes == ctr)
		{
			resize_internal();
		}

		pBuf[sizes++] = n;
		assert(invariant());
	}

private:
	int* pBuf;
	unsigned long ctr;
	unsigned long sizes;

	bool invariant() const
	{
		return sizes <= ctr && pBuf != nullptr;
	}

	void resize_internal()
	{
		const unsigned long nc = ctr * 2;
		int* pNewBuf = new int[nc];
		for (unsigned long i = 0; i < ctr; ++i)
		{
			pNewBuf[i] = pBuf[i];
		}
		delete[] pBuf;
		pBuf = pNewBuf;
		ctr = nc;
	}
};


void stlVector();

#endif // !STLVECTOR_HPP
