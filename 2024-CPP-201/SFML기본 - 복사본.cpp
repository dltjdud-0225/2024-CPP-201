class Person {
	public(string name, int age)
		: name_(name), age_(age) {}

	void ShowPerson() {
		cout << name_ << "�� ���̴� " << age_ << "�Դϴ�." << endl;
	}

private : 
	string name_;
	int age_;

};
unt main(void) {
	return 0;
}