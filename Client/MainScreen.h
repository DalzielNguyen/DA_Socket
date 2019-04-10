#pragma once

//#include "PrivateChat.h"
namespace Client {
	ref class MainScreen;
}

#include "AppController.h"

namespace Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//User


	/// <summary>
	/// Summary for MainScreen
	/// </summary>
	public ref class MainScreen : public System::Windows::Forms::Form
	{
	public:
		MainScreen(void)
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
		~MainScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  DisplayChatBox;
	private: System::Windows::Forms::TextBox^  txtMessage;
	private: System::Windows::Forms::Label^  labMessage;
	private: System::Windows::Forms::Button^  butSend;
	private: System::Windows::Forms::Label^  labInfo;
	private: System::Windows::Forms::Label^  labName;
	private: System::Windows::Forms::TextBox^  txtUsername;
	private: System::Windows::Forms::Button^  butDisconnect;
	private: System::Windows::Forms::Label^  labOnline;
	private: System::Windows::Forms::ListBox^  lbOnlineUser;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DisplayChatBox = (gcnew System::Windows::Forms::TextBox());
			this->txtMessage = (gcnew System::Windows::Forms::TextBox());
			this->labMessage = (gcnew System::Windows::Forms::Label());
			this->butSend = (gcnew System::Windows::Forms::Button());
			this->labInfo = (gcnew System::Windows::Forms::Label());
			this->labName = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->butDisconnect = (gcnew System::Windows::Forms::Button());
			this->labOnline = (gcnew System::Windows::Forms::Label());
			this->lbOnlineUser = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CHAT BOX";
			this->label1->Click += gcnew System::EventHandler(this, &MainScreen::label1_Click);
			this->DisplayChatBox->Location = System::Drawing::Point(18, 38);
			this->DisplayChatBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->DisplayChatBox->Multiline = true;
			this->DisplayChatBox->Name = L"DisplayChatBox";
			this->DisplayChatBox->ReadOnly = true;
			this->DisplayChatBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->DisplayChatBox->Size = System::Drawing::Size(494, 356);
			this->DisplayChatBox->TabIndex = 1;
			this->txtMessage->Location = System::Drawing::Point(18, 442);
			this->txtMessage->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtMessage->Multiline = true;
			this->txtMessage->Name = L"txtMessage";
			this->txtMessage->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtMessage->Size = System::Drawing::Size(494, 58);
			this->txtMessage->TabIndex = 2;
			this->labMessage->AutoSize = true;
			this->labMessage->Location = System::Drawing::Point(21, 417);
			this->labMessage->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labMessage->Name = L"labMessage";
			this->labMessage->Size = System::Drawing::Size(90, 20);
			this->labMessage->TabIndex = 3;
			this->labMessage->Text = L"MESSAGE";
			this->butSend->Location = System::Drawing::Point(543, 442);
			this->butSend->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->butSend->Name = L"butSend";
			this->butSend->Size = System::Drawing::Size(130, 60);
			this->butSend->TabIndex = 4;
			this->butSend->Text = L"Send";
			this->butSend->UseVisualStyleBackColor = true;
			this->butSend->Click += gcnew System::EventHandler(this, &MainScreen::butSend_Click);
			this->labInfo->AutoSize = true;
			this->labInfo->Location = System::Drawing::Point(546, 294);
			this->labInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labInfo->Name = L"labInfo";
			this->labInfo->Size = System::Drawing::Size(223, 20);
			this->labInfo->TabIndex = 11;
			this->labInfo->Text = L"----------------- MY INFO -----------";
			this->labName->AutoSize = true;
			this->labName->Location = System::Drawing::Point(546, 323);
			this->labName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labName->Name = L"labName";
			this->labName->Size = System::Drawing::Size(55, 20);
			this->labName->TabIndex = 14;
			this->labName->Text = L"Name:";
			this->labName->Click += gcnew System::EventHandler(this, &MainScreen::label3_Click);
			this->txtUsername->Location = System::Drawing::Point(599, 317);
			this->txtUsername->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->ReadOnly = true;
			this->txtUsername->Size = System::Drawing::Size(148, 26);
			this->txtUsername->TabIndex = 17;
			this->butDisconnect->Location = System::Drawing::Point(600, 358);
			this->butDisconnect->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->butDisconnect->Name = L"butDisconnect";
			this->butDisconnect->Size = System::Drawing::Size(148, 35);
			this->butDisconnect->TabIndex = 19;
			this->butDisconnect->Text = L"Logout";
			this->butDisconnect->UseVisualStyleBackColor = true;
			this->butDisconnect->Click += gcnew System::EventHandler(this, &MainScreen::butDisconnect_Click);
			this->labOnline->AutoSize = true;
			this->labOnline->Location = System::Drawing::Point(543, 14);
			this->labOnline->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labOnline->Name = L"labOnline";
			this->labOnline->Size = System::Drawing::Size(144, 20);
			this->labOnline->TabIndex = 20;
			this->labOnline->Text = L"ONLINE";
			this->labOnline->Click += gcnew System::EventHandler(this, &MainScreen::labOnline_Click);
			this->lbOnlineUser->FormattingEnabled = true;
			this->lbOnlineUser->ItemHeight = 20;
			this->lbOnlineUser->Location = System::Drawing::Point(543, 45);
			this->lbOnlineUser->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->lbOnlineUser->Name = L"lbOnlineUser";
			this->lbOnlineUser->Size = System::Drawing::Size(204, 244);
			this->lbOnlineUser->TabIndex = 21;
			this->lbOnlineUser->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainScreen::lbOnlineUser_MouseDoubleClick);
			this->AcceptButton = this->butSend;
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(766, 512);
			this->Controls->Add(this->lbOnlineUser);
			this->Controls->Add(this->labOnline);
			this->Controls->Add(this->butDisconnect);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->labName);
			this->Controls->Add(this->labInfo);
			this->Controls->Add(this->butSend);
			this->Controls->Add(this->labMessage);
			this->Controls->Add(this->txtMessage);
			this->Controls->Add(this->DisplayChatBox);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"MainScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Chat Client";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainScreen::MainScreen_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainScreen::MainScreen_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MainScreen::MainScreen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MainScreen_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void butSend_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MainScreen_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
	public: void AddTextToContent(String^ text);
	public: void UpdateOnlineUsers();
	public: void AddAnOnlineUser(String^ username);
	public: void DeleteAnOnlineUser(String^ username);
	public: void SetOnlineUsers(array<String^>^ arrOnlineUsers);
	private: System::Void lbOnlineUser_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void butDisconnect_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MainScreen_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e);
	private: System::Void labOnline_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
