#pragma once

double mnozenie(double a, double b)
{
	return a * b;
}

double dzielenie(double a, double b)
{
	if(b!=0)
	{
		double num = a / b;
		return round(num * 1000000) / 1000000;
	}
	else
	{
		std::cerr << "Dzielenie przez zero!" << std::endl;
		return NULL;
	}
}

double dodawanie(double a, double b)
{
	return a + b;
}

double odejmowanie(double a, double b)
{
	return a - b;
}

double potega(double a, double b)
{
	return std::pow(a, b);
}

double pierwiastek(double a)
{
	return std::sqrt(a);
}

