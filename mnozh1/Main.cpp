//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMain *frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnExitClick(TObject *Sender)
{
    Close();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::Parse(AnsiString str, TStringList *lst)
{
    int i, j;

    lst->Clear();

    for( i = 1; i < str.Length(); )
    {
        while( str[i] != '(' ) i++;
        j = i;
        while( ( str[j] != ')' )&&( j++ <= str.Length() ) );

        lst->Add( str.SubString( i, j-i+1 ) );
        i = j;
    }

    Dupes( lst );
}

//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnCheckClick(TObject *Sender)
{
    TStringList *m_A   = new TStringList;
    TStringList *m_B   = new TStringList;
    TStringList *m_C   = new TStringList;
    TStringList *temp1 = new TStringList;
    TStringList *temp2 = new TStringList;

    Parse( edtA->Text, m_A );
    Parse( edtB->Text, m_B );
    Parse( edtC->Text, m_C );

    Pe( m_A, m_B, temp1 );
    m1->Lines->Add( "A^B = " + ToStr( temp1 ) );
    Obr( temp1, temp2 );
    m1->Lines->Add( "(AvB)(-1) = " + ToStr( temp2 ) );

    Obr( m_A, temp1 );
    m2->Lines->Add( "A(-1) = " + ToStr( temp1 ) );
    Obr( m_B, temp2 );
    m2->Lines->Add( "B(-1) = " + ToStr( temp2 ) );
    Pe( temp1, temp2, m_A );
    m2->Lines->Add( "A(-1)^B(-1) = " + ToStr( m_A ) );

    m1->Lines->Add( "" );
    m2->Lines->Add( "" );

    delete temp1;
    delete temp2;
    delete m_A;
    delete m_B;
    delete m_C;
}
//---------------------------------------------------------------------------

AnsiString __fastcall TfrmMain::ToStr(TStringList *lst)
{
    AnsiString res = "";

    for( int i = 1; i <= lst->Count; i++ )
    {
        res += lst->Strings[i-1];
        if( i < lst->Count ) res += ", ";
    }

    if ( res == "" ) res = "< NULL >";

    return res;
}

//---------------------------------------------------------------------------
void __fastcall TfrmMain::Dop(TStringList * m_A, TStringList * m_B, TStringList * res)
{
    res->Clear();

    for( int i = 0; i < m_A->Count; i++ )
    {
        bool exists = false;

        for(  int j = 0; j < m_B->Count; j++ )
        {
            if( m_A->Strings[i] == m_B->Strings[j] )
            {
                exists = true;
            }
        }

        if( !exists ) res->Add( m_A->Strings[i] );
    }
}

//---------------------------------------------------------------------------
void __fastcall TfrmMain::Dupes(TStringList * lst)
{
    for( int i = 0; i < lst->Count; i++ )
    {
        for( int j = i; ++j < lst->Count; j )
        {
            if( lst->Strings[i] == lst->Strings[j] )
            {
                lst->Delete( j );
            }
        }
    }
}

//---------------------------------------------------------------------------

void __fastcall TfrmMain::Obr(TStringList * m_A, TStringList * res)
{
    res->Clear();

    for( int i = 0; i < m_A->Count; i++ )
    {
        AnsiString temp1 = m_A->Strings[i];
        int j = 1;
        while( temp1[j++] != ',' );
        res->Add( "(" + temp1.SubString(j, temp1.Length() - j) + "," + temp1.SubString(2, j-3) + ")" );
    }
}

//---------------------------------------------------------------------------
void __fastcall TfrmMain::Ob(TStringList * m_A, TStringList * m_B, TStringList * res)
{
    res->Clear();

    for( int i = 0; i < m_A->Count; i++ )
    {
        res->Add( m_A->Strings[i] );
    }
    for( int i = 0; i < m_B->Count; i++ )
    {
        res->Add( m_B->Strings[i] );
    }

    Dupes( res );
}

//---------------------------------------------------------------------------
void __fastcall TfrmMain::Pe(TStringList * m_A, TStringList * m_B, TStringList * res)
{
    res->Clear();

    for( int i = 0; i < m_A->Count; i++ )
    {
        bool exists = false;

        for(  int j = 0; j < m_B->Count; j++ )
        {
            if( m_A->Strings[i] == m_B->Strings[j] )
            {
                exists = true;
            }
        }

        if( exists ) res->Add( m_A->Strings[i] );
    }
}
//---------------------------------------------------------------------------

