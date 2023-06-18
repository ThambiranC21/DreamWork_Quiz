#pragma once

#include "Quiz.h"
#include "MyForm4.h"
namespace quizDEMOGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
		Quiz* lvl3Quiz = new Quiz("kungfupandaMCQquestions.txt");
		int lvl3Count = 1;
		String^ lvl3Answer;
		String^ option1;
		String^ option2;
	private: System::Windows::Forms::Timer^ timer1;
		   String^ option3;
		
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblQuestion;
	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Button^ btnOption1;
	private: System::Windows::Forms::Button^ btnOption2;
	private: System::Windows::Forms::Button^ btnOption3;
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->lblQuestion = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnOption1 = (gcnew System::Windows::Forms::Button());
			this->btnOption2 = (gcnew System::Windows::Forms::Button());
			this->btnOption3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// lblQuestion
			// 
			this->lblQuestion->AutoSize = true;
			this->lblQuestion->BackColor = System::Drawing::Color::Transparent;
			this->lblQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblQuestion->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblQuestion->Location = System::Drawing::Point(76, 124);
			this->lblQuestion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblQuestion->Name = L"lblQuestion";
			this->lblQuestion->Size = System::Drawing::Size(96, 35);
			this->lblQuestion->TabIndex = 8;
			this->lblQuestion->Text = L"Question";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(42, 20);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 24);
			this->label2->TabIndex = 12;
			this->label2->Text = L"0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnOption1
			// 
			this->btnOption1->BackColor = System::Drawing::Color::Transparent;
			this->btnOption1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOption1.BackgroundImage")));
			this->btnOption1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOption1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOption1->ForeColor = System::Drawing::Color::Black;
			this->btnOption1->Location = System::Drawing::Point(32, 384);
			this->btnOption1->Name = L"btnOption1";
			this->btnOption1->Size = System::Drawing::Size(164, 80);
			this->btnOption1->TabIndex = 17;
			this->btnOption1->Text = L"Option 1";
			this->btnOption1->UseVisualStyleBackColor = false;
			this->btnOption1->Click += gcnew System::EventHandler(this, &MyForm3::btnOption1_Click);
			// 
			// btnOption2
			// 
			this->btnOption2->BackColor = System::Drawing::Color::PeachPuff;
			this->btnOption2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOption2.BackgroundImage")));
			this->btnOption2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOption2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOption2->ForeColor = System::Drawing::Color::Black;
			this->btnOption2->Location = System::Drawing::Point(238, 384);
			this->btnOption2->Name = L"btnOption2";
			this->btnOption2->Size = System::Drawing::Size(164, 80);
			this->btnOption2->TabIndex = 18;
			this->btnOption2->Text = L"Option 2";
			this->btnOption2->UseVisualStyleBackColor = false;
			this->btnOption2->Click += gcnew System::EventHandler(this, &MyForm3::btnOption2_Click);
			// 
			// btnOption3
			// 
			this->btnOption3->BackColor = System::Drawing::Color::PeachPuff;
			this->btnOption3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOption3.BackgroundImage")));
			this->btnOption3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOption3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOption3->Location = System::Drawing::Point(453, 384);
			this->btnOption3->Name = L"btnOption3";
			this->btnOption3->Size = System::Drawing::Size(164, 80);
			this->btnOption3->TabIndex = 19;
			this->btnOption3->Text = L"Option 3";
			this->btnOption3->UseVisualStyleBackColor = false;
			this->btnOption3->Click += gcnew System::EventHandler(this, &MyForm3::btnOption3_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 30000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm3::timer1_Tick);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(786, 533);
			this->Controls->Add(this->btnOption3);
			this->Controls->Add(this->btnOption2);
			this->Controls->Add(this->btnOption1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblQuestion);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
     		timer1->Enabled = true;

		std::vector<Question> questions = lvl3Quiz->getQuestions();

		lvl3Quiz->shuffleQuestions(questions);

		Question lvl3Question = *(questions.begin());

		std::string str = "Question 1 Of 8\n\n" + (lvl3Question.question);
		String^ sysStr = msclr::interop::marshal_as<String^>(str);

		this->lblQuestion->Text = sysStr;

		this->label2->Text = lvl3Quiz->getScore().ToString();

		lvl3Answer = msclr::interop::marshal_as<String^>(lvl3Question.answer);

		option1 = msclr::interop::marshal_as<String^>(lvl3Question.option1);
		option2 = msclr::interop::marshal_as<String^>(lvl3Question.option2);
		option3 = msclr::interop::marshal_as<String^>(lvl3Question.option3);

		btnOption1->Text = option1;
		btnOption2->Text = option2;
		btnOption3->Text = option3;

		questions.erase(questions.begin());
		lvl3Quiz->setQuestions(questions);

		lvl3Count++;
	}

	private: System::Void btnOption1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lvl3Answer == option1) {
			lvl3Quiz->incrementScore();
			if (lvl3Count == 9) {
				MessageBox::Show("You are CORRECT! Play Bonus Level", "Response");
				delete lvl3Quiz;
				timer1->Stop(); // Stop the timer
				this->Hide();
				MyForm4^ lvl4 = gcnew MyForm4();
				lvl4->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("You are CORRECT! Try Question " + msclr::interop::marshal_as<String^>(std::to_string(lvl3Count)), "Response");
			}
		}
		else {
			if (lvl3Count == 9) {
				MessageBox::Show("You are INCORRECT! The answer was: " + lvl3Answer + ". Play Bonus Level", "Response");
				delete lvl3Quiz;
				timer1->Stop(); // Stop the timer
				this->Hide();
				MyForm4^ lvl4 = gcnew MyForm4();
				lvl4->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("You are INCORRECT! The answer was: " + lvl3Answer + ". Try Question " + msclr::interop::marshal_as<String^>(std::to_string(lvl3Count)), "Response");
			}
		}

		std::vector<Question> questions = lvl3Quiz->getQuestions();

		lvl3Quiz->shuffleQuestions(questions);

		Question lvl3Question = *(questions.begin());

		std::string str = "Question " + std::to_string(lvl3Count) + " Of 8\n\n" + (lvl3Question.question);
		String^ sysStr = msclr::interop::marshal_as<String^>(str);

		this->lblQuestion->Text = sysStr;

		this->label2->Text = lvl3Quiz->getScore().ToString();

		lvl3Answer = msclr::interop::marshal_as<String^>(lvl3Question.answer);

		option1 = msclr::interop::marshal_as<String^>(lvl3Question.option1);
		option2 = msclr::interop::marshal_as<String^>(lvl3Question.option2);
		option3 = msclr::interop::marshal_as<String^>(lvl3Question.option3);

		btnOption1->Text = option1;
		btnOption2->Text = option2;
		btnOption3->Text = option3;

		questions.erase(questions.begin());
		lvl3Quiz->setQuestions(questions);

		lvl3Count++;
	}

	private: System::Void btnOption2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lvl3Answer == option2) {
			lvl3Quiz->incrementScore();
			if (lvl3Count == 9) {
				MessageBox::Show("You are CORRECT! Play Bonus Level", "Response");
				delete lvl3Quiz;
				timer1->Stop(); // Stop the timer
				this->Hide();
				MyForm4^ lvl4 = gcnew MyForm4();
				lvl4->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("You are CORRECT! Try Question " + msclr::interop::marshal_as<String^>(std::to_string(lvl3Count)), "Response");
			}
		}
		else {
			if (lvl3Count == 9) {
				MessageBox::Show("You are INCORRECT! The answer was: " + lvl3Answer + ". Play Bonus Level", "Response");
				delete lvl3Quiz;
				timer1->Stop(); // Stop the timer
				this->Hide();
				MyForm4^ lvl4 = gcnew MyForm4();
				lvl4->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("You are INCORRECT! The answer was: " + lvl3Answer + ". Try Question " + msclr::interop::marshal_as<String^>(std::to_string(lvl3Count)), "Response");
			}
		}

		std::vector<Question> questions = lvl3Quiz->getQuestions();

		lvl3Quiz->shuffleQuestions(questions);

		Question lvl3Question = *(questions.begin());

		std::string str = "Question " + std::to_string(lvl3Count) + " Of 8\n\n" + (lvl3Question.question);
		String^ sysStr = msclr::interop::marshal_as<String^>(str);

		this->lblQuestion->Text = sysStr;

		this->label2->Text = lvl3Quiz->getScore().ToString();

		lvl3Answer = msclr::interop::marshal_as<String^>(lvl3Question.answer);

		option1 = msclr::interop::marshal_as<String^>(lvl3Question.option1);
		option2 = msclr::interop::marshal_as<String^>(lvl3Question.option2);
		option3 = msclr::interop::marshal_as<String^>(lvl3Question.option3);

		btnOption1->Text = option1;
		btnOption2->Text = option2;
		btnOption3->Text = option3;

		questions.erase(questions.begin());
		lvl3Quiz->setQuestions(questions);

		lvl3Count++;
	}

	private: System::Void btnOption3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lvl3Answer == option3) {
			lvl3Quiz->incrementScore();
			if (lvl3Count == 9) {
				MessageBox::Show("You are CORRECT! Play Bonus Level", "Response");
				delete lvl3Quiz;
				timer1->Stop(); // Stop the timer
				this->Hide();
				MyForm4^ lvl4 = gcnew MyForm4();
				lvl4->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("You are CORRECT! Try Question " + msclr::interop::marshal_as<String^>(std::to_string(lvl3Count)), "Response");
			}
		}
		else {
			if (lvl3Count == 9) {
				MessageBox::Show("You are INCORRECT! The answer was: " + lvl3Answer + ". Play Bonus Level", "Response");
				delete lvl3Quiz;
				timer1->Stop(); // Stop the timer
				this->Hide();
				MyForm4^ lvl4 = gcnew MyForm4();
				lvl4->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("You are INCORRECT! The answer was: " + lvl3Answer + ". Try Question " + msclr::interop::marshal_as<String^>(std::to_string(lvl3Count)), "Response");
			}
		}

		std::vector<Question> questions = lvl3Quiz->getQuestions();

		lvl3Quiz->shuffleQuestions(questions);

		Question lvl3Question = *(questions.begin());

		std::string str = "Question " + std::to_string(lvl3Count) + " Of 8\n\n" + (lvl3Question.question);
		String^ sysStr = msclr::interop::marshal_as<String^>(str);

		this->lblQuestion->Text = sysStr;

		this->label2->Text = lvl3Quiz->getScore().ToString();

		lvl3Answer = msclr::interop::marshal_as<String^>(lvl3Question.answer);

		option1 = msclr::interop::marshal_as<String^>(lvl3Question.option1);
		option2 = msclr::interop::marshal_as<String^>(lvl3Question.option2);
		option3 = msclr::interop::marshal_as<String^>(lvl3Question.option3);

		btnOption1->Text = option1;
		btnOption2->Text = option2;
		btnOption3->Text = option3;

		questions.erase(questions.begin());
		lvl3Quiz->setQuestions(questions);

		lvl3Count++;
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	timer1->Stop(); // Stop the timer
	MessageBox::Show("Your Time has RUN OUT, Time for a bonus level", "Response", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	this->Hide();
	MyForm4^ lvl4 = gcnew MyForm4();
	lvl4->ShowDialog();
	this->Close();
}
};
}
