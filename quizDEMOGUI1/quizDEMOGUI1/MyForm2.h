#pragma once

#include "Quiz.h"
#include "MyForm3.h"

namespace quizDEMOGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	/// 
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		Quiz* lvl2Quiz = new Quiz("dragonTnFquestions.txt");
		int lvl2Count = 1;
	private: System::Windows::Forms::Timer^ timer1;

		   String^ lvl2Answer;

	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblQuestion;
	private: System::Windows::Forms::Button^ btnTrue;
	private: System::Windows::Forms::Button^ btnFalse;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblQuestion = (gcnew System::Windows::Forms::Label());
			this->btnTrue = (gcnew System::Windows::Forms::Button());
			this->btnFalse = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(923, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 29);
			this->label2->TabIndex = 6;
			this->label2->Text = L"0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblQuestion
			// 
			this->lblQuestion->AutoSize = true;
			this->lblQuestion->BackColor = System::Drawing::Color::Transparent;
			this->lblQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuestion->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblQuestion->Location = System::Drawing::Point(32, 230);
			this->lblQuestion->Name = L"lblQuestion";
			this->lblQuestion->Size = System::Drawing::Size(141, 51);
			this->lblQuestion->TabIndex = 7;
			this->lblQuestion->Text = L"Question";
			this->lblQuestion->Click += gcnew System::EventHandler(this, &MyForm2::lblQuestion_Click);
			// 
			// btnTrue
			// 
			this->btnTrue->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTrue.BackgroundImage")));
			this->btnTrue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnTrue->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTrue->Location = System::Drawing::Point(279, 549);
			this->btnTrue->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnTrue->Name = L"btnTrue";
			this->btnTrue->Size = System::Drawing::Size(199, 68);
			this->btnTrue->TabIndex = 8;
			this->btnTrue->UseVisualStyleBackColor = true;
			this->btnTrue->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// btnFalse
			// 
			this->btnFalse->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFalse.BackgroundImage")));
			this->btnFalse->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnFalse->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnFalse->Location = System::Drawing::Point(676, 549);
			this->btnFalse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnFalse->Name = L"btnFalse";
			this->btnFalse->Size = System::Drawing::Size(211, 70);
			this->btnFalse->TabIndex = 9;
			this->btnFalse->UseVisualStyleBackColor = true;
			this->btnFalse->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 40000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm2::timer1_Tick);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1048, 656);
			this->Controls->Add(this->btnFalse);
			this->Controls->Add(this->btnTrue);
			this->Controls->Add(this->lblQuestion);
			this->Controls->Add(this->label2);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = true;

		std::vector<Question> questions = lvl2Quiz->getQuestions();

		lvl2Quiz->shuffleQuestions(questions);

		Question lvl2Question = *(questions.begin());

		std::string str = "Question 1 Of 8\n\n" + (lvl2Question.question);
		String^ sysStr = msclr::interop::marshal_as<String^>(str);

		this->lblQuestion->Text = sysStr;

		this->label2->Text = lvl2Quiz->getScore().ToString();

		lvl2Answer = msclr::interop::marshal_as<String^>(lvl2Question.answer);

		questions.erase(questions.begin());
		lvl2Quiz->setQuestions(questions);

		lvl2Count++;
	}
	
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lvl2Answer == msclr::interop::marshal_as<String^>("True")) {
			lvl2Quiz->incrementScore();
			if (lvl2Count == 9) {
				MessageBox::Show("You are CORRECT! Play Level 3. NOTE: Complete Level 3 within 30 seconds", "Response");
				delete lvl2Quiz;
				timer1->Stop(); // Stop the timer


				this->Hide();
				MyForm3^ lvl3 = gcnew MyForm3();
				lvl3->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("You are CORRECT! Try Question " + msclr::interop::marshal_as<String^>(std::to_string(lvl2Count)), "Response");
			}
		}
		else {
			if (lvl2Count == 9) {
				MessageBox::Show("You are INCORRECT! The answer was FALSE! Play Level 3. NOTE: Complete Level 3 within 30 seconds", "Response");
				delete lvl2Quiz;
				timer1->Stop(); // Stop the timer
				this->Hide();
				MyForm3^ lvl3 = gcnew MyForm3();
				lvl3->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("You are INCORRECT! The answer was FALSE! Try Question " + msclr::interop::marshal_as<String^>(std::to_string(lvl2Count)), "Response");
			}
		}

		std::vector<Question> questions = lvl2Quiz->getQuestions();

		lvl2Quiz->shuffleQuestions(questions);

		Question lvl2Question = *(questions.begin());

		std::string str = "Question " + std::to_string(lvl2Count) + " Of 8\n\n" + (lvl2Question.question);
		String^ sysStr = msclr::interop::marshal_as<String^>(str);

		this->lblQuestion->Text = sysStr;

		this->label2->Text = lvl2Quiz->getScore().ToString();

		lvl2Answer = msclr::interop::marshal_as<String^>(lvl2Question.answer);

		questions.erase(questions.begin());
		lvl2Quiz->setQuestions(questions);

		lvl2Count++;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lvl2Answer == msclr::interop::marshal_as<String^>("False")) {
			lvl2Quiz->incrementScore();
			if (lvl2Count == 9) {
				MessageBox::Show("You are CORRECT! Play Level 3. NOTE: Complete Level 3 within 30 seconds", "Response");
				delete lvl2Quiz;
				timer1->Stop(); // Stop the timer
				this->Hide();
				MyForm3^ lvl3 = gcnew MyForm3();
				lvl3->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("You are CORRECT! Try Question " + msclr::interop::marshal_as<String^>(std::to_string(lvl2Count)), "Response");
			}
		}
		else {
			if (lvl2Count == 9) {
				MessageBox::Show("You are INCORRECT! The answer was TRUE! Play Level 3. NOTE: Complete Level 3 within 30 seconds", "Response");
				delete lvl2Quiz;
				timer1->Stop(); // Stop the timer
				this->Hide();
				MyForm3^ lvl3 = gcnew MyForm3();
				lvl3->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("You are INCORRECT! The answer was TRUE! Try Question " + msclr::interop::marshal_as<String^>(std::to_string(lvl2Count)), "Response");
			}
		}

		std::vector<Question> questions = lvl2Quiz->getQuestions();

		lvl2Quiz->shuffleQuestions(questions);

		Question lvl2Question = *(questions.begin());

		std::string str = "Question " + std::to_string(lvl2Count) + " Of 8\n\n" + (lvl2Question.question);
		String^ sysStr = msclr::interop::marshal_as<String^>(str);

		this->lblQuestion->Text = sysStr;

		this->label2->Text = lvl2Quiz->getScore().ToString();

		lvl2Answer = msclr::interop::marshal_as<String^>(lvl2Question.answer);

		questions.erase(questions.begin());
		lvl2Quiz->setQuestions(questions);

		lvl2Count++;
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	timer1->Stop(); // Stop the timer
	MessageBox::Show("Your Time has RUN OUT,  NOTE: Complete Level 3 within 30 seconds", "Response", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	this->Hide();
	MyForm3^ lvl3 = gcnew MyForm3();
	lvl3->ShowDialog();
	this->Close();
}
private: System::Void lblQuestion_Click(System::Object^ sender, System::EventArgs^ e) { 
}
};
}
