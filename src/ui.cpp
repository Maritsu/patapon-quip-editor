#include <QSaveFile>
#include <stdexcept>
#include <string>

#include "ui.hpp"
#include "constants.hpp"
#include "files.hpp"

namespace pqe {

namespace forms {

MainForm::MainForm(QWidget *parent, GuiWrapperApp &parentApp)
    : QWidget(parent), _parentApp(parentApp) {
  _ui.setupUi(parent);
  connect(_ui.loadBtn, &QPushButton::clicked, this, &MainForm::_loadData);
  connect(_ui.saveBtn, &QPushButton::clicked, this, &MainForm::_saveData);
  connect(_ui.saveBkBtn, &QPushButton::clicked, this,
          &MainForm::_saveDataWithBackup);
}

void MainForm::_loadData() {
  // not implemented
}

void MainForm::_saveData() {
  // not implemented
}

void MainForm::_saveDataWithBackup() {
  // not implemented
}

void MainForm::enableStuff() {
  // not implemented

void GuiWrapper::constructUi() {
  _widget = new QWidget();
  _mainForm.setupUi(_widget);
}

void MainForm::fillData() {
  // not implemented
  _widget->show();
}

} // namespace forms

GuiWrapperApp::GuiWrapperApp()
    : _widget(new QWidget()), _mainForm(new forms::MainForm(_widget, *this)) {}

GuiWrapperApp::~GuiWrapperApp() {
  delete _mainForm;
  delete _widget;
}

void GuiWrapperApp::show() { _widget->show(); }

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
