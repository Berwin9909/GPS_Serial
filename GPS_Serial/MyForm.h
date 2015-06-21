#pragma once

namespace GPS_Serial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::IO::Ports::SerialPort^  CommPort;
	private: System::Windows::Forms::ComboBox^  cbPort;
	private: System::Windows::Forms::ComboBox^  cbBaud;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  lbError;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  tbRawData;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  tbGPGGA;
	private: System::Windows::Forms::TextBox^  tbGPRMC;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  tbGPGSV4;
	private: System::Windows::Forms::TextBox^  tbGPGSV3;
	private: System::Windows::Forms::TextBox^  tbGPGSV2;
	private: System::Windows::Forms::TextBox^  tbGPGSV1;
	private: System::Windows::Forms::TextBox^  tbGPGSA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SatNo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Elev;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Az;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SNR;
	private: System::ComponentModel::IContainer^  components;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^  dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(300,
				50));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->CommPort = (gcnew System::IO::Ports::SerialPort(this->components));
			this->cbPort = (gcnew System::Windows::Forms::ComboBox());
			this->cbBaud = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lbError = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbRawData = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tbGPGSV4 = (gcnew System::Windows::Forms::TextBox());
			this->tbGPGSV3 = (gcnew System::Windows::Forms::TextBox());
			this->tbGPGSV2 = (gcnew System::Windows::Forms::TextBox());
			this->tbGPGSV1 = (gcnew System::Windows::Forms::TextBox());
			this->tbGPGSA = (gcnew System::Windows::Forms::TextBox());
			this->tbGPRMC = (gcnew System::Windows::Forms::TextBox());
			this->tbGPGGA = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->SatNo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Elev = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Az = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SNR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(43, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Quit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(43, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Connect";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// cbPort
			// 
			this->cbPort->FormattingEnabled = true;
			this->cbPort->Location = System::Drawing::Point(57, 49);
			this->cbPort->Name = L"cbPort";
			this->cbPort->Size = System::Drawing::Size(61, 21);
			this->cbPort->TabIndex = 2;
			// 
			// cbBaud
			// 
			this->cbBaud->FormattingEnabled = true;
			this->cbBaud->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"300", L"600", L"1200", L"2400", L"4800", L"9600",
					L"14400", L"19200", L"28800", L"38400", L"57600", L"115200", L"230400"
			});
			this->cbBaud->Location = System::Drawing::Point(57, 77);
			this->cbBaud->Name = L"cbBaud";
			this->cbBaud->Size = System::Drawing::Size(61, 21);
			this->cbBaud->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Port";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Baud";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lbError);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->cbBaud);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->cbPort);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(184, 177);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Comm Config";
			// 
			// lbError
			// 
			this->lbError->AutoSize = true;
			this->lbError->Location = System::Drawing::Point(60, 22);
			this->lbError->Name = L"lbError";
			this->lbError->Size = System::Drawing::Size(46, 13);
			this->lbError->TabIndex = 7;
			this->lbError->Text = L"No Error";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Status";
			// 
			// tbRawData
			// 
			this->tbRawData->Location = System::Drawing::Point(6, 351);
			this->tbRawData->Name = L"tbRawData";
			this->tbRawData->Size = System::Drawing::Size(503, 20);
			this->tbRawData->TabIndex = 7;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tbGPGSV4);
			this->groupBox2->Controls->Add(this->tbGPGSV3);
			this->groupBox2->Controls->Add(this->tbGPGSV2);
			this->groupBox2->Controls->Add(this->tbGPGSV1);
			this->groupBox2->Controls->Add(this->tbGPGSA);
			this->groupBox2->Controls->Add(this->tbGPRMC);
			this->groupBox2->Controls->Add(this->tbGPGGA);
			this->groupBox2->Controls->Add(this->tbRawData);
			this->groupBox2->Location = System::Drawing::Point(12, 356);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(522, 377);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Raw Data";
			// 
			// tbGPGSV4
			// 
			this->tbGPGSV4->Location = System::Drawing::Point(7, 184);
			this->tbGPGSV4->Name = L"tbGPGSV4";
			this->tbGPGSV4->Size = System::Drawing::Size(502, 20);
			this->tbGPGSV4->TabIndex = 14;
			// 
			// tbGPGSV3
			// 
			this->tbGPGSV3->Location = System::Drawing::Point(7, 158);
			this->tbGPGSV3->Name = L"tbGPGSV3";
			this->tbGPGSV3->Size = System::Drawing::Size(502, 20);
			this->tbGPGSV3->TabIndex = 13;
			// 
			// tbGPGSV2
			// 
			this->tbGPGSV2->Location = System::Drawing::Point(7, 132);
			this->tbGPGSV2->Name = L"tbGPGSV2";
			this->tbGPGSV2->Size = System::Drawing::Size(502, 20);
			this->tbGPGSV2->TabIndex = 12;
			// 
			// tbGPGSV1
			// 
			this->tbGPGSV1->Location = System::Drawing::Point(7, 106);
			this->tbGPGSV1->Name = L"tbGPGSV1";
			this->tbGPGSV1->Size = System::Drawing::Size(502, 20);
			this->tbGPGSV1->TabIndex = 11;
			// 
			// tbGPGSA
			// 
			this->tbGPGSA->Location = System::Drawing::Point(6, 80);
			this->tbGPGSA->Name = L"tbGPGSA";
			this->tbGPGSA->Size = System::Drawing::Size(502, 20);
			this->tbGPGSA->TabIndex = 10;
			// 
			// tbGPRMC
			// 
			this->tbGPRMC->Location = System::Drawing::Point(7, 54);
			this->tbGPRMC->Name = L"tbGPRMC";
			this->tbGPRMC->Size = System::Drawing::Size(502, 20);
			this->tbGPRMC->TabIndex = 9;
			// 
			// tbGPGGA
			// 
			this->tbGPGGA->Location = System::Drawing::Point(7, 28);
			this->tbGPGGA->Name = L"tbGPGGA";
			this->tbGPGGA->Size = System::Drawing::Size(502, 20);
			this->tbGPGGA->TabIndex = 8;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->SatNo,
					this->Elev, this->Az, this->SNR
			});
			this->dataGridView1->Location = System::Drawing::Point(859, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(392, 338);
			this->dataGridView1->TabIndex = 9;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(859, 356);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Polar;
			series1->CustomProperties = L"PolarDrawingStyle=Marker";
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->Points->Add(dataPoint1);
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(392, 371);
			this->chart1->TabIndex = 10;
			this->chart1->Text = L"chart1";
			// 
			// groupBox3
			// 
			this->groupBox3->Location = System::Drawing::Point(203, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(640, 337);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"groupBox3";
			// 
			// groupBox4
			// 
			this->groupBox4->Location = System::Drawing::Point(12, 196);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(184, 154);
			this->groupBox4->TabIndex = 12;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Date / Time";
			// 
			// SatNo
			// 
			this->SatNo->HeaderText = L"Sat #";
			this->SatNo->Name = L"SatNo";
			this->SatNo->ReadOnly = true;
			// 
			// Elev
			// 
			this->Elev->HeaderText = L"El";
			this->Elev->Name = L"Elev";
			this->Elev->ReadOnly = true;
			// 
			// Az
			// 
			this->Az->HeaderText = L"Az";
			this->Az->Name = L"Az";
			this->Az->ReadOnly = true;
			// 
			// SNR
			// 
			this->SNR->HeaderText = L"SNR";
			this->SNR->Name = L"SNR";
			this->SNR->ReadOnly = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1263, 745);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"GPS Interface";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		void splitter(String^ line)
		{
			String^ delimStr = ",*";
			array<Char>^ delimiter = delimStr->ToCharArray();
			array<String^>^ words;
			words = line->Split(delimiter);

			if (words[0] == "$GPGGA")

			{
				tbGPGGA->Text = line->ToString();
				tbGPGGA->Update();
			}
			
			if (words[0] == "$GPRMC")
			{
				tbGPRMC->Text = line->ToString();
				tbGPRMC->Update();
			}

			if (words[0] == "$GPGSA")
			{
				tbGPGSA->Text = line->ToString();
				tbGPGSA->Update();

			}
			if (words[0] == "$GPGSV")
			{
				if (words[2] == "1")
					tbGPGSV1->Text = line->ToString();
				
				if (words[2] == "2")
					tbGPGSV2->Text = line->ToString();

				if (words[2] == "3")
					tbGPGSV3->Text = line->ToString();

				if (words[2] == "4")
					tbGPGSV4->Text = line->ToString();
			}
			
		


		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Close();
		CommPort->Close();

	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		int n;
		array<Object^>^ objectArray = this->CommPort->GetPortNames();
		cbPort->Items->AddRange(objectArray);
		cbBaud->SelectedIndex = 5;
		cbPort->SelectedIndex = 0;


	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		String^ Port;
		String^ str;
		Int32 Baud;
		Baud = Int32::Parse(this->cbBaud->SelectedItem->ToString());
		Port = this->cbPort->SelectedItem->ToString();
		
		
		try {
		
			lbError->Text = "Not Configured";
			CommPort->PortName = Port;
			CommPort->BaudRate = Baud;
			CommPort->Open();
			lbError->Text = "Port Opened";
		
		}
		catch (...)
		{
			lbError->Text = "Port Configured Incorrectly";

		}

		while (true)
		{
			str = CommPort->ReadLine();
			tbRawData->Text = str->ToString();
			Application::DoEvents();
			splitter(str);
		}





	}
};
}
