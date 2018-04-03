object Form1: TForm1
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'mPAZARCHAT'
  ClientHeight = 361
  ClientWidth = 387
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 95
    Top = 101
    Width = 35
    Height = 13
    Caption = 'saniye:'
  end
  object Label2: TLabel
    Left = 354
    Top = 303
    Width = 25
    Height = 13
    Caption = 'kojd'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 8
    Top = 295
    Width = 111
    Height = 13
    Caption = 'toplam atilan pm sayisi:'
  end
  object Label6: TLabel
    Left = 8
    Top = 314
    Width = 100
    Height = 13
    Caption = 'toplam all chat flood:'
  end
  object lpm: TLabel
    Left = 125
    Top = 295
    Width = 7
    Height = 13
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lchat: TLabel
    Left = 125
    Top = 314
    Width = 7
    Height = 13
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label7: TLabel
    Left = 175
    Top = 101
    Width = 181
    Height = 13
    Caption = '-> 30sn'#39'den a'#351'a'#287#305's'#305' '#246'nerilmez !!!'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object tmsg: TEdit
    Left = 8
    Top = 8
    Width = 345
    Height = 21
    TabOrder = 0
    Text = 'MSG'
  end
  object ckarus: TCheckBox
    Left = 8
    Top = 35
    Width = 105
    Height = 17
    Caption = 'sadece karuslara'
    TabOrder = 1
  end
  object chuman: TCheckBox
    Left = 8
    Top = 58
    Width = 113
    Height = 17
    Caption = 'sadece humanlara'
    TabOrder = 2
  end
  object clvl: TCheckBox
    Left = 144
    Top = 35
    Width = 137
    Height = 17
    Caption = 'leveli y'#252'ksek olanlara >'
    TabOrder = 3
  end
  object tlvl: TEdit
    Left = 280
    Top = 35
    Width = 33
    Height = 21
    TabOrder = 4
    Text = '80'
  end
  object bbasla: TButton
    Left = 8
    Top = 96
    Width = 81
    Height = 25
    Caption = 'baslat'
    TabOrder = 5
    OnClick = bbaslaClick
  end
  object bdur: TButton
    Left = 8
    Top = 121
    Width = 81
    Height = 24
    Caption = 'durdur'
    TabOrder = 6
    OnClick = bdurClick
  end
  object tint: TEdit
    Left = 136
    Top = 98
    Width = 33
    Height = 21
    TabOrder = 7
    Text = '60'
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 160
    Width = 361
    Height = 129
    Caption = 'all chat'
    TabOrder = 8
    object Label3: TLabel
      Left = 8
      Top = 43
      Width = 30
      Height = 13
      Caption = 'salise:'
    end
    object Label4: TLabel
      Left = 91
      Top = 43
      Width = 66
      Height = 13
      Caption = ' (1000 = 1sn)'
    end
    object tall: TEdit
      Left = 8
      Top = 16
      Width = 337
      Height = 21
      TabOrder = 0
      Text = 'msg'
    end
    object tint2: TEdit
      Left = 44
      Top = 40
      Width = 41
      Height = 21
      TabOrder = 1
      Text = '1000'
    end
    object bbasla2: TButton
      Left = 3
      Top = 67
      Width = 65
      Height = 27
      Caption = 'basla'
      TabOrder = 2
      OnClick = bbasla2Click
    end
    object bdur2: TButton
      Left = 3
      Top = 96
      Width = 65
      Height = 26
      Caption = 'dur'
      TabOrder = 3
      OnClick = bdur2Click
    end
  end
  object Button1: TButton
    Left = 267
    Top = 295
    Width = 81
    Height = 25
    Caption = '*yard'#305'm'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 9
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 8
    Top = 333
    Width = 57
    Height = 21
    Caption = '^ s'#305'f'#305'rla'
    TabOrder = 10
    OnClick = Button2Click
  end
  object tmpm: TTimer
    Enabled = False
    OnTimer = tmpmTimer
    Left = 288
    Top = 112
  end
  object tmall: TTimer
    Enabled = False
    OnTimer = tmallTimer
    Left = 280
    Top = 208
  end
end
