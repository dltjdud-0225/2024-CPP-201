class Person {
	public(string name, int age)
		: name_(name), age_(age) {}

	void ShowPerson() {
		cout << name_ << "의 나이는 " << age_ << "입니다." << endl;
	}

private : 
	string name_;
	int age_;

};
unt main(void) {
	return 0;
}