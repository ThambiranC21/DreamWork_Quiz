#pragma once

#include "Quiz.h"
#include "MyForm2.h"

	namespace quizDEMOGUI1 {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for MyForm1
		/// </summary>

		public ref class MyForm1 : public System::Windows::Forms::Form
		{
			Quiz* lvl1Quiz = new Quiz("madagascarTnFQ.txt");
			int lvl1Count = 1;

			   String^ lvl1Answer;

		public:
			MyForm1(void)
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
			~MyForm1()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Label^ lblQuestion;
		protected:
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Button^ btnTrue;
		private: System::Windows::Forms::Button^ btnFalse;


		private: System::Windows::Forms::Label^ label3;
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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
				this->lblQuestion = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->btnTrue = (gcnew System::Windows::Forms::Button());
				this->btnFalse = (gcnew System::Windows::Forms::Button());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->SuspendLayout();
				// 
				// lblQuestion
				// 
				this->lblQuestion->AutoSize = true;
				this->lblQuestion->BackColor = System::Drawing::Color::Transparent;
				this->lblQuestion->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lblQuestion->ForeColor = System::Drawing::Color::Transparent;
				this->lblQuestion->Location = System::Drawing::Point(45, 127);
				this->lblQuestion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->lblQuestion->Name = L"lblQuestion";
				this->lblQuestion->Size = System::Drawing::Size(120, 28);
				this->lblQuestion->TabIndex = 0;
				this->lblQuestion->Text = L"Question";
				this->lblQuestion->Click += gcnew System::EventHandler(this, &MyForm1::lblQuestion_Click);
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->BackColor = System::Drawing::Color::Transparent;
				this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->Location = System::Drawing::Point(718, 35);
				this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(27, 29);
				this->label2->TabIndex = 5;
				this->label2->Text = L"0";
				this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// btnTrue
				// 
				this->btnTrue->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTrue.BackgroundImage")));
				this->btnTrue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->btnTrue->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				this->btnTrue->ForeColor = System::Drawing::SystemColors::ControlText;
				this->btnTrue->Location = System::Drawing::Point(50, 391);
				this->btnTrue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->btnTrue->Name = L"btnTrue";
				this->btnTrue->Size = System::Drawing::Size(168, 70);
				this->btnTrue->TabIndex = 6;
				this->btnTrue->UseVisualStyleBackColor = true;
				this->btnTrue->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
				// 
				// btnFalse
				// 
				this->btnFalse->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFalse.BackgroundImage")));
				this->btnFalse->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->btnFalse->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				this->btnFalse->Location = System::Drawing::Point(280, 391);
				this->btnFalse->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->btnFalse->Name = L"btnFalse";
				this->btnFalse->Size = System::Drawing::Size(180, 70);
				this->btnFalse->TabIndex = 7;
				this->btnFalse->UseVisualStyleBackColor = true;
				this->btnFalse->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->BackColor = System::Drawing::Color::Transparent;
				this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label3->ForeColor = System::Drawing::Color::Transparent;
				this->label3->Location = System::Drawing::Point(95, 430);
				this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(0, 31);
				this->label3->TabIndex = 8;
				// 
				// MyForm1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ClientSize = System::Drawing::Size(786, 533);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->btnFalse);
				this->Controls->Add(this->btnTrue);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->lblQuestion);
				this->DoubleBuffered = true;
				this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Name = L"MyForm1";
				this->Text = L"MyForm1";
				this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
			std::vector<Question> questions = lvl1Quiz->getQuestions();

			lvl1Quiz->shuffleQuestions(questions);

			Question lvl1Question = *(questions.begin());

			std::string str = "Question 1 Of 8\n\n" + (lvl1Question.question);
			String^ sysStr = msclr::interop::marshal_as<String^>(str);

			this->lblQuestion->Text = sysStr;

			lvl1Quiz->setScore(0);
			this->label2->Text = lvl1Quiz->getScore().ToString();

			lvl1Answer = msclr::interop::marshal_as<String^>(lvl1Question.answer);

			questions.erase(questions.begin());
			lvl1Quiz->setQuestions(questions);

			lvl1Count++;
		}

		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			if (lvl1Answer == msclr::interop::marshal_as<String^>("True")) {
				lvl1Quiz->incrementScore();
				if (lvl1Count == 9) {
					MessageBox::Show("You are CORRECT! Play Level 2. NOTE: Complete Level 2 within 40 seconds", "Response");
					delete lvl1Quiz;
					this->Hide();
					MyForm2^ lvl2 = gcnew MyForm2();
					lvl2->ShowDialog();
					this->Close();
				}
				else {
					MessageBox::Show("You are CORRECT! Try Question " + msclr::interop::marshal_as<String^>(std::to_string(lvl1Count)), "Response");
				}
			}
			else {
				if (lvl1Count == 9) {
					MessageBox::Show("You are INCORRECT! The answer was FALSE! Play Level 2. NOTE: Complete Level 2 within 40 seconds", "Response");
					delete lvl1Quiz;
					this->Hide();
					MyForm2^ lvl2 = gcnew MyForm2();
					lvl2->ShowDialog();
					this->Close();
				}
				else {
					MessageBox::Show("You are INCORRECT! The answer was FALSE! Try Question " + msclr::interop::marshal_as<String^>(std::to_string(lvl1Count)), "Response");
				}
			}

			std::vector<Question> questions = lvl1Quiz->getQuestions();

			lvl1Quiz->shuffleQuestions(questions);

			Question lvl1Question = *(questions.begin());

			std::string str = "Question " + std::to_string(lvl1Count) + " Of 8\n\n" + (lvl1Question.question);
			String^ sysStr = msclr::interop::marshal_as<String^>(str);

			this->lblQuestion->Text = sysStr;

			this->label2->Text = lvl1Quiz->getScore().ToString();

			lvl1Answer = msclr::interop::marshal_as<String^>(lvl1Question.answer);

			questions.erase(questions.begin());
			lvl1Quiz->setQuestions(questions);

			lvl1Count++;
		}

		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			if (lvl1Answer == msclr::interop::marshal_as<String^>("False")) {
				lvl1Quiz->incrementScore();
				if (lvl1Count == 9) {
					MessageBox::Show("You are CORRECT! Play Level 2. NOTE: Complete Level 2 within 40 seconds", "Response");
					delete lvl1Quiz;
					this->Hide();
					MyForm2^ lvl2 = gcnew MyForm2();
					lvl2->ShowDialog();
					this->Close();
				}
				else {
					MessageBox::Show("You are CORRECT! Try Question " + msclr::interop::marshal_as<String^>(std::to_string(lvl1Count)), "Response");
				}
			}
			else {
				if (lvl1Count == 9) {
					MessageBox::Show("You are INCORRECT! The answer was TRUE! Play Level 2. NOTE: Complete Level 2 within 40 seconds", "Response");
					delete lvl1Quiz;
					this->Hide();
					MyForm2^ lvl2 = gcnew MyForm2();
					lvl2->ShowDialog();
					this->Close();
				}
				else {
					MessageBox::Show("You are INCORRECT! The answer was TRUE! Try Question " + msclr::interop::marshal_as<String^>(std::to_string(lvl1Count)), "Response");
				}
			}

			std::vector<Question> questions = lvl1Quiz->getQuestions();

			lvl1Quiz->shuffleQuestions(questions);

			Question lvl1Question = *(questions.begin());

			std::string str = "Question " + std::to_string(lvl1Count) + " Of 8\n\n" + (lvl1Question.question);
			String^ sysStr = msclr::interop::marshal_as<String^>(str);

			this->lblQuestion->Text = sysStr;

			this->label2->Text = lvl1Quiz->getScore().ToString();

			lvl1Answer = msclr::interop::marshal_as<String^>(lvl1Question.answer);

			questions.erase(questions.begin());
			lvl1Quiz->setQuestions(questions);

			lvl1Count++;
		}

		
		private: System::Void lblQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		
};
	}
