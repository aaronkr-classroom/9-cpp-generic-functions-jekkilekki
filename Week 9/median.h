#pragma once
// NEW median.h
#ifndef GUARD_median_h
#define GUARD_median_h

#include <algorithm> // sort()
#include <stdexcept> // domain_error()
#include <vector>

// vector<double>의 중앙값을 구함.
// 함수를 호출하면 인수로 제공된 벡터를 통째로 복사
template<class T>
T median(vector<T> v) {
	// 과제 점수의 입력 유무를 확인
	typedef typename vector<T>::size_type vec_sz;
	vec_sz size = v.size();

	if (size == 0)
		throw domain_error("median of empty vector!");
	
	// 점수를 정렬
	sort(v.begin(), v.end());

	// 과제 점수의 중앙값을 구함
	vec_sz mid = size / 2;

	return size % 2 == 0 ?
		(v[mid] + v[mid - 1]) / 2 :
		v[mid];

}
#endif