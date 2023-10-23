package calculator;

public class Backend {
	String Type;
	int a;
	int b;
	int z;

	void Add() {
		z = this.a + this.b;

	}

	void Substract() {
		z = this.a - this.b;
	}

	void Multiply() {
		z = this.a * this.b;
	}

	void Divide() {
		z = this.a / this.b;
	}

	void Output() {
		System.out.println("The first no was:" + a);
		System.out.println("The second no was:" + b);

	}
}
