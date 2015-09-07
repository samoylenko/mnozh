object frmMain: TfrmMain
  Left = 220
  Top = 117
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = '(A^B)(-1) = A(-1)^B(-1) - Самойленко, ОТЗИ 3б'
  ClientHeight = 446
  ClientWidth = 409
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label4: TLabel
    Left = 8
    Top = 112
    Width = 41
    Height = 13
    Alignment = taCenter
    Caption = '(A^B)(-1)'
  end
  object Label5: TLabel
    Left = 208
    Top = 112
    Width = 50
    Height = 13
    Alignment = taCenter
    Caption = 'A(-1)^B(-1)'
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 393
    Height = 97
    Caption = 'Множества'
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 19
      Width = 10
      Height = 13
      Caption = 'A:'
    end
    object Label2: TLabel
      Left = 8
      Top = 43
      Width = 10
      Height = 13
      Caption = 'B:'
    end
    object Label3: TLabel
      Left = 8
      Top = 67
      Width = 10
      Height = 13
      Caption = 'C:'
    end
    object edtA: TEdit
      Left = 24
      Top = 16
      Width = 361
      Height = 21
      TabOrder = 0
      Text = '(1,2), (5,1), (8,10), (9,15), (18,20)'
    end
    object edtB: TEdit
      Left = 24
      Top = 40
      Width = 361
      Height = 21
      TabOrder = 1
      Text = '(3,10), (5,1), (9,15), (20,5)'
    end
    object edtC: TEdit
      Left = 24
      Top = 64
      Width = 361
      Height = 21
      TabOrder = 2
      Text = '(3,9), (9,15), (8,10), (2,4)'
    end
  end
  object m1: TMemo
    Left = 8
    Top = 128
    Width = 193
    Height = 281
    TabStop = False
    TabOrder = 3
  end
  object m2: TMemo
    Left = 208
    Top = 128
    Width = 193
    Height = 281
    TabStop = False
    TabOrder = 4
  end
  object btnExit: TBitBtn
    Left = 304
    Top = 416
    Width = 99
    Height = 25
    Cancel = True
    Caption = 'Выход'
    ModalResult = 2
    TabOrder = 2
    OnClick = btnExitClick
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000120B0000120B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00330000000000
      03333377777777777F333301111111110333337F333333337F33330111111111
      0333337F333333337F333301111111110333337F333333337F33330111111111
      0333337F333333337F333301111111110333337F333333337F33330111111111
      0333337F3333333F7F333301111111B10333337F333333737F33330111111111
      0333337F333333337F333301111111110333337F33FFFFF37F3333011EEEEE11
      0333337F377777F37F3333011EEEEE110333337F37FFF7F37F3333011EEEEE11
      0333337F377777337F333301111111110333337F333333337F33330111111111
      0333337FFFFFFFFF7F3333000000000003333377777777777333}
    NumGlyphs = 2
  end
  object btnCheck: TBitBtn
    Left = 200
    Top = 416
    Width = 99
    Height = 25
    Caption = 'Проверить'
    Default = True
    TabOrder = 1
    OnClick = btnCheckClick
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000120B0000120B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00555555555555
      555555555555555555555555555555555555555555FF55555555555559055555
      55555555577FF5555555555599905555555555557777F5555555555599905555
      555555557777FF5555555559999905555555555777777F555555559999990555
      5555557777777FF5555557990599905555555777757777F55555790555599055
      55557775555777FF5555555555599905555555555557777F5555555555559905
      555555555555777FF5555555555559905555555555555777FF55555555555579
      05555555555555777FF5555555555557905555555555555777FF555555555555
      5990555555555555577755555555555555555555555555555555}
    NumGlyphs = 2
  end
  object pb1: TProgressBar
    Left = 8
    Top = 419
    Width = 185
    Height = 17
    Min = 0
    Max = 8
    Step = 1
    TabOrder = 5
  end
end
