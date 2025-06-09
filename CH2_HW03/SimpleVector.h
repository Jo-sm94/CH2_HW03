#pragma once
#ifndef SIMPLEVECTOR_H_
#define SIMPLEVECTOR_H_
#include <iostream>
#include <string>

using namespace std;

	
template <typename T>
class SimpleVector {
private:
	T* data;
	int currentSize;
	int currentCapacity;

public:
	SimpleVector() {
		cout << "기본 생성자 실행" << endl;
		data = new T[10];
		currentSize = 0;
		currentCapacity = 10;
	};

	SimpleVector(int capacity) {
		cout << "동적배열 생성자 실행" << endl;
		data = new T[capacity];
		currentSize = 0;
		currentCapacity = capacity;
	};

	SimpleVector(const SimpleVector& other) {
		cout << "복사 생성자 실행" << endl;
		currentSize = other.currentSize;
		currentCapacity = other.currentCapacity;

		data = new T[currentCapacity];
		for (int i = 0; i < currentSize; i++) {
			data[i] = other.data[i];
		}
		
	};

	~SimpleVector() {
		delete[] data;
	};

	void resize(int newCapacity) {
		if (currentCapacity < newCapacity) {
			cout << "배열의 크기 재할당 : " << currentCapacity << " -> " << newCapacity << endl;
			currentCapacity = newCapacity;

			T* newData = new T[currentCapacity];
			for (int i = 0; i < currentSize; i++) {
				newData[i] = data[i];
			}
			delete[] data;
			data = newData;
		}
		
	};

	void push_back(const T& value) {
		if (currentSize < currentCapacity) {
			data[currentSize] = value;
			currentSize++;
		}
		else {
			cout << "원소의 개수가 넘쳐 배열의 크기를 5 증가!" << endl;
			currentCapacity += 5;

			T* newData = new T[currentCapacity];
			for (int i = 0; i < currentSize; i++) {
				newData[i] = data[i];
			}

			newData[currentSize] = value;
			currentSize++;
			delete[] data;
			data = newData;
		}
		
	};

	void pop_back() {
		if (currentSize > 0) {
			currentSize--;
		}
		
	};

	int size() {

		return currentSize;
	};

	int capacity() {
		return currentCapacity;
	};

	void sortData() {
		cout << "sordData : ";
		for (int i = 0; i < currentSize - 1; i++) {
			for (int j = 0; j < currentSize - 1 - i; j++) {
				if (data[j] > data[j + 1]) {
					T tmp = data[j];
					data[j] = data[j + 1];
					data[j + 1] = tmp;
				}
			}
		}
		for (int i = 0; i < currentSize; i++) {

			cout << data[i] << " ";
		}
		cout << endl;
	}

	void getData() {

		for (int i = 0; i < currentSize; i++) {

			cout << data[i] << " ";
		}
		cout << endl;
	}

};

#endif // !SIMPLEVECTOR_H_
