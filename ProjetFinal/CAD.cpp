#include "pch.h"
#include "CAD.h"


CAD::CAD(void)
{
	this->chainecon = "Data Source=DESKTOP-FB31OJA;Initial Catalog=PROJET_POO2;User ID=tonton;Password=1999";

	this->requete = "Rien";

	this->connection = gcnew System::Data::SqlClient::SqlConnection(this->chainecon);
	this->command = gcnew System::Data::SqlClient::SqlCommand(this->requete, this->connection);
	this->sDataAdapter = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->dataSet = gcnew System::Data::DataSet();

	this->command->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ CAD::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->dataSet->Clear();
	this->requete = sSql;
	this->command->CommandText = this->requete;
	this->sDataAdapter->SelectCommand = this->command;
	this->sDataAdapter->Fill(this->dataSet, sDataTableName);

	return this->dataSet;
}
void CAD::actionRows(System::String^ sSql)
{
	this->requete = sSql;
	this->command->CommandText = this->requete;
	this->sDataAdapter->SelectCommand = this->command;
	this->connection->Open();
	this->command->ExecuteNonQuery();
	this->connection->Close();
}

System::Data::SqlClient::SqlDataReader^ CAD::getDataReader(System::String^ sSql)
{
	this->requete= sSql;
	this->command->CommandText = this->requete;
	this->connection->Open();
	this->DataReader = command->ExecuteReader();
	return DataReader;

}

System::Data::DataTable^ CAD::getDataTable(System::String^ sSql)
{
	this->requete = sSql;
	this->command->CommandText = this->requete;
	this->sDataAdapter->SelectCommand = this->command;
	System::Data::DataTable^ table = gcnew System::Data::DataTable;
	this->connection->Open();
	sDataAdapter->Fill(table);
	this->connection->Close();
	return table;

}