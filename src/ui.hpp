#pragma once

#include <QWidget>

#include "ui_mainwidget.h"

namespace pqe {

class GuiWrapperApp;

namespace forms {

class MainForm : public QWidget {
  Q_OBJECT

public:
  explicit MainForm(QWidget *parent, GuiWrapperApp &parentApp);

private slots:
  void _loadData();
  void _saveData();
  void _saveDataWithBackup();

private:
  Ui::mainForm _ui;
  GuiWrapperApp &_parentApp;

  void enableStuff();
  void fillData();
};

} // namespace forms

class GuiWrapperApp {
public:
  GuiWrapperApp();
  ~GuiWrapperApp();

  void show();

  friend class forms::MainForm;

private:
  QWidget *_widget = nullptr;
  forms::MainForm *_mainForm = nullptr;

  QByteArray _fileData;
};

} // namespace pqe

// p3qe
// Copyright (C) 2023 Maritsu
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
