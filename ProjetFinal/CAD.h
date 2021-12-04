#pragma once
ref class CAD
{
private:
	System::String^ requete;
	System::String^ chainecon;
	System::Data::SqlClient::SqlConnection^ connection;
	System::Data::SqlClient::SqlCommand^ command;
	System::Data::SqlClient::SqlDataAdapter^ sDataAdapter;
	System::Data::DataSet^ dataSet;
	System::Data::SqlClient::SqlDataReader^ DataReader;
public:
	CAD(void);
	System::Data::DataSet^ getRows(System::String^, System::String^);
	void actionRows(System::String^);
	System::Data::DataTable^ getDataTable(System::String^);
	System::Data::SqlClient::SqlDataReader^ getDataReader(System::String^);
};